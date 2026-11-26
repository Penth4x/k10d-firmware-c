#!/usr/bin/env python3
"""patch_setflg2.py [--apply] — handle the set_flg_obj callers patch_setflg.py left MANUAL
(multi-call, or a computed/param pattern). Resolves EACH set_flg_obj call site's r5 (pattern)
symbolically, then rewrites that specific call to set_flg_obj(ARG, PATTERN). Only applies when
every call site in the file resolves to a clean expression; otherwise prints MANUAL."""
import os, re, sys, bisect
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import frdis
SETFLG=0x104596cc
SRC=os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))),"cpu","src")
hdr=re.compile(r'@k10d\s+([A-Za-z0-9_]+)\s+@\s+(0x[0-9a-f]+)')
VAs=sorted(frdis.VA2NAME)
def extent(va): i=bisect.bisect_right(VAs,va); return VAs[i] if i<len(VAs) else va+0x800
PRES={8,9,10,11,14}; CLOB=[0,1,2,3,5,6,7,12,13]
APPLY='--apply' in sys.argv

def allsites(va):
    end=extent(va); reg={4:"p1",5:"p2",6:"p3",7:"p4",14:"fp",15:"sp",13:"gp"}; stk={}
    insns=[]; pc=va
    while pc<end:
        w=frdis.r16(pc); _,sz=frdis.dis1(pc); insns.append((pc,w,sz)); pc+=sz
    def S(n): return reg.get(n,f"r{n}?")
    def ap(pc,w):
        hi8=(w>>8)&0xff;t12=(w>>4)&0xfff;ri=w&0xf;rj=(w>>4)&0xf;xc=(w>>4)&0xf;td=w&0xff;op=hi8;hi4=(w>>12)&0xf
        sx=lambda v:v-0x100 if v&0x80 else v
        if t12==0x9F8: imm=frdis.r32(pc+2); reg[ri]=(frdis.nm(imm) if imm in frdis.VA2NAME else f"0x{imm:x}");return
        if hi8==0x9B: xl=frdis.r16(pc+2); reg[ri]=f"0x{((xc<<16)|xl)&0xfffff:x}";return
        if hi4==0xC: reg[ri]=f"0x{(w>>4)&0xff:x}";return
        if op==0x8B: reg[ri]=S(rj);return
        if op in(0xA0,0xA4): reg[ri]=f"({S(ri)}+0x{xc:x})";return
        if op in(0xA2,0xA6): reg[ri]=f"({S(ri)}+{S(rj)})";return
        if op==0x04: reg[ri]=f"*({S(rj)})";return
        if op==0x05: reg[ri]=f"*uh({S(rj)})";return
        if op==0x00: reg[ri]=f"*({S(13)}+{S(rj)})";return
        if hi4==0x2: off=sx((w>>4)&0xff)*4; reg[ri]=stk.get(off,f"stk[{off}]");return
        if hi4==0x3: stk[sx((w>>4)&0xff)*4]=S(ri);return
    i=0; out=[]
    while i<len(insns):
        pc,w,sz=insns[i]; t12=(w>>4)&0xfff
        iscall=t12 in(0x971,0x9F1,0x970,0x9F0) or (w>>11)in(0x1A,0x1B)
        if iscall:
            ri=w&0xf; isset=t12 in(0x971,0x9F1) and reg.get(ri)==frdis.nm(SETFLG)
            delayed=t12 in(0x9F1,0x9F0) or (w>>11)==0x1B
            if delayed and i+1<len(insns): ap(insns[i+1][0],insns[i+1][1])
            if isset: out.append(reg.get(5))
            tgt=reg.get(ri) if t12 in(0x971,0x9F1) else None
            for c in CLOB: reg[c]="?"
            reg[4]=f"ret({tgt})"
            i+=2 if delayed else 1; continue
        ap(pc,w); i+=1
    return out

def to_c(sym):
    if sym is None: return None
    if re.fullmatch(r'0x[0-9a-f]+',sym): return sym
    if sym in('p2','p3','p4'): return {'p2':'param_2','p3':'param_3','p4':'param_4'}[sym]
    m=re.fullmatch(r'\*\(\(?0x([0-9a-f]+)\+(p[1-4])\)?\)',sym) or re.fullmatch(r'\*\((p[1-4])\+0x([0-9a-f]+)\)',sym)
    if m:
        g=m.groups()
        off,pr=(g[0],g[1]) if g[0].replace('abcdef','').isalnum() and not g[0].startswith('p') else (g[1],g[0])
        pr={'p1':'param_1','p2':'param_2','p3':'param_3','p4':'param_4'}[pr]
        return f"*(uint32_t *)((int){pr} + 0x{off})"
    return None

CALL=re.compile(r'set_flg_obj\s*\(\s*([^;]*?)\s*\)\s*;')
done=0; manual=[]
for dp,_,fns in os.walk(SRC):
    for fn in sorted(fns):
        if not fn.endswith(".c") or fn=="set_flg_obj.c": continue
        p=os.path.join(dp,fn); t=open(p,encoding="latin-1").read()
        if "set_flg_obj(" not in t: continue
        if re.search(r'set_flg_obj\([^;]*,[^;]*\)',t): continue  # already 2-arg
        m=hdr.search(t)
        if not m: continue
        va=int(m.group(2),16)
        pats=allsites(va)
        calls=list(CALL.finditer(t))
        if not calls or len(calls)!=len(pats):
            manual.append((m.group(1),f"calls={len(calls)} pats={pats}")); continue
        cexprs=[to_c(x) for x in pats]
        if any(c is None for c in cexprs):
            manual.append((m.group(1),f"unresolved {list(zip(pats,cexprs))}")); continue
        # rewrite each call in order
        newt=t; off=0
        ok=True
        for mm,ce in zip(calls,cexprs):
            arg=mm.group(1).strip()
            if ',' in arg: ok=False; break
            rep=f"set_flg_obj({arg}, {ce});"
            s,e=mm.start()+off, mm.end()+off
            newt=newt[:s]+rep+newt[e:]; off+=len(rep)-(mm.end()-mm.start())
        if not ok: manual.append((m.group(1),"multi-arg")); continue
        print(f"PATCH {m.group(1):42} pats={pats}")
        done+=1
        if APPLY: open(p,"w",encoding="latin-1").write(newt)
print(f"\n{done} patched, {len(manual)} still MANUAL. {'(APPLIED)' if APPLY else '(dry-run)'}")
for n,w in manual: print(f"  MANUAL {n:42} {w}")
