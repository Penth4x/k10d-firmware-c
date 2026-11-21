#!/usr/bin/env python3
"""find_missplits.py — find functions the decompiler/map wrongly SPLIT into pieces.

A real FR function boundary is preceded by a terminator (ret/reti/jmp@r/unconditional bra) OR the
function is a call target (some `ldi:32 #va` loads its address). A mapped "function" that is
neither — the preceding instruction falls straight through into it and nothing calls it — is an
interior fragment of a larger function (shared frame; its decompiled C reads caller_rN). Report
each real function together with the fragments carved out of it, so they can be harvested whole
(scripts/harvest_asm.py <entry> <start> <end>) or re-decompiled as one.

Prints: per mis-split group, the entry (real function) and its fragment(s) with the whole extent.
"""
import os, re, struct, bisect
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC  = os.path.join(ROOT, "cpu", "src")
FW   = open("/home/memorai/k10d-re/FWDC162B.BIN","rb").read()
BASE = 0x10000000
def r16(a): o=a-BASE; return (FW[o]<<8)|FW[o+1]
def r32(a): o=a-BASE; return struct.unpack(">I",FW[o:o+4])[0]

# function map from @k10d headers
VA2NAME={}
hdr=re.compile(r'@k10d\s+([A-Za-z0-9_]+)\s+@\s+(0x[0-9a-f]+)')
for dp,_,fns in os.walk(SRC):
    for fn in fns:
        if not (fn.endswith(".c") or fn.endswith(".c.handasm")): continue
        try: t=open(os.path.join(dp,fn),encoding="latin-1").read(4000)
        except OSError: continue
        m=hdr.search(t)
        if m: VA2NAME[int(m.group(2),16)]=m.group(1)
VAS=sorted(VA2NAME)
VSET=set(VAS)

def insn_len(w):
    t12=(w>>4)&0xFFF; hi8=(w>>8)&0xFF
    if t12==0x9F8: return 6
    if hi8==0x9B: return 4
    return 2
def is_terminator(w):
    t12=(w>>4)&0xFFF
    if w in (0x9720,0x9F20,0x9730): return True          # ret, ret:d, reti
    if t12 in (0x970,0x9F0): return True                  # jmp @r, jmp:d @r
    if (w>>12) in (0xE,0xF) and ((w>>8)&0xF)==0: return True  # bra / bra:d (unconditional)
    return False
def is_delayed_terminator(w):
    # a terminator whose delay slot follows it (ret:d, jmp:d, uncond bra:d); the real function
    # boundary is AFTER the delay slot, so the instruction just before a boundary can be that
    # delay slot rather than the terminator itself.
    t12=(w>>4)&0xFFF
    if w==0x9F20: return True                              # ret:d
    if t12==0x9F0: return True                             # jmp:d @r
    if (w>>12)==0xF and ((w>>8)&0xF)==0: return True       # bra:d (unconditional)
    return False

# all ldi:32 immediates in the code region = call/address-reference targets
REF=set()
a=0x10008000
END=0x10700000
while a < END:
    w=r16(a);
    if (w>>4)&0xFFF==0x9F8:
        REF.add(r32(a+2)); a+=6
    else:
        a+=insn_len(w)

def two_before(va, floor):
    # walk forward from floor; return (last, penult): the instruction whose end == va and the
    # one before it. (None,None) if misaligned.
    p=floor; prev=None
    while p < va:
        w=r16(p); L=insn_len(w)
        if p+L==va: return (w, prev)
        if p+L>va: return (None, None)   # overlap -> treat as fall-through
        prev=w; p+=L
    return (prev, None)

frag=[]   # (va, name) that are mis-split fragments
for i,va in enumerate(VAS):
    if va in REF: continue                       # it's called -> a real entry
    if i==0: continue
    prev=VAS[i-1]
    if va-prev > 0x400: continue                 # too far to disassemble reliably
    last, penult = two_before(va, prev)
    if last is not None and is_terminator(last): continue          # preceded by a terminator
    if penult is not None and is_delayed_terminator(penult) and last is not None:
        continue                                                   # last is a :d terminator's delay slot
    frag.append(va)                              # falls through + not called = fragment

# group fragments with the entry they belong to (nearest preceding non-fragment)
fragset=set(frag)
groups={}
for va in frag:
    i=VAS.index(va); j=i
    while j>0 and VAS[j-1] in fragset: j-=1
    entry=VAS[j-1] if j>0 else VAS[j]
    groups.setdefault(entry,[]).append(va)

print(f"mapped functions: {len(VAS)}   mis-split fragments: {len(frag)}   affected real functions: {len(groups)}")
for entry in sorted(groups):
    frags=sorted(groups[entry]); i=VAS.index(frags[-1])
    end=VAS[i+1] if i+1<len(VAS) else frags[-1]+0x200
    fl=" ".join(f"{f:#x}:{VA2NAME[f]}" for f in frags)
    print(f"  {entry:#x} {VA2NAME[entry]:40s} +{len(frags)} frag -> whole [{entry:#x},{end:#x}) : {fl}")
