#!/usr/bin/env python3
"""frdis.py <hexVA> [endVA|+len] — disassemble original FR bytes from FWDC162B.BIN.

Mirrors qemu-frn/target/frn/op_helper.c decode (the booting emulator's FR60Lite decoder,
the authoritative reference). Enough opcodes to read a function's register setup — the
point is recovering decompiler-dropped r5/r6 args at call sites (B-3 class).
"""
import sys, struct, os, re
FW = open("/home/memorai/k10d-re/FWDC162B.BIN", "rb").read()
BASE = 0x10000000
def r16(a): o=a-BASE; return (FW[o]<<8)|FW[o+1]
def r32(a): o=a-BASE; return struct.unpack(">I", FW[o:o+4])[0]
def sx8(v): return v-0x100 if v&0x80 else v

VA2NAME={}
hdr=re.compile(r'@k10d\s+([A-Za-z0-9_]+)\s+@\s+(0x[0-9a-f]+)')
root=os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))),"cpu","src")
for dp,_,fns in os.walk(root):
    for fn in fns:
        if fn.endswith(".c") or fn.endswith(".c.handasm"):
            try: t=open(os.path.join(dp,fn),encoding="latin-1").read(4000)
            except OSError: continue
            m=hdr.search(t)
            if m: VA2NAME[int(m.group(2),16)]=m.group(1)
def nm(a): return VA2NAME.get(a,"")

