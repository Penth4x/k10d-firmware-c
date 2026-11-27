#!/usr/bin/env python3
"""detect_b12.py — find B-12 wrong-width globals: a global declared uint32_t/uint16_t whose declared width
OVERLAPS the next global's address, so it cannot really be that wide (it was decompiled as a word but is a
byte/halfword field packed next to its neighbour). On this BIG-ENDIAN target, reading such a global as a
word and truncating to the narrow consumer (e.g. cpucom_msg_set_cmd(uint8_t)) takes the WRONG (low) byte ->
0 / garbage. The menu layer-2 bug was exactly this: uRam105a7b44 (uint32_t) overlaps bRam105a7b45 (uint8_t);
the real POST command 0x04 is byte0, but the word read 0x04050000 truncated to 0.

globals.h declares `extern <type> <name>;` where <name> ends in the 8-hex address (DAT_105a7b44 -> 0x105a7b44).
Reports each over-wide global, the overlapping neighbour, and (if resolvable) whether its single use passes it
to a narrower parameter (a CONFIRMED truncation)."""
import os, re, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GLOBALS = os.path.join(ROOT, "cpu", "include", "globals.h")
SRC = os.path.join(ROOT, "cpu", "src")
WIDTH = {'uint8_t':1,'int8_t':1,'char':1,'uint16_t':2,'int16_t':2,'short':2,'ushort':2,
         'uint32_t':4,'int32_t':4,'int':4,'uint':4,'long':4,'ulong':4}
decl = re.compile(r'^\s*extern\s+([A-Za-z_][\w ]*?)\s+([A-Za-z_]\w*?)([0-9a-fA-F]{8})\s*;', re.M)
globs = []  # (addr, fullname, type, width)
for m in decl.finditer(open(GLOBALS, encoding='latin-1').read()):
    typ = m.group(1).strip().split()[-1]
    w = WIDTH.get(typ)
    if not w: continue
    addr = int(m.group(3), 16)
    globs.append((addr, m.group(2)+m.group(3), typ, w))
globs.sort()

overlaps = []
for i,(addr,name,typ,w) in enumerate(globs):
    if w == 1: continue
    # find next global with a strictly greater address
    j = i+1
    while j < len(globs) and globs[j][0] == addr: j += 1
    if j >= len(globs): continue
    naddr, nname, ntyp, nw = globs[j]
    if naddr < addr + w:  # the declared width runs into the next global
        overlaps.append((addr, name, typ, w, naddr, nname, naddr-addr))

def single_use_narrowing(name):
    """If the global's only use passes it straight to a function, note the callee (manual check of arg width)."""
    hits = []
    rx = re.compile(r'\b%s\b' % re.escape(name))
    for dp,_,fns in os.walk(SRC):
        for f in fns:
            if not f.endswith('.c'): continue
            try: t = open(os.path.join(dp,f),encoding='latin-1').read()
            except OSError: continue
            for ln in t.splitlines():
                if rx.search(ln): hits.append((f, ln.strip()))
    return hits

print(f"=== B-12: {len(overlaps)} over-wide globals overlap the next; filtering to USED ones (actionable) ===")
used = []
for rec in overlaps:
    addr,name,typ,w,naddr,nname,gap = rec
    u = single_use_narrowing(name)
    if u: used.append((rec, u))
for (addr,name,typ,w,naddr,nname,gap), u in used:
    narrow = any(('_set_cmd(' in ln or 'set_insize' in ln or '(uint8_t)'+name in ln or
                  '(uint16_t)'+name in ln or '(char)'+name in ln or '(short)'+name in ln) for _,ln in u)
    tag = "  <== TRUNCATED to narrow (CONFIRMED B-12)" if narrow else ""
    print(f"  {name} ({typ},{w}B) overlaps {nname} +{gap}  uses={len(u)} e.g. {u[0][1][:70]}{tag}")
print(f"\nUSED over-wide globals: {len(used)} of {len(overlaps)} (the unused ones are harmless).")
