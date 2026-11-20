#!/usr/bin/env python3
"""overlay_fr.py — build a candidate FWDC162B.BIN: start from the stock image (inert data
kept byte-identical), overlay the relinked recompiled code + symbolic vtables (from the
FLNK911S .abs via F2MS S-records), redirect the reset vector to the recompiled entry, and
fix both partition checksums.

  overlay_fr.py <firmware.abs.mhx> <stock FWDC162B.BIN> <entry_va> <recompiled_entry> <out.bin>

Checksum: each partition's u32 big-endian word-sum must be 0. MAIN [0:0x800000] correction
word at 0xfc; DSP [0x800000:0x840000] at 0x80007c. Procedure: zero the correction word, sum,
set it to (-sum)&0xffffffff.
"""
import struct, sys

def parse_srec(path):
    """Motorola S-records -> list of (addr, bytes). S3 = 32-bit address."""
    out = []
    for line in open(path):
        line = line.strip()
        if not line.startswith('S3'):
            continue
        n = int(line[2:4], 16)          # byte count: addr(4) + data + csum(1)
        addr = int(line[4:12], 16)
        data = bytes.fromhex(line[12:12 + (n - 5) * 2])
        out.append((addr, data))
    return out

def fix_checksum(img, lo, hi, corr_off):
    img[corr_off:corr_off+4] = b'\x00\x00\x00\x00'
    s = 0
    for o in range(lo, hi, 4):
        s = (s + struct.unpack_from('>I', img, o)[0]) & 0xffffffff
    corr = (-s) & 0xffffffff
    struct.pack_into('>I', img, corr_off, corr)
    # verify
    s = 0
    for o in range(lo, hi, 4):
        s = (s + struct.unpack_from('>I', img, o)[0]) & 0xffffffff
    return corr, s

def main():
    mhx, stock, entry_va, rec_entry, out = sys.argv[1:6]
    entry_va = int(entry_va, 16); rec_entry = int(rec_entry, 16)
    img = bytearray(open(stock, 'rb').read())
    BASE = 0x10000000
    recs = parse_srec(mhx)
    n = tot = 0
    for addr, data in recs:
        off = addr - BASE
        if 0 <= off and off + len(data) <= len(img):
            img[off:off+len(data)] = data; n += 1; tot += len(data)
    print('overlaid %d S-record spans, %d bytes (code@packed + vtables@addr)' % (n, tot))
    # crt0 is LOCATEd at its original address (0x100f0000), so the relinked entry bytes are
    # overlaid IN PLACE above and the reset vector (file 0xffffc = addr 0x100ffffc) still points
    # at it — the linker lays the boot entry out without a vector patch. We only VERIFY, and the
    # overlay must have touched the entry (crt0 span present) so boot enters recompiled code.
    RESET = 0xffffc
    rv = struct.unpack_from('>I', img, RESET)[0]
    entry_touched = any(a <= entry_va < a + len(d) for a, d in recs)
    if rv == entry_va and entry_touched:
        print('reset vector @0xffffc -> %08x (crt0 relinked in place: OK)' % rv)
    elif rv == entry_va and rec_entry != entry_va:
        struct.pack_into('>I', img, RESET, rec_entry)   # fallback: crt0 placed elsewhere
        print('reset vector @0xffffc: %08x -> %08x (redirected)' % (entry_va, rec_entry))
    else:
        print('WARN reset vector @0xffffc = %08x (expected %08x); crt0 overlaid=%s'
              % (rv, entry_va, entry_touched))
    cm, vm = fix_checksum(img, 0, 0x800000, 0xfc)
    cd, vd = fix_checksum(img, 0x800000, 0x840000, 0x80007c)
    print('checksum MAIN corr=0x%08x sum=0x%08x ; DSP corr=0x%08x sum=0x%08x' % (cm, vm, cd, vd))
    open(out, 'wb').write(img)
    print('wrote', out, len(img), 'bytes', '(checksums VALID)' if vm == 0 and vd == 0 else '(CHECKSUM BAD)')

if __name__ == '__main__':
    main()
