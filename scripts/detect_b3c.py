#!/usr/bin/env python3
"""detect_b3c.py — find B-3c instances: __frv_reg_unset(N) used in a function whose SIGNATURE already
declares a parameter in register slot N-4 (r4=slot0=1st param, r5=slot1, r6=slot2, r7=slot3). In that
case __frv_reg_unset(N) is just that dropped parameter and can be replaced by the param name directly
(no signature change, no caller changes). This is the SAFE, mechanical subclass — the menu blocker
(check_heap_alloc_success, __frv_reg_unset(5)->param_2) was exactly this and was MISSED by the thin-
forwarder harvest because it has logic + a trap call.

Reports, per file: each __frv_reg_unset(N) and the param it maps to (or UNDECLARED if slot>=#params).
A file is 'clean-fixable' iff EVERY __frv_reg_unset(N) in it maps to a declared param. Those are the
mechanical ones. Files with any UNDECLARED use need a signature change (the harder, caller-chaining case)."""
import os, re, sys
SRC = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "cpu", "src")
USE = re.compile(r'__frv_reg_unset\s*\(\s*(\d+)\s*\)')
# signature: first top-level function definition — 'name(args)' then '{'
SIGRE = re.compile(r'^\s*[A-Za-z_][\w \*]*\b(\w+)\s*\(([^;{]*)\)\s*$', re.M)

def params_of(text):
    """Return ordered list of parameter names from the function definition (best-effort)."""
    # find the definition line: the @k10d name, then the signature just before the first '{'
    # grab the text between the include block and the first '{'
    m = re.search(r'\n([A-Za-z_][\w\* ]*\b\w+)\s*\(([^;{]*)\)\s*\n?\s*\{', text)
    if not m: return None
    args = m.group(2).strip()
    if args in ('', 'void'): return []
    parts, depth, cur = [], 0, ''
    for ch in args:
        if ch == '(' or ch == '[': depth += 1
        if ch == ')' or ch == ']': depth -= 1
        if ch == ',' and depth == 0: parts.append(cur); cur = ''
        else: cur += ch
    if cur.strip(): parts.append(cur)
    names = []
    for p in parts:
        p = p.strip()
        nm = re.search(r'(\w+)\s*$', p.replace('*',' '))
        names.append(nm.group(1) if nm else '?')
    return names

clean, mixed = [], []
for dp, _, fns in os.walk(SRC):
    for fn in sorted(fns):
        if not fn.endswith(".c"): continue
        p = os.path.join(dp, fn); t = open(p, encoding="latin-1").read()
        uses = [int(m.group(1)) for m in USE.finditer(t)]
        if not uses: continue
        params = params_of(t)
        if params is None: continue
        mapping = []
        all_declared = True
        for n in sorted(set(uses)):
            slot = n - 4
            if 0 <= slot < len(params):
                mapping.append((n, params[slot]))
            else:
                mapping.append((n, 'UNDECLARED')); all_declared = False
        rel = os.path.relpath(p, SRC)
        (clean if all_declared else mixed).append((rel, len(uses), mapping))

clean.sort(key=lambda r: r[1])
print(f"=== CLEAN-FIXABLE B-3c (every __frv_reg_unset maps to a declared param): {len(clean)} files ===")
for rel, n, mp in clean:
    print(f"  {rel}  ({n} uses): " + ", ".join(f"reg{r}->{nm}" for r,nm in mp))
print(f"\n=== MIXED (some UNDECLARED -> need signature change / caller chain): {len(mixed)} files ===")
for rel, n, mp in mixed[:40]:
    print(f"  {rel}  ({n} uses): " + ", ".join(f"reg{r}->{nm}" for r,nm in mp))
print(f"\nTOTAL files with __frv_reg_unset: {len(clean)+len(mixed)}  (clean-fixable {len(clean)}, mixed {len(mixed)})")
