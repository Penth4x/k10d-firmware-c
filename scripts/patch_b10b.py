#!/usr/bin/env python3
"""patch_b10b.py [--apply] — fix the spurious-shift B-10b bugs: replace
`(uint16_t)((uint64_t)(X) >> 16)` with `(uint16_t)X` (the original passes X directly / uses the
low 16; the decompiler's >>16 takes the wrong half). Only touches files verify_b10b.py classifies
BUG? (no `>>0` split partner and no real `lsr/asr #16` in the function). Verified reliable against
mbx_send_message, remove_node_from_queue, construct_cls_105b6d0c, build_and_dispatch_draw_params."""
import os, re, sys, bisect
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import frdis
SRC=os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))),"cpu","src")
hdr=re.compile(r'@k10d\s+([A-Za-z0-9_]+)\s+@\s+(0x[0-9a-f]+)')
VAs=sorted(frdis.VA2NAME)
def extent(va): i=bisect.bisect_right(VAs,va); return VAs[i] if i<len(VAs) else va+0x800
PAT=re.compile(r'\(uint16_t\)\(\(uint64_t\)\(([A-Za-z0-9_]+)\) >> 16\)')
PAT0=re.compile(r'\(uint16_t\)\(\(uint64_t\)\([A-Za-z0-9_]+\) >> 0\)')
APPLY='--apply' in sys.argv
done=0; skip=0
for dp,_,fns in os.walk(SRC):
    for fn in sorted(fns):
        if not fn.endswith(".c"): continue
        p=os.path.join(dp,fn); t=open(p,encoding="latin-1").read()
        if not PAT.search(t): continue
        if PAT0.search(t): skip+=1; continue   # 32->two-16 split = legit
        m=hdr.search(t)
        if not m: continue
        va=int(m.group(2),16)
        # disasm: skip if the function really extracts high-16 (lsr/asr #16)
        end=extent(va); pc=va; lsr16=0; n=0
        while pc<end and n<500:
            txt,sz=frdis.dis1(pc); n+=1
            if re.match(r'(lsr|asr) #16,', txt): lsr16+=1
            pc+=sz
        if lsr16>0: skip+=1; print(f"SKIP(lsr#16) {m.group(1)}"); continue
        t2=PAT.sub(r'(uint16_t)\1', t)
        ndiff=len(PAT.findall(t))
        print(f"PATCH {m.group(1):42} {os.path.relpath(p,SRC).split('/')[0]:26} x{ndiff}")
        done+=1
        if APPLY: open(p,"w",encoding="latin-1").write(t2)
print(f"\n{done} files patched, {skip} skipped (split/lsr16). {'(APPLIED)' if APPLY else '(dry-run)'}")
