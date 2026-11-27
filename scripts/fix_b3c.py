#!/usr/bin/env python3
"""fix_b3c.py [--apply] — eliminate the CLEAN-FIXABLE B-3c subclass: every __frv_reg_unset(N) in a file
whose signature declares a param in register slot N-4 is replaced by that param name. Sound by the FR ABI:
the decompiler emits __frv_reg_unset(N) exactly when it reads rN as INCOMING (undefined); incoming rN is
param slot N-4 (r4=1st,...,r7=4th). The compiler is the safety net (type/undeclared errors). Only touches
files where ALL uses map to a declared param (no signature change). Dry-run by default; --apply writes."""
import os, re, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "cpu", "src")
USE = re.compile(r'__frv_reg_unset\s*\(\s*(\d+)\s*\)')
APPLY = '--apply' in sys.argv

def params_of(text):
    m = re.search(r'\n([A-Za-z_][\w\* ]*\b\w+)\s*\(([^;{]*)\)\s*\n?\s*\{', text)
    if not m: return None
    args = m.group(2).strip()
    if args in ('', 'void'): return []
    parts, depth, cur = [], 0, ''
    for ch in args:
        if ch in '([': depth += 1
        elif ch in ')]': depth -= 1
        if ch == ',' and depth == 0: parts.append(cur); cur = ''
        else: cur += ch
    if cur.strip(): parts.append(cur)
    out = []
    for p in parts:
        nm = re.search(r'(\w+)\s*$', p.strip().replace('*', ' '))
        out.append(nm.group(1) if nm else None)
    return out

fixed_files = 0; fixed_uses = 0; skipped = 0
for dp, _, fns in os.walk(SRC):
    for fn in sorted(fns):
        if not fn.endswith('.c'): continue
        p = os.path.join(dp, fn); t = open(p, encoding='latin-1').read()
        uses = set(int(m.group(1)) for m in USE.finditer(t))
        if not uses: continue
        params = params_of(t)
        if params is None: skipped += 1; continue
        # every use must map to a declared, well-named param
        ok = all(0 <= (n-4) < len(params) and params[n-4] and params[n-4] != '?' for n in uses)
        if not ok: continue
        new = t; cnt = 0
        for n in sorted(uses):
            nm = params[n-4]
            # cast to uint32_t (__frv_reg_unset's return type) so the substitution is type-identical to the
            # original in EVERY context (bare or already-cast); register-width, behavior-identical.
            new, c = re.subn(r'__frv_reg_unset\s*\(\s*%d\s*\)' % n, '(uint32_t)%s' % nm, new)
            cnt += c
        if cnt and new != t:
            fixed_files += 1; fixed_uses += cnt
            if APPLY: open(p, 'w', encoding='latin-1').write(new)
print(f"{'APPLIED' if APPLY else 'DRY-RUN'}: {fixed_files} files, {fixed_uses} __frv_reg_unset uses -> declared params"
      f"  (skipped-unparseable {skipped})")
