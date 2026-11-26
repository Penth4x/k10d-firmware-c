#!/usr/bin/env python3
"""mmio_width_check.py (B-12-MMIO class tool) — find MMIO globals whose globals.h type is WIDER than
the ORIGINAL firmware ever accesses them, by disassembling the original's actual load/store width.

WHY: a 16-bit HW status reg typed uint32_t makes the recompile do a 32-bit MMIO read; big-endian that
pulls in the adjacent bytes, so a `reg & 0x8000` bit-15 test reads the WRONG bit (0x80000000 & 0x8000 = 0).
The RTC watch-counter regs (0x40090004/06) typed uint32_t -> the clock-tick path was skipped -> task
timeouts never advanced -> black screen (d327). This is B-12 (16-bit typed 32-bit) on an MMIO global.

METHOD (deterministic, no guessing): scan the original FWDC162B.BIN for `ldi:32 #mmio,rR` then the first
load/store via @rR (op 0x04/05/06 ld/lduh/ldub = 32/16/8; 0x14/15/16 st/sth/stb), stopping if rR is
clobbered. The original's access width IS the correct type. Flag any globals.h DAT_<addr> declared wider
than EVERY original access. Fix: retype to the max observed width + `touch` the DAT_<addr> users (build.sh
ignores header mtime). Writes /tmp/.../mmio_patch.txt (addr newtype).
Run from anywhere; edits nothing.
"""
import struct, re
FW = open("/home/memorai/k10d-re/FWDC162B.BIN","rb").read()
LOAD = {0x04:32,0x05:16,0x06:8}
STORE= {0x14:32,0x15:16,0x16:8}
def hw(o): return (FW[o]<<8)|FW[o+1]
widths = {}  # addr -> {('R',w):count,...}
lo,hi=0x8000,len(FW)-6
i=lo
while i<hi:
    w=hw(i)
    if (w&0xFFF0)==0x9F80:
        R=w&0xf; imm=struct.unpack(">I",FW[i+2:i+6])[0]
        if 0x40000000<=imm<0x50000000:
            j=i+6
            for _ in range(10):
                if j>=hi: break
                w2=hw(j); op=w2>>8; rj=w2&0xf; ri=(w2>>4)&0xf
                isldi=(w2&0xFFF0)==0x9F80
                if rj==R and op in LOAD:  widths.setdefault(imm,{}).update({('R',LOAD[op]):widths.get(imm,{}).get(('R',LOAD[op]),0)+1}); break
                if rj==R and op in STORE: widths.setdefault(imm,{}).update({('W',STORE[op]):widths.get(imm,{}).get(('W',STORE[op]),0)+1}); break
                # clobber of R: any op whose dest ri==R (ALU/ld writes ri), or a new ldi to R
                if isldi and (w2&0xf)==R: break
                if not isldi and ri==R and op not in (0x14,0x15,0x16): break  # ri is written by most ops (not stores)
                j += 6 if isldi else 2
        i+=6; continue
    i+=2
# globals.h declared widths
decl={}
gl="/home/memorai/k10d-firmware-c/cpu/include/globals.h"
for line in open(gl):
    m=re.match(r'\s*extern (uint8_t|uint16_t|uint32_t) _?DAT_([0-9a-fA-F]{8})\b',line)
    if m: decl[int(m.group(2),16)]=int(re.search(r'\d+',m.group(1)).group())
# mismatches: declared 32, ALL original accesses <=16 (and >=1 access)
patch=[]
for a in sorted(widths):
    ws={w for _,w in widths[a]}
    if not ws: continue
    mx=max(ws); d=decl.get(a)
    if d and mx<d:
        newt='uint16_t' if mx==16 else 'uint8_t'
        patch.append((a,d,mx,newt,dict((k[0]+str(k[1]),v) for k,v in widths[a].items())))
print("MISMATCHES (declared wider than EVERY original access):", len(patch))
for a,d,mx,nt,det in patch:
    print("  0x%08x  uint%d -> %s   accesses=%s" % (a,d,nt,det))
# save addr->newtype for the batch
open("/tmp/claude-1002/mmio_patch.txt","w").write("\n".join("%08x %s"%(a,nt) for a,_,_,nt,_ in patch))
