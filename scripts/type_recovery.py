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

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--map", action="store_true")
    ap.add_argument("--evident", action="store_true")
    ap.add_argument("--unit")
    ap.add_argument("--struct")
    a = ap.parse_args()
    defs = struct_defs()

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
