#!/usr/bin/env python3
"""table_stride_check.py — STATIC detector for the B-12 STRIDE variant.

THE BUG (BESTIARY B-12 Instance 4, the nastier variant): a global that is actually a BYTE (or
halfword) TABLE — address-taken and indexed by a runtime register, `(&DAT_x)[i]` / `*(T*)(&DAT_x+i)`
— is declared in globals.h WIDER than its real element. Unlike the plain B-12 (a single over-wide
read truncated to the low byte), here the declared width sets the C pointer-arithmetic STRIDE, so
`(&DAT_x)[i]` reads `i * sizeof(decl)` bytes in instead of `i * element` — landing FAR outside the
table on garbage. Root-caused on K10D: `DAT_105a78c4/c8/c9` (field-descriptor table) declared
uint32_t but byte-indexed → companion SPI txn-B data byte came out 0x00 vs stock 0x10.

WHY global_width_check.py MISSES IT: that detector only inspects the first DIRECT `@rR` load after
`ldi:32 #addr,rR`. A table is reached by an INDEXED load `ldub/lduh/ld @(r13,rR),Rd` (r13 = the FR
register-index addressing mode) — a different opcode family it never scores.

STRATEGY (deterministic, NO runtime): the ORIGINAL FWDC162B.BIN is ground truth. Disassemble it:
for every `ldi:32 #addr,rR`, look (until rR is clobbered) for an INDEXED access *through* rR
(`@(r13,rR)`), and record the element width (ld/lduh/ldub = 32/16/8). Then flag every globals.h
global that is indexed this way AND declared WIDER than its indexed element — its C stride is wrong.

Fix each: declare the base as a `uint8_t[]` (or the real element) byte table and index it directly,
then `touch` its user .c files. Run from anywhere; edits nothing. Writes table_stride_patch.txt.
"""
import struct, re, os

FW_PATH = "/home/memorai/k10d-re/FWDC162B.BIN"
GLOBALS = "/home/memorai/k10d-firmware-c/cpu/include/globals.h"
FW = open(FW_PATH, "rb").read()

def hw(o):  # big-endian halfword at file offset o
    return (FW[o] << 8) | FW[o + 1]

# FR register-indexed (@(r13,Rj)) forms: base = rj = (w>>4)&0xf, dest/src = ri = w&0xf.
IDX_LOAD  = {0x00: 32, 0x01: 16, 0x02: 8}    # ld / lduh / ldub  @(r13,rj),ri
IDX_STORE = {0x10: 32, 0x11: 16, 0x12: 8}    # st / sth  / stb   ri,@(r13,rj)
# Direct (@rj) forms, used only to note "also accessed directly" (not a stride case by itself).
DIR_LOAD  = {0x04: 32, 0x05: 16, 0x06: 8}
DIR_STORE = {0x14: 32, 0x15: 16, 0x16: 8}

# --- 1. declared globals: name-with-trailing-8-hex-address -> declared width ------------------
TYPEW = {
    "uint8_t": 8, "byte": 8, "char": 8, "undefined1": 8, "undefined": 8,
    "uint16_t": 16, "short": 16, "ushort": 16, "undefined2": 16,
    "uint32_t": 32, "int": 32, "undefined4": 32, "uint": 32,
}
decl, declname = {}, {}
for line in open(GLOBALS):
    # accept scalar (`extern uint32_t DAT_x;`) and array (`extern uint8_t DAT_x[];`) forms
    m = re.match(r'\s*extern\s+([A-Za-z_][A-Za-z0-9_]*)\s+(\*?\s*)'
                 r'([A-Za-z_][A-Za-z0-9_]*?([0-9a-fA-F]{8}))\s*(\[\s*\d*\s*\])?\s*;', line)
    if not m:
        continue
    typ, star, name, addrhex, arr = m.groups()[0], m.group(2).strip(), m.group(3), m.group(4), m.group(5)
    if star or typ.startswith("pv") or "*" in line.split(name)[0]:
        continue
    w = TYPEW.get(typ)
    if w is None:
        continue
    addr = int(addrhex, 16)
    if addr not in decl or w > decl[addr]:
        decl[addr] = w
        declname[addr] = name + (arr or "")
addrs = set(decl)
print("declared address-named globals parsed:", len(decl))

