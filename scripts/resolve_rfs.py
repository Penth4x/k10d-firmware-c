#!/usr/bin/env python3
"""resolve_rfs.py — per caller, symbolically trace the reg_framework_send payload(r5) and
code(r6) to their origin. Register model: r4-r7 incoming params p1-p4; r8-r11,r14 preserved
across calls; r0-r7,r12,r13 clobbered by a call (r4=return). Delay slot of call:d executes
before the branch. Prints the resolved symbolic r4/r5/r6. Validate against known cases."""
import os, re, struct, sys, bisect
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import frdis
FW=frdis.FW; BASE=frdis.BASE
def r16(a): return frdis.r16(a)
def r32(a): return frdis.r32(a)
def sx8(v): return v-0x100 if v&0x80 else v
VAs=sorted(frdis.VA2NAME)
def extent(va): i=bisect.bisect_right(VAs,va); return VAs[i] if i<len(VAs) else va+0x800
RFS=0x10459abe
PRESERVED={8,9,10,11,14}
CLOB=[0,1,2,3,5,6,7,12,13]

def trace(va):
    end=extent(va)
    reg={4:"p1",5:"p2",6:"p3",7:"p4",14:"fp",15:"sp",13:"gp"}
    stk={}  # fp-relative spill slots
    # build instruction list
    insns=[]; pc=va
    while pc<end:
        w=r16(pc); _,sz=frdis.dis1(pc); insns.append((pc,w,sz)); pc+=sz
    def S(n): return reg.get(n,f"r{n}?")
    def apply(pc,w):
        hi8=(w>>8)&0xff; t12=(w>>4)&0xfff; ri=w&0xf; rj=(w>>4)&0xf; xc=(w>>4)&0xf; td=w&0xff; op=hi8; hi4=(w>>12)&0xf
        if t12==0x9F8:
            imm=r32(pc+2); reg[ri]=(frdis.nm(imm) if imm in frdis.VA2NAME else f"0x{imm:x}"); return
        if hi8==0x9B: xl=r16(pc+2); reg[ri]=f"0x{((xc<<16)|xl)&0xfffff:x}"; return
        if hi4==0xC: reg[ri]=f"0x{(w>>4)&0xff:x}"; return
        if op==0x8B: reg[ri]=S(rj); return
        if op in (0xA0,0xA4): reg[ri]=f"({S(ri)}+0x{xc:x})"; return
        if op==0xA1: reg[ri]=f"({S(ri)}+0x{(-16+xc)&0xffffffff:x})"; return
        if op in (0xA2,0xA6): reg[ri]=f"({S(ri)}+{S(rj)})"; return
        if op in (0xAC,0xAE): reg[ri]=f"({S(ri)}-{S(rj)})"; return
        if op==0x04: reg[ri]=f"*({S(rj)})"; return
        if op==0x05: reg[ri]=f"*uh({S(rj)})"; return
        if op==0x06: reg[ri]=f"*ub({S(rj)})"; return
        if op==0x00: reg[ri]=f"*({S(13)}+{S(rj)})"; return
        if hi4==0x3: stk[sx8((w>>4)&0xff)*4]=S(ri); return   # st ri,@(r14,d)
        if hi4==0x2: off=sx8((w>>4)&0xff)*4; reg[ri]=stk.get(off,f"stk[{off}]"); return
        if op==0x03: reg[ri]=f"sp[{xc*4}]"; return
        if hi4==0x4: reg[ri]=f"stkH[{sx8((w>>4)&0xff)*2}]"; return
        if hi4==0x6: reg[ri]=f"stkB[{sx8((w>>4)&0xff)}]"; return
        if op==0xB7: reg[ri]=f"sr{rj}"; return
        # exts/extu keep value; shifts/logic -> mark derived
        if t12 in (0x978,0x979,0x97A,0x97B): return
        # anything else writing ri we don't model -> mark unknown if it has a dest
        m=None
    i=0
    while i<len(insns):
        pc,w,sz=insns[i]
        t12=(w>>4)&0xfff
        iscall = t12 in (0x971,0x9F1,0x970,0x9F0) or (w>>11) in (0x1A,0x1B)
        if iscall:
            # is this the RFS call? (call @r12 where reg[12]==reg_framework_send)
            ri=w&0xf
            isrfs = t12 in (0x971,0x9F1) and reg.get(ri)== "reg_framework_send"
            delayed = t12 in (0x9F1,0x9F0) or (w>>11)==0x1B
            if delayed and i+1<len(insns):
                apply(insns[i+1][0], insns[i+1][1])   # delay slot runs first
            if isrfs:
                return reg.get(4),reg.get(5),reg.get(6)
            # resolve call target for clobber/return naming
            tgt=None
            if t12 in (0x971,0x9F1): tgt=reg.get(ri)
            else:
                d=w&0x7ff; d=d-0x800 if d&0x400 else d; tgt=frdis.nm(pc+2+d*2)
            for c in CLOB: reg[c]="?"
            reg[4]=f"ret({tgt})"
            i += 2 if delayed else 1
            continue
        apply(pc,w)
        i+=1
    return None

if __name__=="__main__":
    # known-case self-test
    KNOWN={
        0x1047cca4:("alloc result iVar1","0x2"),
        0x104c35c4:("&stack packet","0x2"),
        0x1050c0e0:("&stack packet (fp+0xec)","0x2"),
        0x105157f8:("param_2+8","0x2"),
    }
    sel=[int(x,16) for x in sys.argv[1:]] if len(sys.argv)>1 else sorted(KNOWN)
    for va in sel:
        r=trace(va)
        note=f"   [expect {KNOWN[va]}]" if va in KNOWN else ""
        print(f"0x{va:08x}: r4={r[0]!s:30} r5={r[1]!s:26} r6={r[2]}{note}" if r else f"0x{va:08x}: <none>")
