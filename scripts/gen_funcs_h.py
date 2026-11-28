#!/usr/bin/env python3
"""gen_funcs_h.py -- regenerate cpu/include/funcs.h from the C function DEFINITIONS.

funcs.h is a DERIVED artifact: every prototype is the signature of a function defined in cpu/src.
So a signature change (e.g. de-souping retypes a param `void*` -> `cls_XXXX*`) should flow into
funcs.h automatically -- the prototype must never constrain the definition. This extracts each
cpu/src/*.c function's signature and emits the prototype, preserving any prototypes in the current
funcs.h that do NOT correspond to a cpu/src file (hand-asm / intrinsic / trap functions).

  gen_funcs_h.py --verify   # compare generated prototypes to the current funcs.h; report mismatches
  gen_funcs_h.py --write    # rewrite cpu/include/funcs.h
"""
import os, re, sys, glob, argparse

ROOT  = "/home/memorai/k10d-firmware-c"
FUNCS = os.path.join(ROOT, "cpu/include/funcs.h")
BLOCK_COMMENT = re.compile(r'/\*.*?\*/', re.S)
LINE_COMMENT  = re.compile(r'//[^\n]*')

def signature_of(path):
    """The function's signature (return type + name + params), or None. Strip comments/# lines, then the
    text up to the first top-level '{' is the signature."""
    src = open(path, errors="ignore").read()
    src = BLOCK_COMMENT.sub("", src)
    src = LINE_COMMENT.sub("", src)
    src = "\n".join(l for l in src.splitlines() if not l.lstrip().startswith("#"))
    i = src.find("{")
    if i < 0:
        return None
    sig = " ".join(src[:i].split())           # collapse whitespace/newlines
    name = os.path.splitext(os.path.basename(path))[0]
    if not re.search(r'\b' + re.escape(name) + r'\s*\(', sig):
        return None                            # defensively: signature must contain the function name
    return sig

def generated_protos():
    protos = {}                                # name -> "signature;"
    for f in sorted(glob.glob(os.path.join(ROOT, "cpu/src", "*", "*.c"))):
        sig = signature_of(f)
        name = os.path.splitext(os.path.basename(f))[0]
        if sig:
            protos[name] = sig + ";"
    return protos

PROTO_NAME = re.compile(r'\b(\w+)\s*\([^;]*\)\s*;')

def current_protos():
    protos = {}
    for ln in open(FUNCS, errors="ignore"):
        s = ln.strip()
        m = PROTO_NAME.search(s)
        if s.endswith(";") and m and not s.startswith(("#", "typedef", "struct", "extern \"C\"")):
            protos[m.group(1)] = s
    return protos

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--verify", action="store_true")
    ap.add_argument("--write", action="store_true")
    a = ap.parse_args()
    gen, cur = generated_protos(), current_protos()

    if a.verify:
        extras = [n for n in cur if n not in gen]     # prototypes not backed by a cpu/src .c
        mism = [(n, cur[n], gen[n]) for n in gen if n in cur and cur[n] != gen[n]]
        print(f"cpu/src functions: {len(gen)}; current funcs.h prototypes: {len(cur)}")
        print(f"  non-cpu/src prototypes (preserved): {len(extras)}")
        print(f"  signatures that DIFFER (generated vs current): {len(mism)}")
        for n, c, g in mism[:10]:
            print(f"    {n}:\n      cur: {c}\n      gen: {g}")
        return

    if a.write:
        cur_lines = open(FUNCS, errors="ignore").read()
        # keep the preamble (guard + includes) up to the first prototype, and the trailing #endif
        head = cur_lines[:cur_lines.find("\n", cur_lines.find("#include"))]  # rough; rebuilt below
        extras = [cur[n] for n in current_protos() if n not in gen]
        body = "\n".join(gen[n] for n in sorted(gen))
        out = ("#ifndef FRV_FUNCS_H\n#define FRV_FUNCS_H\n#include <stdint.h>\n#include \"frv_intrinsics.h\"\n\n"
               + ("/* prototypes not backed by a cpu/src .c (hand-asm / intrinsic / trap): */\n"
                  + "\n".join(extras) + "\n\n" if extras else "")
               + "/* generated from cpu/src function definitions by gen_funcs_h.py */\n"
               + body + "\n\n#endif\n")
        open(FUNCS, "w").write(out)
        print(f"wrote {FUNCS}: {len(gen)} generated + {len(extras)} preserved prototypes")
        return
    ap.print_help()

if __name__ == "__main__":
    main()
