#!/usr/bin/env python3
"""gen_code_targets.py — valid indirect-control-transfer targets of the CANDIDATE.

For the candidate we built, every valid target of a runtime-corruptible control transfer is known
from our own artifacts, so a derail = an indirect `call @ri` / `jmp @ri` / `ret` landing on anything
else (a corrupted pointer/return). This emits scripts/code_targets.txt (sorted hex), the union of:
  - FUNCTION ENTRIES: every `_<name>` in cpu/out/firmware.map (packed functions) + every @k10d origVA
    (original functions) + every `ldi:32 #imm` whose imm is a code address (a call/jump target).
  - RETURN SITES: the address right after each call instruction (+ its delay slot for call:d), found
    by disassembling each function [entry, next_entry) in the candidate image.
Over-approximates on purpose (missing a real target would false-positive a legit transfer; an extra
address only lets one garbage case through). qemu FRN_CODECHECK=<file> halts on the first indirect
transfer whose target isn't in the set. Reads the CANDIDATE image (packed bytes where overlaid,
original bytes elsewhere). Run from the repo root after a build.
"""
import os, re, struct, glob, bisect
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
IMG  = open(os.path.join(ROOT, "cpu", "out", "candidate_FWDC162B.BIN"), "rb").read()
BASE = 0x10000000
LO, HI = 0x10000000, 0x10900000
def r16(a): o=a-BASE; return (IMG[o]<<8)|IMG[o+1]
def r32(a): o=a-BASE; return struct.unpack(">I", IMG[o:o+4])[0]
def insn_len(w):
    t12=(w>>4)&0xFFF; hi8=(w>>8)&0xFF
    if t12==0x9F8: return 6
    if hi8==0x9B: return 4
    return 2

entries = set()
# firmware.map packed function symbols
for line in open(os.path.join(ROOT,"cpu","out","firmware.map"), encoding="latin-1"):
    m=re.match(r'\s*([0-9A-F]{8})\(ABS\)\s+Addr\.\s+\S+\s+_(\w+)', line)
    if m:
        a=int(m.group(1),16)
        if LO<=a<HI: entries.add(a)
# @k10d original function entries
for p in glob.glob(ROOT+"/cpu/src/**/*.c", recursive=True):
    m=re.search(r'@k10d\s+\w+\s+@\s+0x([0-9a-fA-F]{8})', open(p,encoding="latin-1").read(300))
    if m:
        a=int(m.group(1),16)
        if LO<=a<HI: entries.add(a)

retsites = set()
def scan(a, end):
    """linear disassembly [a,end): collect call return-sites + ldi:32 code targets (over-approx)."""
    pc = a
    while pc < end - 1:
        w = r16(pc); t12=(w>>4)&0xFFF; L=insn_len(w)
        if t12==0x9F8 and pc+6<=HI:
            imm=r32(pc+2)
            if LO<=imm<HI: entries.add(imm)
        if (t12==0x971) or (t12==0x9F1) or ((w>>11)==0x1A) or ((w>>11)==0x1B):
            delay = (t12==0x9F1) or ((w>>11)==0x1B)
            rs = pc + 2 + (2 if delay else 0)
            if LO<=rs<HI: retsites.add(rs)
        pc += L

# Original code region [0x10008000, 0x10540000): crt0 + all original (incl. un-decompiled) functions
# run here XIP; disassemble it linearly so every original call's return site is covered (the overlaid
# boot trampoline at 0x10008000 and un-mapped kernel helpers aren't in the entry list). rodata starts
# ~0x1054xxxx. Over-approximation (a few data words mis-read as calls) only adds spurious targets.
scan(0x10008000, 0x10540000)

ents = sorted(entries)
# disassemble each KNOWN function [entry, next_entry): packed functions + @k10d, resynced at entries
for i, a in enumerate(ents):
    end = ents[i+1] if i+1 < len(ents) else min(a+0x1000, HI)
    if end - a > 0x4000: end = a + 0x4000   # cap runaway (data after a function)
    scan(a, end)

targets = sorted(entries | retsites)
out = os.path.join(ROOT,"scripts","code_targets.txt")
open(out,"w").write("\n".join(f"0x{t:08x}" for t in targets)+"\n")
print(f"entries: {len(entries)}  return-sites: {len(retsites)}  total targets: {len(targets)} -> {out}")