def dis1(pc):
    w=r16(pc); hi8=(w>>8)&0xff; t12=(w>>4)&0xfff; ri=w&0xf; rj=(w>>4)&0xf; xc=(w>>4)&0xf
    td=w&0xff; op=hi8; hi4=(w>>12)&0xf
    R=lambda n:f"r{n}"
    if t12==0x9F8: imm=r32(pc+2); t=nm(imm); return (f"ldi:32 #0x{imm:08x}{' <'+t+'>' if t else ''},{R(ri)}",6)
    if hi8==0x9B: xl=r16(pc+2); return (f"ldi:20 #0x{((xc<<16)|xl)&0xfffff:x},{R(ri)}",4)
    if t12==0x970: return (f"jmp @{R(ri)}",2)
    if t12==0x9F0: return (f"jmp:d @{R(ri)}",2)
    if t12==0x971: return (f"call @{R(ri)}",2)
    if t12==0x9F1: return (f"call:d @{R(ri)}",2)
    if t12==0x070: return (f"ld @r15+,{R(ri)}",2)
    if t12==0x170: return (f"st {R(ri)},@-r15",2)
    if t12==0x078: return (f"ld @r15+,sr{ri}",2)
    if t12==0x178: return (f"st sr{ri},@-r15",2)
    if w==0x9720: return ("ret",2)
    if w==0x9F20: return ("ret:d",2)
    if w==0x9730: return ("reti",2)
    if w==0x9FA0: return ("nop",2)
    if w==0x9F90: return ("leave",2)
    if w==0x1790: return ("st ps,@-r15",2)
    if w==0x0790: return ("ld @r15+,ps",2)
    if t12==0x97A: return (f"extsh {R(ri)}",2)
    if t12==0x97B: return (f"extuh {R(ri)}",2)
    if t12==0x978: return (f"extsb {R(ri)}",2)
    if t12==0x979: return (f"extub {R(ri)}",2)
    if hi4==0xE or hi4==0xF:
        op_b=(w>>8)&0xf; disp=sx8(td); tgt=pc+2+disp*2
        cc={0:"ra",1:"no",6:"eq",7:"ne",2:"c",3:"nc",4:"n",5:"p",8:"v",9:"nv",0xA:"lt",0xB:"ge",0xC:"le",0xD:"gt",0xE:"ls",0xF:"hi"}.get(op_b,str(op_b))
        d="d " if hi4==0xF else ""
        return (f"b{cc}:{d}0x{tgt:08x}",2)
    if (w>>11)==0x1A: d=w&0x7ff; d=d-0x800 if d&0x400 else d; return (f"call 0x{pc+2+d*2:08x}",2)
    if (w>>11)==0x1B: d=w&0x7ff; d=d-0x800 if d&0x400 else d; return (f"call:d 0x{pc+2+d*2:08x}",2)
    if op==0x8B: return (f"mov {R(rj)},{R(ri)}",2)
    if op==0xB7: return (f"mov sr{rj},{R(ri)}",2)
    if op==0xA6: return (f"add {R(rj)},{R(ri)}",2)
    if op==0xA4: return (f"add #{xc},{R(ri)}",2)
    if op==0xA5: return (f"add2 #{-16+xc},{R(ri)}",2)
    if op==0xA2: return (f"addn {R(rj)},{R(ri)}",2)
    if op==0xA0: return (f"addn #{xc},{R(ri)}",2)
    if op==0xA1: return (f"addn2 #{-16+xc},{R(ri)}",2)
    if op==0xAC: return (f"sub {R(rj)},{R(ri)}",2)
    if op==0xAE: return (f"subn {R(rj)},{R(ri)}",2)
    if op==0xAA: return (f"cmp {R(rj)},{R(ri)}",2)
    if op==0xA8: return (f"cmp #{xc},{R(ri)}",2)
    if op==0xA9: return (f"cmp2 #{-16+xc},{R(ri)}",2)
    if op==0x82: return (f"and {R(rj)},{R(ri)}",2)
    if op==0x92: return (f"or {R(rj)},{R(ri)}",2)
    if op==0x9A: return (f"eor {R(rj)},{R(ri)}",2)
    # FR memory-logic (read-modify-write to memory): Rj op @Ri, word/half/byte.
    # qemu op_helper.c op 0x84-0x9e. These are common in flag/MMIO RMW code; frdis was blind
    # to them (printed .word), so frdis-based set_flg/clear_flg checkers missed real RMW ops.
    if op==0x84: return (f"and {R(rj)},@{R(ri)}",2)
    if op==0x85: return (f"andh {R(rj)},@{R(ri)}",2)
    if op==0x86: return (f"andb {R(rj)},@{R(ri)}",2)
    if op==0x94: return (f"or {R(rj)},@{R(ri)}",2)
    if op==0x95: return (f"orh {R(rj)},@{R(ri)}",2)
    if op==0x96: return (f"orb {R(rj)},@{R(ri)}",2)
    if op==0x9C: return (f"eor {R(rj)},@{R(ri)}",2)
    if op==0x9D: return (f"eorh {R(rj)},@{R(ri)}",2)
    if op==0x9E: return (f"eorb {R(rj)},@{R(ri)}",2)
    # FR bit ops on a memory byte: #u4,@Ri (low/high nibble). qemu op 0x80/81/90/91/98/99/88/89.
    if op==0x80: return (f"bandl #{xc},@{R(ri)}",2)
    if op==0x81: return (f"bandh #{xc},@{R(ri)}",2)
    if op==0x90: return (f"borl #{xc},@{R(ri)}",2)
    if op==0x91: return (f"borh #{xc},@{R(ri)}",2)
    if op==0x98: return (f"beorl #{xc},@{R(ri)}",2)
    if op==0x99: return (f"beorh #{xc},@{R(ri)}",2)
    if op==0x88: return (f"btstl #{xc},@{R(ri)}",2)
    if op==0x89: return (f"btsth #{xc},@{R(ri)}",2)
    if hi4==0xC: return (f"ldi:8 #0x{(w>>4)&0xff:x},{R(ri)}",2)
    if op==0x04: return (f"ld @{R(rj)},{R(ri)}",2)
    if op==0x00: return (f"ld @(r13,{R(rj)}),{R(ri)}",2)
    if hi4==0x2: return (f"ld @(r14,{sx8((w>>4)&0xff)*4}),{R(ri)}",2)
    if op==0x03: return (f"ld @(r15,{xc*4}),{R(ri)}",2)
    if op==0x05: return (f"lduh @{R(rj)},{R(ri)}",2)
    if op==0x01: return (f"lduh @(r13,{R(rj)}),{R(ri)}",2)
    if hi4==0x4: return (f"lduh @(r14,{sx8((w>>4)&0xff)*2}),{R(ri)}",2)
    if op==0x06: return (f"ldub @{R(rj)},{R(ri)}",2)
    if op==0x02: return (f"ldub @(r13,{R(rj)}),{R(ri)}",2)
    if hi4==0x6: return (f"ldub @(r14,{sx8((w>>4)&0xff)}),{R(ri)}",2)
    if op==0x14: return (f"st {R(ri)},@{R(rj)}",2)
    if op==0x10: return (f"st {R(ri)},@(r13,{R(rj)})",2)
    if hi4==0x3: return (f"st {R(ri)},@(r14,{sx8((w>>4)&0xff)*4})",2)
    if op==0x13: return (f"st {R(ri)},@(r15,{xc*4})",2)
    if op==0x15: return (f"sth {R(ri)},@{R(rj)}",2)
    if op==0x11: return (f"sth {R(ri)},@(r13,{R(rj)})",2)
    if hi4==0x5: return (f"sth {R(ri)},@(r14,{sx8((w>>4)&0xff)*2})",2)
    if op==0x16: return (f"stb {R(ri)},@{R(rj)}",2)
    if op==0x12: return (f"stb {R(ri)},@(r13,{R(rj)})",2)
    if hi4==0x7: return (f"stb {R(ri)},@(r14,{sx8((w>>4)&0xff)})",2)
    if op==0x8C: return (f"ldm0 (0x{td:02x})",2)
    if op==0x8D: return (f"ldm1 (0x{td:02x})",2)
    if op==0x8E: return (f"stm0 (0x{td:02x})",2)
    if op==0x8F: return (f"stm1 (0x{td:02x})",2)
    if op==0x0F: return (f"enter #{td*4}",2)
    if op==0xB4: return (f"lsl #{xc},{R(ri)}",2)
    if op==0xB5: return (f"lsl #{xc+16},{R(ri)}",2)
    if op==0xB0: return (f"lsr #{xc},{R(ri)}",2)
    if op==0xB1: return (f"lsr #{xc+16},{R(ri)}",2)
    if op==0xB8: return (f"asr #{xc},{R(ri)}",2)
    if op==0xB6: return (f"lsl {R(rj)},{R(ri)}",2)
    if op==0xB2: return (f"lsr {R(rj)},{R(ri)}",2)
    return (f".word 0x{w:04x}",2)

def main():
    va=int(sys.argv[1],16)
    if len(sys.argv)>2:
        a=sys.argv[2]
        end=va+int(a[1:],0) if a.startswith("+") else int(a,16)
    else:
        end=va+0x80
    pc=va
    while pc<end:
        t,sz=dis1(pc)
        mark="   <<<" if ("0x10459abe" in t) else ""
        print(f"  {pc:08x}: {t}{mark}")
        pc+=sz

if __name__=="__main__": main()
