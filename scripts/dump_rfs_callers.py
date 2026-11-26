#!/usr/bin/env python3
"""For every reg_framework_send caller: print the entry prologue (param->preserved-reg
moves) and the instruction window ending at the reg_framework_send call + its delay slot.
100% disasm (no symbolic guessing) — the reliable source for recovering dropped r5/r6."""
import os, re, struct, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import frdis
ROOT=os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC=os.path.join(ROOT,"cpu","src")
hdr=re.compile(r'@k10d\s+([A-Za-z0-9_]+)\s+@\s+(0x[0-9a-f]+)')
VAs=sorted(frdis.VA2NAME)
import bisect
def extent(va):
    i=bisect.bisect_right(VAs,va); return VAs[i] if i<len(VAs) else va+0x800
callers=[]
for dp,_,fns in os.walk(SRC):
    for fn in fns:
        if not fn.endswith(".c"): continue
        p=os.path.join(dp,fn); t=open(p,encoding="latin-1").read()
        if "reg_framework_send(" not in t or fn=="reg_framework_send.c": continue
        m=hdr.search(t)
        if m: callers.append((m.group(1),int(m.group(2),16),p))
callers.sort(key=lambda x:x[1])
only=set(sys.argv[1:])
for name,va,p in callers:
    if only and name not in only and hex(va) not in only: continue
    end=extent(va)
    # linear disasm addresses
    addrs=[]; pc=va
    while pc<end:
        _,sz=frdis.dis1(pc); addrs.append((pc,sz)); pc+=sz
    # find the rfs call: a call (t12 970/971/9F0/9F1) following an ldi:32 of RFS in r12
    rfs_idx=None
    for i,(a,sz) in enumerate(addrs):
        txt,_=frdis.dis1(a)
        if "<reg_framework_send>" in txt:
            # next call instruction
            for j in range(i+1,min(i+4,len(addrs))):
                t2,_=frdis.dis1(addrs[j][0])
                if t2.startswith("call"): rfs_idx=j; break
            break
    print(f"===== {name} @ 0x{va:08x}  ({os.path.relpath(p,ROOT)}) =====")
    # prologue: first 7 instrs
    print("  --prologue--")
    for a,sz in addrs[:7]:
        t,_=frdis.dis1(a); print(f"  {a:08x}: {t}")
    if rfs_idx is None:
        print("  !! rfs call not located"); print(); continue
    print("  --call window--")
    lo=max(0,rfs_idx-7)
    for a,sz in addrs[lo:rfs_idx+2]:
        t,_=frdis.dis1(a); mark="   <<<RFS" if "<reg_framework_send>" in t else ""
        print(f"  {a:08x}: {t}{mark}")
    print()
