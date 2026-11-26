#!/usr/bin/env python3
"""extract_rfs.py — for every reg_framework_send caller, linearly symbolic-interpret the
ORIGINAL FR code and report the r5 (payload) and r6 (code) passed at the call. B-3 recovery.

Register model: scratch r0-r3,r5-r7,r12 clobbered across a call; r4=return; r8-r11,r13,r14
callee-saved (preserved). Delay slot of call:d executes before the branch, so it sets args.
Values are symbolic strings (p1..p4 = incoming r4..r7 params)."""
import os, re, struct, sys
FW=open("/home/memorai/k10d-re/FWDC162B.BIN","rb").read(); BASE=0x10000000
def r16(a): o=a-BASE; return (FW[o]<<8)|FW[o+1]
def r32(a): o=a-BASE; return struct.unpack(">I",FW[o:o+4])[0]
def sx8(v): return v-0x100 if v&0x80 else v
RFS=0x10459abe
VA2NAME={}
hdr=re.compile(r'@k10d\s+([A-Za-z0-9_]+)\s+@\s+(0x[0-9a-f]+)')
ROOT=os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC=os.path.join(ROOT,"cpu","src")
CALLERS=[]
for dp,_,fns in os.walk(SRC):
    for fn in fns:
        if not fn.endswith(".c"): continue
        p=os.path.join(dp,fn); t=open(p,encoding="latin-1").read()
        m=hdr.search(t)
        if m: VA2NAME[int(m.group(2),16)]=m.group(1)
        if "reg_framework_send(" in t and fn!="reg_framework_send.c" and m:
            CALLERS.append((m.group(1),int(m.group(2),16),p))
def nm(a): return VA2NAME.get(a,f"0x{a:08x}")
FUNC_VAS=sorted(VA2NAME)
def extent(va):
    import bisect; i=bisect.bisect_right(FUNC_VAS,va)
    return FUNC_VAS[i] if i<len(FUNC_VAS) else va+0x800

def step(reg,pc):
    """apply instruction at pc to reg dict; return (size, is_call, call_target_or_None)."""
    w=r16(pc); hi8=(w>>8)&0xff; t12=(w>>4)&0xfff; ri=w&0xf; rj=(w>>4)&0xf; xc=(w>>4)&0xf
    td=w&0xff; op=hi8; hi4=(w>>12)&0xf
    def S(n): return reg.get(n,f"r{n}?")
    if t12==0x9F8: reg[ri]=f"0x{r32(pc+2):x}"+(f"<{nm(r32(pc+2))}>" if r32(pc+2) in VA2NAME else ""); return 6,False,None
    if hi8==0x9B: xl=r16(pc+2); reg[ri]=f"0x{((xc<<16)|xl)&0xfffff:x}"; return 4,False,None
    if hi4==0xC: reg[ri]=f"0x{(w>>4)&0xff:x}"; return 2,False,None
    if op==0x8B: reg[ri]=S(rj); return 2,False,None
    if op==0xA0: reg[ri]=f"({S(ri)})+{xc}"; return 2,False,None
    if op==0xA4: reg[ri]=f"({S(ri)})+{xc}"; return 2,False,None
    if op==0xA2 or op==0xA6: reg[ri]=f"({S(ri)})+({S(rj)})"; return 2,False,None
    if op==0x04: reg[ri]=f"*({S(rj)})"; return 2,False,None
    if op==0x05: reg[ri]=f"*uh({S(rj)})"; return 2,False,None
    if op==0x06: reg[ri]=f"*ub({S(rj)})"; return 2,False,None
    if op==0x00: reg[ri]=f"*(r13+{S(rj)})"; return 2,False,None
    if hi4==0x2: reg[ri]=f"stack[{sx8((w>>4)&0xff)*4}]"; return 2,False,None
    if op==0x03: reg[ri]=f"sp[{xc*4}]"; return 2,False,None
    if hi4==0x4: reg[ri]=f"stackH[{sx8((w>>4)&0xff)*2}]"; return 2,False,None
    if hi4==0x6: reg[ri]=f"stackB[{sx8((w>>4)&0xff)}]"; return 2,False,None
    if op==0x01: reg[ri]=f"*uh(r13+{S(rj)})"; return 2,False,None
    if op==0xB7: reg[ri]=f"sr{rj}"; return 2,False,None
    # control
    if t12==0x971: return 2,True,("ind",None)           # call @ri
    if t12==0x9F1: return 2,True,("ind:d",None)          # call:d @ri (has delay slot)
    if (w>>11)==0x1A: d=w&0x7ff; d=d-0x800 if d&0x400 else d; return 2,True,("rel",pc+2+d*2)
    if (w>>11)==0x1B: d=w&0x7ff; d=d-0x800 if d&0x400 else d; return 2,True,("rel:d",pc+2+d*2)
    # exts/extu modify in place -> keep symbol
    return 2,False,None

CLOB=[0,1,2,3,5,6,7,12]
def analyze(va):
    end=extent(va); pc=va
    reg={4:"p1",5:"p2",6:"p3",7:"p4"}
    out=None
    while pc<end:
        w=r16(pc)
        # detect the reg_framework_send call: a call @r12 where r12 == RFS symbol
        isrfs = ((w&0xfff0)>>4 in (0x971,0x9F1)) and str(reg.get((w&0xf),"")).find(f"<{nm(RFS)}>")>=0
        sz,iscall,tgt=step(reg,pc)
        if iscall:
            delayed = tgt[0].endswith(":d")
            # apply delay-slot instr (next) BEFORE resolving call semantics
            if delayed:
                step(reg,pc+sz)
            if isrfs:
                out=(reg.get(4),reg.get(5),reg.get(6)); break
            # clobber scratch regs after a normal call
            tname = nm(tgt[1]) if tgt[1] else "@ind"
            for c in CLOB: reg[c]="?"
            reg[4]=f"ret({tname})"
            pc += sz + (sz if delayed else 0)
            continue
        pc+=sz
    return out

print(f"{'CALLER':45} {'r4(obj)':28} {'r5(payload)':22} {'r6(code)'}")
print("-"*120)
for name,va,p in sorted(CALLERS,key=lambda x:x[1]):
    r=analyze(va)
    if r: print(f"{name[:44]:45} {str(r[0])[:27]:28} {str(r[1])[:21]:22} {r[2]}")
    else: print(f"{name[:44]:45} <no rfs call found>")
print(f"\n# {len(CALLERS)} callers")
