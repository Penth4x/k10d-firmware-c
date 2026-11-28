#!/usr/bin/env python3
"""type_recovery.py -- recover object types for the decompiled tree (step 1 of the type-recovery pass).

An opaque `void*` object whose fields are dereferenced by raw offset is a code smell: the struct type
is unrecovered. Recovering it de-soups every function that uses the type AND resolves vtable dispatch
to named methods. This is the foundation:

  * vtable->class map: the class name encodes its vtable address (`cls_105a5c2c` <-> vtable 0x105a5c2c),
    and constructors assign `field = &DAT_105a5c2c`. So a vtable address 0x<addr> -> struct `cls_<addr>`.
  * EVIDENT type detection: for each function, a param/local whose type is already made concrete by the
    decompiled C -- it is cast to a `cls_XXXX *` somewhere in the body, or declared as one -- has a
    known type with NO propagation needed. These are the cases we can retype + de-soup immediately.

Later steps propagate types across the call graph (constructor return -> caller var -> callee param).

Usage:
  type_recovery.py --map                 # build + print the vtable->class map coverage
  type_recovery.py --evident [--unit U]  # list functions with evident object-param types
  type_recovery.py --struct cls_105a5c2c # print a class's struct definition
"""
import os, re, sys, glob, argparse

ROOT    = "/home/memorai/k10d-firmware-c"
STRUCTS = os.path.join(ROOT, "cpu/include/structs.h")
CLS_RE  = re.compile(r'\bcls_[0-9a-fA-F]{6,8}\b')
VTAB_RE = re.compile(r'&DAT_([0-9a-fA-F]{8})')          # vtable address references
TYPEDEF = re.compile(r'typedef struct (cls_[0-9a-fA-F]+)\s*\{(.*?)\}\s*\1\s*;', re.S)

def struct_defs():
    """All cls_XXXX struct definitions, by name."""
    txt = open(STRUCTS, errors="ignore").read()
    return {m.group(1): m.group(0) for m in TYPEDEF.finditer(txt)}

def vtable_class_map(defs):
    """vtable address (int) -> class name, for every class whose struct is defined. The class name IS
    the vtable address by convention, so this is the identity restricted to defined structs."""
    m = {}
    for name in defs:
        addr = int(name.split("_")[1], 16)
        m[addr] = name
    return m

def evident_param_types(src, defs):
    """{param_name: cls_type} for params whose type the decompiled C already makes concrete: declared as
    cls_XXXX* in the signature, or cast to (cls_XXXX *)param somewhere in the body. No propagation."""
    out = {}
    sig = re.search(r'\b\w[\w ]*\b(\w+)\s*\(([^)]*)\)\s*\{', src, re.S)
    params = []
    if sig:
        for p in sig.group(2).split(","):
            mnm = re.search(r'(\w+)\s*$', p.strip())
            pty = re.search(r'(cls_[0-9a-fA-F]+)\s*\*', p)
            if mnm:
                params.append(mnm.group(1))
                if pty and pty.group(1) in defs:
                    out[mnm.group(1)] = pty.group(1)      # declared with a class type already
    # casts `(cls_XXXX *)param` in the body
    for m in re.finditer(r'\(\s*(cls_[0-9a-fA-F]+)\s*\*\s*\)\s*\(?\s*(?:\(int\)\s*)?(\w+)', src):
        cls, var = m.group(1), m.group(2)
        if cls in defs and var in params and var not in out:
            out[var] = cls
    return out


# -------- vtable membership: self (param_1) class = the class whose vtable lists the method --------
import struct
_FW_PATH = "/home/memorai/k10d-re/FWDC162B.BIN"

def _firmware():
    try: return open(_FW_PATH, "rb").read()
    except OSError: return b""