# --- 2. for each ldi:32 #addr,rR, find the first access through rR (indexed or direct) --------
idxw = {}  # addr -> min indexed element width seen (the stride the code really wants)
dirw = {}  # addr -> min direct access width seen (for context)
i, hi = 0, len(FW) - 6
while i < hi:
    w = hw(i)
    if (w & 0xFFF0) == 0x9F80:                       # ldi:32 #imm, rR
        R = w & 0xF
        imm = struct.unpack(">I", FW[i + 2:i + 6])[0]
        if imm in addrs:
            j = i + 6
            for _ in range(16):
                if j >= hi:
                    break
                w2 = hw(j); op = w2 >> 8; ri = w2 & 0xF; rj = (w2 >> 4) & 0xF
                isldi = (w2 & 0xFFF0) == 0x9F80
                # FR @(R13,Rj) indexed loads add r13 + r[Rj], symmetric. The table base may be loaded
                # into Rj (the explicit operand) OR into R13 (the fixed index reg). When the ldi target
                # is r13 (R==13), r13 IS the base of any subsequent @(r13,Rj) load, whatever Rj is --
                # e.g. `ldi #tbl,r13; ldub @(r13,r5),r4` (read_byte_from_rodata_table). Earlier versions
                # only matched rj==R and MISSED this whole family (DAT_105a4676 etc.).
                base_hit = (rj == R) or (R == 13)
                if base_hit and op in IDX_LOAD:
                    idxw[imm] = min(idxw.get(imm, 99), IDX_LOAD[op]); break
                if base_hit and op in IDX_STORE:
                    idxw[imm] = min(idxw.get(imm, 99), IDX_STORE[op]); break
                if rj == R and op in DIR_LOAD:
                    dirw[imm] = min(dirw.get(imm, 99), DIR_LOAD[op]); break
                if rj == R and op in DIR_STORE:
                    dirw[imm] = min(dirw.get(imm, 99), DIR_STORE[op]); break
                # clobber: R overwritten as a dest (ri) before use. Stores (incl indexed) don't write ri.
                if ri == R and op not in IDX_STORE and op not in DIR_STORE:
                    break
                j += 6 if isldi else 2
        i += 6
        continue
    i += 2

# --- 2b. C-source cross-check: a REAL stride table is ADDRESS-TAKEN (`&NAME`) in the recompiled .c.
# A global that only ever appears as a bare value (e.g. a 32-bit timeout constant passed to a call)
# but matched the asm scan is a register-reuse false positive — drop it from the confirmed list.
SRC = "/home/memorai/k10d-firmware-c/cpu/src"
ctaken = set()      # addr -> address-taken (&NAME) somewhere: a real table base
cwrite = set()      # addr -> NAME (or _NAME) appears as a SCALAR LVALUE (`NAME =`): arrayify-UNSAFE
import glob
for cf in glob.glob(os.path.join(SRC, "*", "*.c")):
    try:
        txt = open(cf, errors="ignore").read()
    except OSError:
        continue
    for m in re.finditer(r'&(_?[A-Za-z][A-Za-z0-9_]*?([0-9a-fA-F]{8}))\b', txt):
        ctaken.add(int(m.group(2), 16))
    # scalar lvalue write: `NAME = ` or `NAME/*..*/ = ` (not ==). Catches write-as-scalar /
    # read-as-table regions (e.g. 0x8001cca0) where arrayifying the decl turns `_DAT_x = v` into an
    # illegal array assignment -> CC FAIL (BESTIARY B-12 / stride-fix gotcha memory).
    for m in re.finditer(r'\b_?[A-Za-z][A-Za-z0-9_]*?([0-9a-fA-F]{8})\s*(?:/\*[^*]*\*/\s*)?=[^=]', txt):
        cwrite.add(int(m.group(1), 16))

# --- 3. flag indexed tables declared wider than their indexed element -------------------------
patch, asm_only = [], []
for a in sorted(idxw):
    el = idxw[a]
    d = decl[a]
    if el < d:          # declared stride wider than the element the code indexes by -> WRONG stride
        newt = {8: "uint8_t", 16: "uint16_t"}[el]
        row = (a, declname[a], d, el, newt, dirw.get(a), a in cwrite)
        (patch if a in ctaken else asm_only).append(row)

print("\nCONFIRMED STRIDE BUGS (indexed narrow in asm AND address-taken `&x` in C, declared wider):",
      len(patch))
for a, nm, d, el, nt, dw, sw in patch:
    extra = "  (also direct@%d)" % dw if dw else ""
    warn = "  !! SCALAR-LVALUE write: arrayify UNSAFE, handle by hand (cf 8001cca0)" if sw else ""
    print("  0x%08x  %-22s decl uint%-2d  indexed as uint%-2d -> %s[]%s%s" % (a, nm, d, el, nt, extra, warn))
print("\nASM-ONLY (matched the asm scan but NOT address-taken in C — likely register-reuse FP, verify):",
      len(asm_only))
for a, nm, d, el, nt, dw, sw in asm_only:
    extra = "  (also direct@%d)" % dw if dw else ""
    print("  0x%08x  %-22s decl uint%-2d  indexed as uint%-2d%s" % (a, nm, d, el, extra))

outp = os.path.join(os.path.dirname(os.path.abspath(__file__)), "table_stride_patch.txt")
open(outp, "w").write("\n".join("%08x %s[] %s%s" % (a, nt, nm, "  # SCALAR-WRITE-UNSAFE" if sw else "")
                                for a, nm, _, _, nt, _, sw in patch) + "\n")
print("\npatch list -> %s   (retype each to a byte/half TABLE + fix (&x)[i] indexing; verify differentially)" % outp)
