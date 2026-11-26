#!/usr/bin/env python3
"""verify_setflg.py — cross-check every set_flg_obj(ARG, PATTERN) call in the tree against the
original disasm. For each .c that calls set_flg_obj, read the ordered list of r5 (pattern)
constants the ORIGINAL function loads at each real `call @r12` to set_flg_obj (0x104596cc),
tracking r12 (invalidated on any write) and the call's delay slot. Compare to the ordered list
of integer-literal PATTERNs in the C. Reports MISMATCH (wrong pattern) and SKIP (non-constant
pattern — a forwarded param/expression we can't compare statically). Catches the
'accidentally-correct-code' risk the set_flg_obj B-3 sweep could leave behind."""
import os, re, sys, bisect
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import frdis
SETFLG = 0x104596cc
SRC = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "cpu", "src")
hdr = re.compile(r'@k10d\s+([A-Za-z0-9_]+)\s+@\s+(0x[0-9a-f]+)')
VAs = sorted(frdis.VA2NAME)
CALL = re.compile(r'set_flg_obj\s*\(\s*[^;]*?,\s*([^;]*?)\s*\)\s*;')

def disasm_patterns(va):
    i = bisect.bisect_right(VAs, va); end = VAs[i] if i < len(VAs) else va + 0x800
    pc = va; r5 = None; r12 = None; out = []
    while pc < end:
        txt, sz = frdis.dis1(pc)
        m = re.search(r'ldi:\d+ #(0x[0-9a-f]+),r5', txt)
        if m: r5 = int(m.group(1), 16)
        if re.search(r',r12\b', txt):
            m2 = re.search(r'ldi:\d+ #0x[0-9a-f]+ <([^>]+)>,r12', txt)
            r12 = m2.group(1) if m2 else None
        if re.match(r'call(:d)? @r12', txt):
            r5_at = r5
            if ':d' in txt:
                dt, _ = frdis.dis1(pc + sz); dm = re.search(r'ldi:\d+ #(0x[0-9a-f]+),r5', dt)
                if dm: r5_at = int(dm.group(1), 16)
            if r12 == 'set_flg_obj': out.append(r5_at)
        pc += sz
    return out

def c_patterns(t):
    out = []
    for m in CALL.finditer(t):
        a = m.group(1).strip()
        mm = re.fullmatch(r'0x([0-9a-fA-F]+)', a) or re.fullmatch(r'(\d+)', a)
        out.append(int(a, 0) if mm else a)  # int or raw expr string
    return out

ok = mism = skip = 0
for dp, _, fns in os.walk(SRC):
    for fn in sorted(fns):
        if not fn.endswith(".c") or fn == "set_flg_obj.c": continue
        p = os.path.join(dp, fn); t = open(p, encoding="latin-1").read()
        if "set_flg_obj(" not in t: continue
        m = hdr.search(t)
        if not m: continue
        cp = c_patterns(t); dp_ = disasm_patterns(int(m.group(2), 16))
        # compare only the constant positions; if counts differ -> report
        name = m.group(1)
        if len(cp) != len(dp_):
            print(f"COUNT  {name:44} C={len(cp)} disasm={len(dp_)}  C={cp} dis={[hex(x) if isinstance(x,int) else x for x in dp_]}")
            mism += 1; continue
        bad = False
        for ce, de in zip(cp, dp_):
            if isinstance(ce, int):
                if de is None or de != ce:
                    print(f"MISMATCH {name:42} C={hex(ce)} disasm={hex(de) if isinstance(de,int) else de}")
                    bad = True
            else:
                skip += 1  # forwarded/expr pattern, not statically comparable here
        if bad: mism += 1
        else: ok += 1
print(f"\n{ok} files OK, {mism} with a mismatch/count-diff, {skip} non-constant pattern sites skipped")