def va2name_map():
    """{function VA -> name} from the cpu/src @k10d headers."""
    out = {}
    for f in glob.glob(os.path.join(ROOT, "cpu/src", "*", "*.c")):
        m = re.search(r'@k10d\s+\S+\s+@\s+0x([0-9a-fA-F]+)', open(f, errors="ignore").read(400))
        if m: out[int(m.group(1), 16)] = os.path.splitext(os.path.basename(f))[0]
    return out

def method_self_class(defs=None):
    """{method VA -> cls name} by vtable membership: scan each class's vtable (bounded by the next class
    address) in the firmware, collect entries that are known function VAs. For a method in multiple
    vtables (inheritance) pick the smallest-struct class (the base, where it is declared)."""
    defs = defs or struct_defs()
    fw = _firmware()
    if not fw: return {}
    known = set(va2name_map())
    def wd(va):
        o = va - 0x10000000
        return struct.unpack(">I", fw[o:o+4])[0] if 0 <= o <= len(fw) - 4 else 0
    cls_addrs = sorted(int(n.split("_")[1], 16) for n in defs)
    method_cls = {}
    for i, C in enumerate(cls_addrs):
        end = min(cls_addrs[i+1] if i+1 < len(cls_addrs) else C + 0x400, C + 0x400)
        va = C
        while va < end:
            w = wd(va)
            if w in known:
                method_cls.setdefault(w, []).append(C)
            va += 4
    # resolve inheritance: smallest struct = base
    size = lambda addr: len(defs.get("cls_%x" % addr, ""))
    return {mva: ("cls_%x" % min(cs, key=size)) for mva, cs in method_cls.items()}


# -------- caller propagation: flow known types through call sites to a fixpoint --------
import json
_SIG   = re.compile(r"(\b[\w ]*\b)\s*(\w+)\s*\(([^)]*)\)\s*\{", re.S)
_HDRVA = re.compile(r"@k10d\s+\S+\s+@\s+0x([0-9a-fA-F]+)")
_CLS   = re.compile(r"\b(cls_[0-9a-fA-F]+)\b")
_KW    = {"if","while","for","switch","sizeof","return","CONCAT22","CONCAT44","do","else"}
RESOLVED_CACHE = os.path.join(ROOT, "cleanup/resolved_types.json")

def _strip_casts(a):
    a = a.strip()
    for _ in range(4):
        a = re.sub(r"\([^()]*\)", "", a).strip()
    return a.strip()

def _call_args(src, funcs):
    """yield (callee, [arg exprs]) for each call to a known function."""
    for m in re.finditer(r"\b([a-zA-Z_]\w*)\s*\(", src):
        name = m.group(1)
        if name in _KW or name not in funcs:
            continue
        i = m.end(); depth = 1; args = [""]; j = i
        while j < len(src) and depth > 0:
            c = src[j]
            if c == "(":
                depth += 1; args[-1] += c
            elif c == ")":
                depth -= 1
                if depth > 0: args[-1] += c
            elif c == "," and depth == 1:
                args.append("")
            else:
                args[-1] += c
            j += 1
        yield name, args

