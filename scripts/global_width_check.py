#!/usr/bin/env python3
"""global_width_check.py — STATIC detector for the B-12 "wide-typed byte/halfword global" class.

THE BUG (recurring, see BESTIARY B-12): globals.h declares a global (uRam/bRam/DAT_/_DAT_/... at a
fixed address) WIDER than the original firmware actually accesses it. fcc then emits a word load
where stock did LDUB/LDUH; big-endian, truncating that word to a byte/half yields the WRONG byte
(the one 1-3 positions later), or a `& mask` bit-test reads the wrong bit. Costs endless runtime
debugging each time (companion POST payload byte, RTC watch-counter, obj flags, ...).

STRATEGY (deterministic, NO runtime): the ORIGINAL FWDC162B.BIN is ground truth for access width.
Disassemble it: for every `ldi:32 #addr,rR` then the first load/store through @rR, record the width
(ld/lduh/ldub = 32/16/8; st/sth/stb = 32/16/8), stopping if rR is clobbered first. Then flag every
globals.h global whose DECLARED width exceeds the MAX width stock ever accesses that address.
Generalizes scripts/mmio_width_check.py (which only covered the 0x40xxxxxx MMIO range + DAT_ names)
to ALL address-named globals and ALL ranges.

Fix each flagged global = retype to the max observed width, then `touch` its user .c files (build.sh
checks .c mtime, not headers). Run from anywhere; edits nothing. Writes global_width_patch.txt.
"""
import struct, re, sys, os

FW_PATH = "/home/memorai/k10d-re/FWDC162B.BIN"
GLOBALS = "/home/memorai/k10d-firmware-c/cpu/include/globals.h"
FW = open(FW_PATH, "rb").read()
ROM_BASE = 0x10000000

def hw(o):  # big-endian halfword at file offset o
    return (FW[o] << 8) | FW[o + 1]

LOAD  = {0x04: 32, 0x05: 16, 0x06: 8}   # ld / lduh / ldub  @(rj),ri
STORE = {0x14: 32, 0x15: 16, 0x16: 8}   # st / sth  / stb   ri,@(rj)

# --- 1. declared globals: name-with-trailing-8-hex-address -> declared width ------------------
TYPEW = {
    "uint8_t": 8, "byte": 8, "char": 8, "undefined1": 8, "undefined": 8,
    "uint16_t": 16, "short": 16, "ushort": 16, "undefined2": 16,
    "uint32_t": 32, "int": 32, "undefined4": 32, "uint": 32,
    # pointer-typed globals are genuine 32-bit; never flag them
}
decl = {}      # addr -> declared width
declname = {}  # addr -> source token (for the report)
for line in open(GLOBALS):
    m = re.match(r'\s*extern\s+([A-Za-z_][A-Za-z0-9_]*)\s+(\*?\s*)([A-Za-z_][A-Za-z0-9_]*?([0-9a-fA-F]{8}))\s*;', line)
    if not m:
        continue
    typ, star, name, addrhex = m.group(1), m.group(2).strip(), m.group(3), m.group(4)
    if star or typ.startswith("pv") or "*" in line.split(name)[0]:
        continue  # pointer global -> legitimately 32-bit
    w = TYPEW.get(typ)
    if w is None:
        continue
    addr = int(addrhex, 16)
    # keep the widest declaration if a name appears twice (DAT_ + _DAT_ alias)
    if addr not in decl or w > decl[addr]:
        decl[addr] = w
        declname[addr] = name
addrs = set(decl)
print("declared address-named globals parsed:", len(decl))

# --- 2. stock access width per address (ldi:32 #addr,rR ; first load/store via @rR) -----------
widths = {}  # addr -> {('R',w):count / ('W',w):count}
i, hi = 0, len(FW) - 6
while i < hi:
    w = hw(i)
    if (w & 0xFFF0) == 0x9F80:                     # ldi:32 #imm, rR
        R = w & 0xF
        imm = struct.unpack(">I", FW[i + 2:i + 6])[0]
        if imm in addrs:
            j = i + 6
            for _ in range(12):
                if j >= hi:
                    break
                # qemu naming: ri = w&0xf (dest/src, low nibble); rj = (w>>4)&0xf (BASE, high nibble).
                # loads/stores (op 04/05/06, 14/15/16) address via @r[rj]; writing ops write r[ri].
                w2 = hw(j); op = w2 >> 8; ri = w2 & 0xF; rj = (w2 >> 4) & 0xF
                isldi = (w2 & 0xFFF0) == 0x9F80
                if rj == R and op in LOAD:            # load through our register (base == R)
                    d = widths.setdefault(imm, {}); d[('R', LOAD[op])] = d.get(('R', LOAD[op]), 0) + 1
                    break
                if rj == R and op in STORE:           # store through our register (base == R)
                    d = widths.setdefault(imm, {}); d[('W', STORE[op])] = d.get(('W', STORE[op]), 0) + 1
                    break
                # clobber: R is overwritten as a dest (ri) before we used it as a base.
                # ldi:32 / loads / ALU all write r[ri]; plain stores (14/15/16) and cmp/branch do not.
                if ri == R and op not in STORE:
                    break
                j += 6 if isldi else 2
        i += 6
        continue
    i += 2

# --- 3. flag globals declared wider than stock ever accesses ---------------------------------
patch = []
for a in sorted(addrs):
    acc = widths.get(a)
    if not acc:
        continue                     # never accessed via ldi:32+load in stock (can't judge; skip)
    mx = max(w for _, w in acc)
    d = decl[a]
    if mx < d:
        newt = {8: "uint8_t", 16: "uint16_t"}[mx]
        patch.append((a, declname[a], d, mx, newt, {k[0] + str(k[1]): v for k, v in acc.items()}))

print("\nB-12 CANDIDATES (globals.h type WIDER than the original's real access width):", len(patch))
for a, nm, d, mx, nt, det in patch:
    print("  0x%08x  %-20s uint%-2d -> %-8s   stock_access=%s" % (a, nm, d, nt, det))

outp = os.path.join(os.path.dirname(os.path.abspath(__file__)), "global_width_patch.txt")
open(outp, "w").write("\n".join("%08x %s %s" % (a, nt, nm) for a, nm, _, _, nt, _ in patch) + "\n")
print("\npatch list -> %s   (retype each + touch its user .c files; verify via differential boot)" % outp)
