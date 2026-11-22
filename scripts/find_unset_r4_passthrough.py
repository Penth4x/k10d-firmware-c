#!/usr/bin/env python3
"""find_unset_r4_passthrough.py - classify `callee(__frv_reg_unset(4), ...)` call sites (B-3).

`__frv_reg_unset(N)` (cpu/src/__frv_stub.c) returns 0, NOT the caller's register. Ghidra emits it
when a call's first argument register (r4) was not set inside the caller before the call. In the
common case the stock caller simply never touches r4 before the call, so the callee receives the
caller's own incoming r4 = `param_1` - and the recompile passes 0 instead (null-deref / wrong object).

For every such site this tool scans the STOCK caller (linear, from its origVA entry) up to the first
call whose target is the callee and reports whether r4 is still the incoming value there.

  verdict PARAM1     r4 untouched and no branch before the call  -> replace with (param_1)
  verdict PARAM1?    r4 untouched on the linear path, but a branch precedes the call -> review
  verdict CLOBBERED  something writes r4 first (shown) -> the arg is something else; review
  verdict NOCALL     no matching call found in the linear scan (indirect target, far code) -> review
  verdict NOPARAM    caller's C signature has no param_1 -> the r4 is the caller's own dropped arg
                     (chain B-3; fix the caller's arity first)

Static only; the stock image is the reference. Usage (repo root):
  FW131=/path/FWDC162B.BIN python3 scripts/find_unset_r4_passthrough.py [--tsv out.tsv] [--apply]

--apply rewrites only strict PARAM1 sites: `__frv_reg_unset(4)` -> `(<callee first-param type>)(param_1)`
(no cast for `(*(code *)0x...)` calls). Skipped when param_1 is a by-value struct or the callee's
prototype cannot be parsed. Each rewrite is tagged `/* B-3: stock r4 = param_1 */`.

--hist FILE gates the rewrite on runtime evidence (as for B-11): FILE is a qemu-frn stock-boot PC
histogram (`FRN_HIST=1 FRN_HIST_ALL=1 FRN_SNAP=... FRN_SNAP_AT=...`, 16-byte buckets). A PARAM1 site
whose stock call instruction's bucket never executed is reported as PARAM1-OFFPATH and not rewritten.
"""
import glob, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TREE = os.path.join(ROOT, 'cpu', 'src')
BASE = 0x10000000
HDR = re.compile(r'@k10d\s+(\S+)\s+@\s+0x([0-9a-fA-F]{8})')
SITE = re.compile(r'(?:\b([A-Za-z_]\w*)|\(\*\(code \*\)(0x[0-9a-fA-F]+)[^)]*\))\(__frv_reg_unset\(4\)')
SIG = re.compile(r'^[A-Za-z_][\w \*]*?\b(\w+)\s*\(([^)]*)\)\s*$', re.M)

# ops (hi8) whose destination is ri = w & 0xf
DEST_HI8 = {0xA6, 0xA4, 0xA5, 0xA7, 0xA2, 0xA0, 0xA1, 0xAC, 0xAD, 0xAE, 0x82, 0x92, 0x9A,
            0xB6, 0xB4, 0xB5, 0xB2, 0xB0, 0xB1, 0xBA, 0xB8, 0xB9, 0x04, 0x00, 0x03, 0x05, 0x01,
            0x06, 0x02, 0x8B, 0xB7, 0x8A}
DEST_HI4 = {0xC, 0x2, 0x4, 0x6}                       # ldi:8, ld/lduh/ldub @(r14,disp)
DEST_T12 = {0x9F8, 0x070, 0x171, 0x978, 0x979, 0x97A, 0x97B, 0x97C, 0x97D}


def h16(fw, a):
    o = a - BASE
    return (fw[o] << 8) | fw[o + 1]


def h32(fw, a):
    return (h16(fw, a) << 16) | h16(fw, a + 2)


def decode(fw, pc):
    """-> (length, writes_r4, kind, target, delay, text). kind: call|ret|jmp|br|None"""
    w = h16(fw, pc)
    hi8, hi4, t12, ri = w >> 8, w >> 12, (w >> 4) & 0xfff, w & 0xf
    if t12 == 0x9F8:
        return 6, ri == 4, None, h32(fw, pc + 2), 0, 'ldi:32 #%08x,r%d' % (h32(fw, pc + 2), ri)
    if hi8 == 0x9B:
        return 4, ri == 4, None, None, 0, 'ldi:20 ..,r%d' % ri
    if w in (0x9720, 0x9730):
        return 2, False, 'ret', None, 0, 'ret'
    if w == 0x9F20:
        return 2, False, 'ret', None, 1, 'ret:d'
    if t12 in (0x971, 0x9F1):
        return 2, True, 'call', ('reg', ri), t12 == 0x9F1, 'call%s @r%d' % (':d' if t12 == 0x9F1 else '', ri)
    if (w >> 11) in (0x1A, 0x1B):
        d = w & 0x7ff
        d = d - 0x800 if d & 0x400 else d
        return 2, True, 'call', pc + 2 + d * 2, (w >> 11) == 0x1B, 'call%s %08x' % (':d' if (w >> 11) == 0x1B else '', pc + 2 + d * 2)
    if t12 in (0x970, 0x9F0):
        return 2, False, 'jmp', None, t12 == 0x9F0, 'jmp @r%d' % ri
    if hi4 in (0xE, 0xF):
        return 2, False, 'br', None, hi4 == 0xF, 'b%x' % ((w >> 8) & 0xf)
    if hi8 == 0x1F:
        return 2, True, 'call', ('int', w & 0xff), 0, 'int #%x' % (w & 0xff)
    if hi8 == 0x8C and (w & 0x10):                     # ldm0 including r4
        return 2, True, None, None, 0, 'ldm0 (r4)'
    wr = (hi8 in DEST_HI8 or hi4 in DEST_HI4 or t12 in DEST_T12) and ri == 4
    if hi4 == 0xC:
        wr = ri == 4
    return 2, wr, None, None, 0, '%04x' % w


