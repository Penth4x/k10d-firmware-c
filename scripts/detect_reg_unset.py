#!/usr/bin/env python3
"""detect_reg_unset.py — find B-16 instances: functions that FORWARD an incoming caller
register via the __frv_reg_unset(N) stub. The stub `{ return 0; }` both returns 0 AND clobbers
r4-r7 (it is a real call), so any function whose original tail-forwards its ambient registers to
a callee/trap is miscompiled. These read incoming registers = BESTIARY B-8; fix = harvest_asm.py.

Classifies each __frv_reg_unset(N) use:
  FORWARD  — passed as an argument to a function call: callee(..., __frv_reg_unset(N), ...).
             The register is meant to reach the callee -> the stub-0 is WRONG. Dangerous.
  DEREF    — used as a pointer: *(T*)__frv_reg_unset(N) / (void*)__frv_reg_unset(N)->field.
             Dereferences 0 -> null deref. Also wrong, different symptom (crash/garbage).
  OTHER    — used in a computation/comparison.
Ranks FORWARD-only THIN functions (<= ~8 statements) first: those are pure forwarders and the
cleanest harvest_asm candidates. A function already handed to harvest_asm has a .c.handasm, skipped."""
import os, re, sys
SRC = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "cpu", "src")
USE = re.compile(r'__frv_reg_unset\s*\(\s*(\d+)\s*\)')

def classify(line, m):
    pre = line[:m.start()].rstrip()
    # DEREF: preceded by a cast-to-pointer and used as *(...) or (void*)...->
    if re.search(r'\*\s*\(\s*\w[\w ]*\*\s*\)\s*$', pre) or re.search(r'\(\s*void\s*\*\s*\)\s*$', pre) \
       or re.search(r'\(\s*\w+\s*\*\s*\)\s*$', pre):
        # but if it's an ARG to a call (preceded by '(' or ','), it's still a forward of a ptr value
        if re.search(r'[(,]\s*\(\s*\w[\w ]*\*\s*\)\s*$', pre): return 'FORWARD'
        return 'DEREF'
    # FORWARD: the use sits inside a call arg list (preceded by '(' or ',')
    if re.search(r'[(,]\s*$', pre): return 'FORWARD'
    return 'OTHER'

rows = []
for dp, _, fns in os.walk(SRC):
    for fn in sorted(fns):
        if not fn.endswith(".c"): continue
        p = os.path.join(dp, fn); t = open(p, encoding="latin-1").read()
        uses = list(USE.finditer(t))
        if not uses: continue
        cats = []
        for m in uses:
            ls = t.rfind('\n', 0, m.start()) + 1; le = t.find('\n', m.start())
            cats.append(classify(t[ls:le], re.search(r'__frv_reg_unset\s*\(\s*\d+\s*\)', t[ls:le]) and
                                   re.search(re.escape(m.group(0)), t[ls:le])))
        # count statements (crude): semicolons in the body
        body = t[t.find('{'):]
        nstmt = body.count(';')
        fwd = sum(1 for c in cats if c == 'FORWARD')
        rows.append((fn[:-2], nstmt, fwd, len(uses), cats))

# thin pure-forwarders first (small + has FORWARD uses)
thin = sorted([r for r in rows if r[2] > 0 and r[1] <= 8], key=lambda r: (r[1], -r[2]))
print(f"=== THIN FORWARDERS (<=8 stmts, has FORWARD use) — prime harvest_asm candidates: {len(thin)} ===")
for name, nstmt, fwd, nuse, cats in thin[:60]:
    print(f"  {name:48} stmts={nstmt} fwd={fwd}/{nuse}")
allfwd = [r for r in rows if r[2] > 0]
print(f"\nTotal files with a FORWARD __frv_reg_unset: {len(allfwd)}   (all files with any use: {len(rows)})")
