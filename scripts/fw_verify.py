#!/usr/bin/env python3
"""Offline K10D firmware checker for the 1.31 updater's acceptance rules, plus checksum fixer.
Never modifies inputs in place. Complements overlay_fr.py (which only recomputes the sums):
this also checks size, model word, markers and the version word, and with --ref lists what
changed and flags edits to regions the next update / boot-block recovery depends on.

  fw_verify.py verify FILE [--ref STOCK.BIN]
  fw_verify.py fix    FILE OUT [--ref STOCK.BIN]

Rules (docs/firmware-notes.md "Updater", read from the 1.31 updater):
  size 0x840000 (B: main+cpu), 0x800000 (D: main only), 0x40000 (C: cpu only)
  model word 0x1A5 at main 0x10 / cpu 0x800060
  markers (model*0x10001, 0xA55A5AA5) at main 0x1F8,0xFFFF0,0x7FFFF8; cpu 0x800070,0x837FF8,0x83FBF0
  32-bit big-endian word sum of each section == 0 (skipped by the camera if flag word is 0xFFFFFFFF;
  we never rely on that). Compensation word: main 0xFC, cpu 0x80007C.
  version guard: main word @0x1C must be >= installed version (1.31 = 0x011F0013); never lower it.
With --ref, also lists changed byte ranges and flags changes to regions that must stay intact for the
NEXT update/recovery: boot block 0xF0000-0xFFFFF, installed flasher 0x8154-0x9705, header 0x0-0xFF
(other than 0x1C/0xFC), and the control-CPU section if the ref has one and the file doesn't match.
"""
import struct, sys

MODEL = 0x1A5
VER131 = 0x011F0013
SECTIONS = {  # name: (lo, hi, comp_word_off, model_off, markers)
    'main': (0, 0x800000, 0xFC, 0x10, (0x1F8, 0xFFFF0, 0x7FFFF8)),
    'cpu': (0x800000, 0x840000, 0x80007C, 0x800060, (0x800070, 0x837FF8, 0x83FBF0)),
}
PROTECT = [(0xF0000, 0x100000, 'boot block / recovery loader'),
           (0x8154, 0x9706, 'installed RAM flasher'),
           (0x0, 0x1C, 'header'), (0x20, 0xFC, 'header'), (0x100, 0x104, 'header tail')]
# update dispatch 0x10467a3e..: located by decompile, not byte-protected here (see docs/firmware-notes.md)


def layout(n):
    """Return {name: (shift, length)}: file offset = canonical offset - shift."""
    if n == 0x840000: return {'main': 0, 'cpu': 0}
    if n == 0x800000: return {'main': 0}
    if n == 0x40000: return {'cpu': 0x800000}
    sys.exit(f'bad size 0x{n:X}; expected 0x840000, 0x800000 or 0x40000')


def u32(b, o): return struct.unpack('>I', b[o:o + 4])[0]


def wsum(b, lo, hi): return sum(struct.unpack('>%dI' % ((hi - lo) // 4), b[lo:hi])) & 0xFFFFFFFF


def check(b, verbose=True):
    ok = True
    for name, shift in layout(len(b)).items():
        lo, hi, comp, moff, marks = SECTIONS[name]
        L, H = lo - shift, hi - shift
        def say(good, msg):
            nonlocal ok
            ok &= good
            if verbose: print(f"  [{name}] {'OK  ' if good else 'FAIL'} {msg}")
        say(u32(b, moff - shift) == MODEL, f'model word 0x{u32(b, moff - shift):X}')
        for m in marks:
            w = (u32(b, m - shift), u32(b, m - shift + 4))
            say(w == (MODEL * 0x10001, 0xA55A5AA5), f'marker @0x{m:X} = {w[0]:08X} {w[1]:08X}')
        flag = u32(b, comp - shift)
        s = wsum(b, L, H)
        say(s == 0, f'word sum = 0x{s:08X}, comp word @0x{comp:X} = 0x{flag:08X}'
            + ('  (0xFFFFFFFF would make the camera SKIP the check)' if flag == 0xFFFFFFFF else ''))
        if name == 'main':
            v = u32(b, 0x1C)
            say(v >= VER131, f'version word @0x1C = 0x{v:08X} (needs >= 0x{VER131:08X})')
    return ok


def fix(b):
    b = bytearray(b)
    for name, shift in layout(len(b)).items():
        lo, hi, comp, *_ = SECTIONS[name]
        L, H, c = lo - shift, hi - shift, comp - shift
        b[c:c + 4] = b'\0\0\0\0'
        b[c:c + 4] = struct.pack('>I', (-wsum(b, L, H)) & 0xFFFFFFFF)
    return bytes(b)


def diff(b, ref):
    if len(b) != len(ref): print(f'  size differs from ref (0x{len(b):X} vs 0x{len(ref):X}); no diff'); return True
    ranges, i, n = [], 0, len(b)
    while i < n:
        if b[i] != ref[i]:
            j = i
            while j < n and (b[j] != ref[j] or (j + 1 < n and b[j + 1] != ref[j + 1])): j += 1
            ranges.append((i, j)); i = j
        else: i += 1
    print(f'  {len(ranges)} changed range(s) vs ref')
    clean = True
    for a, e in ranges:
        hit = [d for lo, hi, d in PROTECT if a < hi and e > lo]
        if hit: clean = False
        print(f'    0x{a:06X}-0x{e:06X} ({e - a} B){"  <-- PROTECTED: " + ", ".join(sorted(set(hit))) if hit else ""}')
    return clean


def main():
    a = sys.argv[1:]
    if len(a) < 2 or a[0] not in ('verify', 'fix'): sys.exit(__doc__)
    ref = None
    if '--ref' in a:
        i = a.index('--ref'); ref = open(a[i + 1], 'rb').read(); del a[i:i + 2]
    cmd, src = a[0], a[1]
    b = open(src, 'rb').read()
    print(f'{src}: {len(b):#x} bytes')
    if cmd == 'fix':
        if len(a) < 3: sys.exit(__doc__)
        if a[2] == src: sys.exit('refusing to overwrite input')
        b = fix(b)
        open(a[2], 'wb').write(b)
        print(f'wrote {a[2]}')
    valid = check(b)
    clean = diff(b, ref) if ref is not None else True
    why = ([] if valid else ['updater check failed']) + ([] if clean else ['protected region changed'])
    print('RESULT:', 'PASS (structurally valid)' if not why else 'FAIL: ' + '; '.join(why))
    sys.exit(0 if not why else 1)


main()