def scan(fw, entry, target, nth):
    """Linear scan; returns (verdict, note)."""
    pc, last_r12, seen_branch, found = entry, None, False, 0
    r4_ok, why = True, ''
    while pc < entry + 0x800:
        ln, wr4, kind, tgt, delay, txt = decode(fw, pc)
        if txt.startswith('ldi:32') and txt.endswith(',r12'):
            last_r12 = tgt
        if kind == 'call':
            dest = last_r12 if tgt == ('reg', 12) else tgt
            if delay:                                   # delay slot runs before the callee
                _, dwr4, _, _, _, dtxt = decode(fw, pc + 2)
                if dwr4 and dest == target:
                    r4_ok, why = False, 'delay slot %s @%08x' % (dtxt, pc + 2)
            if dest == target:
                found += 1
                if found == nth:
                    if not r4_ok:
                        return 'CLOBBERED', why
                    return ('PARAM1?' if seen_branch else 'PARAM1'), 'call @%08x' % pc
            r4_ok, why = False, 'r4 = return of call @%08x' % pc
        elif wr4:
            r4_ok, why = False, '%s @%08x' % (txt, pc)
        if kind == 'br':
            seen_branch = True
        if kind in ('ret', 'jmp') and not seen_branch:
            break
        pc += ln + (2 if delay and kind != 'call' else 0)
        if delay and kind == 'call':
            pc += 2
    return 'NOCALL', ''


def main():
    fw = open(os.environ.get('FW131') or os.path.join(ROOT, '..', '..', 'FWDC162B.BIN'), 'rb').read()
    name2va, files = {}, []
    for p in glob.glob(TREE + '/**/*.c', recursive=True):
        src = open(p, encoding='latin-1').read()
        m = HDR.search(src[:400])
        if m:
            name2va[m.group(1)] = int(m.group(2), 16)
            if '__frv_reg_unset(4)' in src:
                files.append((p, m.group(1), int(m.group(2), 16), src))
    protos = {}
    for l in open(os.path.join(ROOT, 'cpu', 'include', 'funcs.h'), encoding='latin-1'):
        m = re.match(r'^[^;(]*?\b(\w+)\s*\(([^;]*)\)\s*;', l)
        if m:
            first = m.group(2).split(',')[0].strip()
            t = re.sub(r'\s*\bparam_\d+\s*$', '', first)
            protos[m.group(1)] = None if t in ('', 'void') or t == first else t
    apply = '--apply' in sys.argv
    hist = None
    if '--hist' in sys.argv:
        hist = set()
        for l in open(sys.argv[sys.argv.index('--hist') + 1]):
            if l.startswith('0x'):
                hist.add(int(l.split()[0], 16) & ~0xf)
    edits = {}
    rows = []
    for p, fn, va, src in sorted(files):
        sig = SIG.search(src)
        has_p1 = bool(sig and re.search(r'\bparam_1\b', sig.group(2)))
        count = {}
        for m in SITE.finditer(src):
            callee = m.group(1) or m.group(2)
            tva = int(callee, 16) if callee.startswith('0x') else name2va.get(callee)
            count[callee] = count.get(callee, 0) + 1
            line = src.count('\n', 0, m.start()) + 1
            if tva is None:
                v, note = 'NOCALL', 'callee not in tree'
            else:
                v, note = scan(fw, va, tva, count[callee])
            if v.startswith('PARAM1') and not has_p1:
                v = 'NOPARAM'
            if v == 'PARAM1' and hist is not None:
                cpc = int(note.split('@')[1], 16)
                if (cpc & ~0xf) not in hist:
                    v = 'PARAM1-OFFPATH'
            if v == 'PARAM1' and apply:
                p1t = re.search(r'([^,]*?)\bparam_1\b', sig.group(2)).group(1)
                byval_struct = 'struct' in p1t and '*' not in p1t
                if callee.startswith('0x'):
                    rep = '(param_1)'
                elif protos.get(callee):
                    rep = '(%s)(param_1)' % protos[callee]
                else:
                    rep = None
                if rep and not byval_struct:
                    edits.setdefault(p, []).append((m.start(), m.end(), rep))
                    v = 'FIXED'
            rows.append((v, os.path.relpath(p, TREE), line, fn, '%08x' % va, callee, note))
    for p, lst in edits.items():
        src = open(p, encoding='latin-1').read()
        for a, b, rep in sorted(lst, reverse=True):
            seg = src[a:b]
            src = src[:a] + seg.replace('__frv_reg_unset(4)', rep + '/* B-3: stock r4 = param_1 */') + src[b:]
        open(p, 'w', encoding='latin-1').write(src)
    out = sys.stdout
    if '--tsv' in sys.argv:
        out = open(sys.argv[sys.argv.index('--tsv') + 1], 'w')
    out.write('# verdict\tfile\tline\tcaller\tcaller_va\tcallee\tnote\n')
    for r in sorted(rows):
        out.write('\t'.join(map(str, r)) + '\n')
    tally = {}
    for r in rows:
        tally[r[0]] = tally.get(r[0], 0) + 1
    print(' '.join('%s=%d' % kv for kv in sorted(tally.items())), file=sys.stderr)


if __name__ == '__main__':
    main()
