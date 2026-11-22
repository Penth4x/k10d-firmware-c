#!/usr/bin/env python3
"""find_rodata_fnptrs.py — find un-relocated function pointers in harvested rodata.

The overlay keeps the original firmware's rodata byte-identical except for recognised vtables
(emitted symbolically in cpu/gen/vtables.asm with PACKED symbols). Any OTHER rodata table of
function pointers — a {value, handler} dispatch/state table Ghidra didn't tag as a vtable — keeps
ORIGINAL code addresses. Packed code that reads such a table calls the un-relocated original code,
which derails (BESTIARY boot-blocker #4 class).

This scans the rodata span that holds the vtables for 32-bit words whose value is a KNOWN
recompiled-function origVA (from the tree's @k10d headers) but which fall OUTSIDE every VT_
section already emitted. It clusters nearby hits into tables and prints each with the symbol each
pointer should be relocated to — ready to emit as a symbolic `.SECTION ... LOCATE=` block.
"""
import os, re, struct, glob, bisect
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FW   = open("/home/memorai/k10d-re/FWDC162B.BIN","rb").read()
BASE = 0x10000000
CODE_LO, CODE_HI = 0x10008000, 0x10622400   # original code region (packed base = 0x10622400)
def r32(a): return struct.unpack(">I", FW[a-BASE:a-BASE+4])[0]

# origVA -> recompiled function name (@k10d headers)
va2name = {}
hdr = re.compile(r'@k10d\s+(\w+)\s+@\s+0x([0-9a-fA-F]{8})')
for p in glob.glob(ROOT+"/cpu/src/**/*.c", recursive=True):
    m = hdr.search(open(p, encoding="latin-1").read(300))
    if m: va2name[int(m.group(2),16)] = m.group(1)

# VT_ sections already covered by vtables.asm: (locate, end)
vt = []
cur = None
for line in open(ROOT+"/cpu/gen/vtables.asm", encoding="latin-1"):
    m = re.search(r'\.SECTION\s+VT_([0-9a-fA-F]+),\s*CONST,\s*LOCATE=0x([0-9a-fA-F]+)', line)
    if m:
        if cur: vt.append(cur)
        cur = [int(m.group(2),16), int(m.group(2),16)]
    elif cur is not None and re.search(r'\.DATA\.L', line):
        cur[1] += 4
if cur: vt.append(cur)
vt.sort()
def in_vt(a):
    i = bisect.bisect_right([v[0] for v in vt], a) - 1
    return i >= 0 and vt[i][0] <= a < vt[i][1]

# scan the rodata span that holds the vtables (min..max VT addr), for known-origVA words outside VT_
lo = min(v[0] for v in vt) & ~0xf
hi = (max(v[1] for v in vt) + 0x400) & ~0xf
hits = []
for a in range(lo, hi, 4):
    v = r32(a)
    if CODE_LO <= v < CODE_HI and v in va2name and not in_vt(a):
        hits.append((a, v))

# cluster hits within 0x40 bytes of each other into tables
tables, cluster = [], []
for a, v in hits:
    if cluster and a - cluster[-1][0] > 0x40:
        tables.append(cluster); cluster = []
    cluster.append((a, v))
if cluster: tables.append(cluster)

print(f"known recompiled fns: {len(va2name)}   VT_ sections: {len(vt)}   scan 0x{lo:x}..0x{hi:x}")
print(f"un-relocated fn-ptrs in rodata (outside VT_): {len(hits)}  in {len(tables)} table(s)\n")
for t in tables:
    a0, a1 = t[0][0], t[-1][0]
    print(f"  table 0x{a0:08x}..0x{a1+4:08x}  ({len(t)} ptrs)")
    for a, v in t:
        print(f"    0x{a:08x}: 0x{v:08x} -> _{va2name[v]}")
