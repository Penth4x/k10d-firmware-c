#!/usr/bin/env python3
"""verify_b10b.py — classify every `(uint16_t)((uint64_t)X >> 16)` occurrence as BUG or LEGIT.
A spurious-shift B-10b BUG: the original function does NOT actually shift the param right by 16
(no `lsr #16` / `asr #16` producing that value) — it uses the value directly (or extsh = low 16),
so the decompiler's >>16 corrupts it. LEGIT: the original really extracts the high 16 (`lsr #16`),
or the pattern is a 32->two-16 split (a `>>0` partner on the same source in the file)."""
import os, re, sys, bisect
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import frdis
SRC=os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))),"cpu","src")
hdr=re.compile(r'@k10d\s+([A-Za-z0-9_]+)\s+@\s+(0x[0-9a-f]+)')
VAs=sorted(frdis.VA2NAME)
def extent(va): i=bisect.bisect_right(VAs,va); return VAs[i] if i<len(VAs) else va+0x800
PAT=re.compile(r'\(uint16_t\)\(\(uint64_t\)\(([A-Za-z0-9_]+)\) >> 16\)')
PAT0=re.compile(r'\(uint16_t\)\(\(uint64_t\)\(([A-Za-z0-9_]+)\) >> 0\)')

for dp,_,fns in os.walk(SRC):
    for fn in sorted(fns):
        if not fn.endswith(".c"): continue
        p=os.path.join(dp,fn); t=open(p,encoding="latin-1").read()
        occ=PAT.findall(t)
        if not occ: continue
        m=hdr.search(t)
        if not m: continue
        va=int(m.group(2),16); name=m.group(1)
        # legit if there's a >>0 partner (32->two-16 split)
        has_split = bool(PAT0.search(t))
        # disasm: count real high-16 extractions (lsr #16 / asr #16)
        end=extent(va); pc=va; lsr16=0; n=0
        while pc<end and n<400:
            txt,sz=frdis.dis1(pc); n+=1
            if txt in ("lsr #16,r"+str(0),) or re.match(r'(lsr|asr) #16,', txt): lsr16+=1
            pc+=sz
        verdict = "LEGIT(split)" if has_split else ("LEGIT(has lsr#16)" if lsr16>=len(set(occ)) else "BUG?")
        print(f"{name[:42]:43} {os.path.relpath(p,SRC).split('/')[0]:28} occ={len(occ)} lsr16={lsr16} split={has_split} -> {verdict}")
