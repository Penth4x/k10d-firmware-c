#!/usr/bin/env python3
"""Authoritative r5(payload)/r6(code) table for every reg_framework_send caller, read
straight from disasm: the last instruction writing r5 before the call, and the delay-slot
that sets r6. No symbolic chaining — just the literal source instructions (reliable)."""
import os, re, sys, bisect
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import frdis
ROOT=os.path.dirname(os.path.dirname(os.path.abspath(__file__))); SRC=os.path.join(ROOT,"cpu","src")
hdr=re.compile(r'@k10d\s+([A-Za-z0-9_]+)\s+@\s+(0x[0-9a-f]+)')
VAs=sorted(frdis.VA2NAME)
def extent(va): i=bisect.bisect_right(VAs,va); return VAs[i] if i<len(VAs) else va+0x800
callers=[]
for dp,_,fns in os.walk(SRC):
    for fn in fns:
        if not fn.endswith(".c") or fn=="reg_framework_send.c": continue
        p=os.path.join(dp,fn); t=open(p,encoding="latin-1").read()
        if "reg_framework_send(" not in t: continue
        m=hdr.search(t)
        if m: callers.append((m.group(1),int(m.group(2),16),p))
callers.sort(key=lambda x:x[1])

def dst_reg(txt):
    """return the destination register number of an instr that writes a register, else None."""
    m=re.search(r',r(\d+)$', txt)
    if m and not txt.startswith("st") and not txt.startswith("sth") and not txt.startswith("stb") and not txt.startswith("cmp"):
        return int(m.group(1))
    return None

def writes(txt, rn):
    d=dst_reg(txt)
    return d==rn

def analyze(va):
    end=extent(va); addrs=[]; pc=va
    while pc<end:
        _,sz=frdis.dis1(pc); addrs.append(pc); pc+=sz
    # locate rfs call index
    rfs=None
    for i,a in enumerate(addrs):
        t,_=frdis.dis1(a)
        if "<reg_framework_send>" in t:
            for j in range(i+1,min(i+4,len(addrs))):
                t2,_=frdis.dis1(addrs[j])
                if t2.startswith("call"): rfs=j; break
            break
    if rfs is None: return None
    callpc=addrs[rfs]
    # r6 = delay slot (instr right after call) if call:d
    ct,_=frdis.dis1(callpc)
    r6=None
    if ct.endswith(":d @r12") or ":d" in ct:
        dt,_=frdis.dis1(addrs[rfs+1]);
        if writes(dt,6): r6=dt
    # if r6 not in delay slot, scan back
    if r6 is None:
        for k in range(rfs-1,max(0,rfs-12),-1):
            t,_=frdis.dis1(addrs[k])
            if writes(t,6): r6=t; break
    # r5 = last write before the call (skip delay slot which is after)
    r5=None
    for k in range(rfs-1,max(0,rfs-14),-1):
        t,_=frdis.dis1(addrs[k])
        if writes(t,5): r5=t; break
    # r4(obj) last write
    r4=None
    for k in range(rfs-1,max(0,rfs-14),-1):
        t,_=frdis.dis1(addrs[k])
        if writes(t,4): r4=t; break
    return r4,r5,r6

print(f"{'CALLER':46} {'r4(obj)':24} {'r5(payload)':26} {'r6(code)'}")
print("-"*120)
for name,va,p in callers:
    r=analyze(va)
    if r:
        f=lambda x:(x.split(': ',1)[-1] if x else '??')
        print(f"{name[:45]:46} {f(r[0])[:23]:24} {f(r[1])[:25]:26} {f(r[2])}")
    else:
        print(f"{name[:45]:46} <no call>")