def propagate_param_types(defs=None, max_iter=12):
    """{func name: {param_index: cls}} after seeding from declared/evident types + vtable self-class and
    propagating typed arguments through call sites (incl. constructor-return locals) to a fixpoint."""
    defs = defs or struct_defs()
    funcs = {}
    for f in glob.glob(os.path.join(ROOT, "cpu/src", "*", "*.c")):
        src = open(f, errors="ignore").read()
        m = _SIG.search(src); mh = _HDRVA.search(src[:400])
        if not m or not mh:
            continue
        nm = os.path.splitext(os.path.basename(f))[0]
        pnames = [ (re.search(r"(\w+)\s*$", pp.strip()) or [None, None]) for pp in m.group(3).split(",") ]
        pnames = [ (x.group(1) if hasattr(x, "group") else None) for x in pnames ]
        rc = _CLS.search(m.group(1)); ret = rc.group(1) if (rc and "*" in m.group(1)) else None
        funcs[nm] = dict(src=src, va=int(mh.group(1), 16), pnames=pnames, ret=ret)
    msc = method_self_class(defs)
    ptypes = {nm: {} for nm in funcs}
    for nm, d in funcs.items():
        et = evident_param_types(d["src"], defs)
        for i, pnm in enumerate(d["pnames"]):
            if pnm and pnm in et:
                ptypes[nm][i] = et[pnm]
        if d["pnames"] and d["pnames"][0] and 0 not in ptypes[nm] and d["va"] in msc:
            ptypes[nm][0] = msc[d["va"]]
    conflict = set()
    for _ in range(max_iter):
        changed = 0
        for nm, d in funcs.items():
            var_t = {}
            for i, pnm in enumerate(d["pnames"]):
                if pnm and i in ptypes[nm]:
                    var_t[pnm] = ptypes[nm][i]
            for am in re.finditer(r"\b(\w+)\s*=\s*([a-zA-Z_]\w*)\s*\(", d["src"]):
                lhs, callee = am.group(1), am.group(2)
                if callee in funcs and funcs[callee]["ret"]:
                    var_t[lhs] = funcs[callee]["ret"]
            for callee, args in _call_args(d["src"], funcs):
                if callee in conflict:
                    continue
                for k, a in enumerate(args):
                    v = _strip_casts(a)
                    if v in var_t:
                        if k not in ptypes[callee]:
                            ptypes[callee][k] = var_t[v]; changed += 1
                        elif ptypes[callee][k] != var_t[v] and k == 0:
                            conflict.add(callee); ptypes[callee] = {}
        if not changed:
            break
    return {nm: {str(k): v for k, v in t.items()} for nm, t in ptypes.items() if t}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--map", action="store_true")
    ap.add_argument("--evident", action="store_true")
    ap.add_argument("--unit")
    ap.add_argument("--struct")
    ap.add_argument("--propagate", action="store_true", help="run caller propagation; write cleanup/resolved_types.json")
    a = ap.parse_args()
    defs = struct_defs()
    if a.propagate:
        res = propagate_param_types(defs)
        os.makedirs(os.path.dirname(RESOLVED_CACHE), exist_ok=True)
        json.dump(res, open(RESOLVED_CACHE, 'w'))
        total = sum(len(v) for v in res.values())
        print(f'resolved {total} param types across {len(res)} functions -> {RESOLVED_CACHE}')
        return

    if a.struct:
        print(defs.get(a.struct, f"(no struct {a.struct} in structs.h)")); return

    vmap = vtable_class_map(defs)
    if a.map:
        print(f"class structs defined: {len(defs)}")
        print(f"vtable->class map entries: {len(vmap)}  (class name == vtable address)")
        # how many distinct vtable addresses are actually referenced in cpu/src, and how many map?
        refs = set()
        for f in glob.glob(os.path.join(ROOT, "cpu/src", "*", "*.c")):
            for r in VTAB_RE.findall(open(f, errors="ignore").read()):
                refs.add(int(r, 16))
        mapped = sum(1 for r in refs if r in vmap)
        print(f"distinct &DAT_ vtable addresses referenced in cpu/src: {len(refs)}")
        print(f"  of those with a defined class struct: {mapped}  ({len(refs)-mapped} vtables without a cls_ struct)")
        return

    if a.evident:
        files = glob.glob(os.path.join(ROOT, "cpu/src", a.unit or "*", "*.c"))
        total = withtype = 0
        examples = []
        for f in sorted(files):
            src = open(f, errors="ignore").read()
            et = evident_param_types(src, defs)
            total += 1
            if et:
                withtype += 1
                if len(examples) < 15:
                    examples.append(f"  {os.path.basename(f)[:-2]:44s} {et}")
        print(f"functions: {total}; with >=1 EVIDENT object-param type: {withtype} ({100*withtype//max(total,1)}%)")
        print("\n".join(examples))
        return
    ap.print_help()

if __name__ == "__main__":
    main()
