#!/usr/bin/env python3
"""detect_split_buffer.py — the IMPROPER-SPLIT STACK BUFFER class (BESTIARY B-17).

The decompiler splits one multi-word stack buffer into an address-taken array
(`T auStack_N[M]`, passed to a callee) + a trailing scalar local (`U uStack_K`, K<N so it sits
just ABOVE the array) that is WRITE-ONLY in C (assigned, never read, never address-taken). The
real consumer writes that tail THROUGH the array pointer past the array's size, so to C it looks
dead and the compiler eliminates it -> the callee's write overflows onto the saved frame pointer
-> wild sp -> crash.

Heuristic (reports CANDIDATES for manual review):
  In a function, find a scalar local X (name [aiu]Stack_<hex>, not an array) that is WRITE-ONLY:
  it appears on the LHS of `X =` and NOWHERE else (never read, never `&X`, never a bare call arg).
  Require also an address-taken buffer in the same function: an array local `Y[..]` whose bare
  name is passed as a call argument, with Y at a stack offset BELOW X (Yoff > Xoff, contiguous-ish:
  Yoff - Xoff <= 0x20). Report X, Y, and the offsets."""
import os, re, sys
SRC = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "cpu", "src")
DECL_SCALAR = re.compile(r'^\s*(u?int\d+_t|uint|int|ushort|short|char|byte|undefined\d)\s+([aiu]Stack_[0-9a-fA-F]+)\s*;', re.M)
DECL_ARRAY  = re.compile(r'^\s*(u?int\d+_t|uint|int|ushort|short|char|byte|undefined\d)\s+([aiu]Stack_[0-9a-fA-F]+)\s*\[\s*\w+\s*\]\s*;', re.M)

def off(name):
    m = re.search(r'Stack_([0-9a-fA-F]+)$', name)
    return int(m.group(1), 16) if m else None

def body_of(t):
    m = re.search(r'\)\s*\n\{', t)
    return t[m.end():] if m else t

hits = []
for dp,_,fns in os.walk(SRC):
    for f in sorted(fns):
        if not f.endswith('.c'): continue
        p = os.path.join(dp, f); t = open(p, encoding='latin-1').read()
        scalars = {m.group(2): off(m.group(2)) for m in DECL_SCALAR.finditer(t)}
        arrays  = {m.group(2): off(m.group(2)) for m in DECL_ARRAY.finditer(t)}
        if not scalars or not arrays: continue
        body = body_of(t)
        # address-taken buffers passed by bare name to a call: `foo(.., Yname, ..)`
        passed_arrays = set()
        for y in arrays:
            if re.search(r'[(,]\s*%s\s*[,)]' % re.escape(y), body): passed_arrays.add(y)
        if not passed_arrays: continue
        for x, xoff in scalars.items():
            if xoff is None: continue
            # write-only: exactly matches `x =` (assignment) and no other occurrence
            occ = re.findall(r'\b%s\b' % re.escape(x), body)
            assigns = re.findall(r'\b%s\s*=(?!=)' % re.escape(x), body)
            if len(occ) != len(assigns) or not assigns: continue   # read somewhere -> not dead
            if re.search(r'&\s*%s\b' % re.escape(x), body): continue  # address-taken -> kept
            # find an address-taken buffer just BELOW x (higher stack offset, contiguous-ish)
            for y in passed_arrays:
                yoff = arrays[y]
                if yoff is None: continue
                if yoff > xoff and (yoff - xoff) <= 0x20:
                    hits.append((os.path.relpath(p,SRC), x, f"0x{xoff:x}", y, f"0x{yoff:x}"))

print(f"=== improper-split-buffer (B-17) candidates: {len(hits)} ===")
for rel,x,xo,y,yo in hits:
    print(f"  {rel}:  write-only {x}@{xo} just above passed buffer {y}@{yo}")
