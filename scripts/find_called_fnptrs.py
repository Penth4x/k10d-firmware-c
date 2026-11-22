#!/usr/bin/env python3
"""find_called_fnptrs.py <trace.ft> [more traces...] — confirmed-called rodata function pointers.

The SAFE B-11 discriminator (see BESTIARY). A rodata word is a real, called function pointer — not
data that merely equals a function origVA — iff the firmware READ it and then EXECUTED that address.
This scans an FRN_FT trace for `R? @A =V` where A is in the rodata table region and V is a known
recompiled-function origVA, immediately (within a short window) followed by `PC=V` — i.e. the value
was loaded and jumped to. Those A are un-relocated fn-ptrs the overlay left pointing at original
code; packed code calling them runs un-relocated original code (derail).

Appends the confirmed addresses to scripts/confirmed_fnptrs.txt (deduped, sorted). gen_rodata_fnptrs.py
relocates every address listed there. Re-run on each new FRN_NO_REBOOT trace as boot advances to
batch-collect the on-path tables (no table-boundary guessing, no data false positives).
"""
import os, re, sys, glob, struct
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CODE_LO, CODE_HI = 0x10008000, 0x10622400
RODLO, RODHI = 0x10540000, 0x10622400   # rodata region that holds the dispatch tables
BASE = 0x10000000
FW = open("/home/memorai/k10d-re/FWDC162B.BIN", "rb").read()
CONF = os.path.join(ROOT, "scripts", "confirmed_fnptrs.txt")

# Code and rodata interleave in this XIP image, so being in the rodata address range does NOT prove a
# word is data. The immediate operand of `ldi:32 #fnaddr,rN` (opcode 9f 8x at a-2) is read then the
# following `call @rN` executes fnaddr — identical to the read-then-executed signature of a real
# dispatch, so this test alone mis-lists it. A genuine fn-ptr table word is 4-byte aligned and is not
# the immediate of an ldi:32. Relocating an instruction immediate rewrites code (and a non-aligned
# .DATA.L is bumped, corrupting the adjacent instruction). Never record one. (See gen_rodata_fnptrs.py.)
def is_instr_immediate(a):
    if a & 3:
        return True
    o = a - BASE
    return o >= 2 and FW[o-2] == 0x9f and 0x80 <= FW[o-1] <= 0x9f

# rodata words that are DUAL-USE (read as DATA elsewhere, not just dispatched): relocating them
# regresses boot even though they are read-then-executed somewhere. Confirmed by bisection: these 3
# (in a cls_105f9250 table) crash initialize_seven_subobject_container at ~1.87M. Never relocate.
EXCLUDE = {0x105f923c, 0x105f924c, 0x105f92cc}

va = set()
hdr = re.compile(r'@k10d\s+\w+\s+@\s+0x([0-9a-fA-F]{8})')
for p in glob.glob(ROOT + "/cpu/src/**/*.c", recursive=True):
    m = hdr.search(open(p, encoding="latin-1").read(300))
    if m: va.add(int(m.group(1), 16))

pcre = re.compile(r'PC=0x([0-9a-f]+)')
rdre = re.compile(r'R[0-9] @0x([0-9a-f]+) =0x([0-9a-f]+)')
found = {}
for tr in sys.argv[1:]:
    pend = []
    for ln in open(tr, encoding="latin-1", errors="replace"):
        m = rdre.search(ln)
        if m:
            A, V = int(m.group(1), 16), int(m.group(2), 16)
            if (RODLO <= A < RODHI and CODE_LO <= V < CODE_HI and V in va
                    and A not in EXCLUDE and not is_instr_immediate(A)):
                pend.append((A, V))
                if len(pend) > 48: pend.pop(0)
            continue
        pm = pcre.search(ln)
        if pm:
            pc = int(pm.group(1), 16)
            for (A, V) in pend:
                if pc == V: found[A] = V

prev = set()
if os.path.exists(CONF):
    prev = {int(x, 16) for x in open(CONF).read().split() if x.strip()}
allset = prev | set(found)
open(CONF, "w").write("\n".join(f"0x{a:08x}" for a in sorted(allset)) + "\n")
print(f"confirmed-called fn-ptrs this run: {len(found)}   total in {CONF}: {len(allset)} (+{len(allset)-len(prev)} new)")
