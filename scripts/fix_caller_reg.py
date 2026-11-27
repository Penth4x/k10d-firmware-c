#!/usr/bin/env python3
"""fix_caller_reg.py [--apply] — eliminate the caller_rN / rN_in dropped-arg-register class (sibling of
__frv_reg_unset) in C, for INDIRECT-called functions (no direct callers, so the FR ABI delivers the register
into an added param with no caller changes). For each arg-register local (r4..r7) in such a function:
  - add a uint32_t param per ABI slot 0..max(used) (placeholders for skipped slots),
  - replace each caller_r<N>/r<N>_in with (uint32_t)param_x(N-4),
  - DELETE the now-unused `<type> caller_r<N>;` / `<type> r<N>_in;` local declaration,
  - extend the funcs.h declaration.
Skips: functions with direct callers (need threading), any using r8..r15 (B-8 callee-saved -> harvest),
and any already-declared-param slot (that's pure B-3c substitution -- handled, no new param). DRY-RUN default."""
import os, re, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "cpu", "src"); FUNCS_H = os.path.join(ROOT, "cpu", "include", "funcs.h")
APPLY = '--apply' in sys.argv
LOCAL = re.compile(r'\b(caller_r(\d+)|r(\d+)_in)\b')
DECLSTMT = re.compile(r'^\s*[A-Za-z_][\w \*]*?\b(caller_r\d+|r\d+_in)\s*;\s*\n', re.M)

def direct_callers(fn):
    rx = re.compile(r'\b%s\b' % re.escape(fn))
    for dp,_,fns in os.walk(SRC):
        for f in fns:
            if not f.endswith('.c') or f == fn+'.c': continue
            try:
                if rx.search(open(os.path.join(dp,f),encoding='latin-1').read()): return True
            except OSError: pass
    return False

def params_of(text):
    m = re.search(r'\n([A-Za-z_][\w\* ]*?)\b(\w+)\s*\(([^;{]*)\)\s*\n\{', text)
    if not m: return None, None, None
    return m.group(1).strip(), m.group(2), [p.strip() for p in re.split(r',(?![^()]*\))', m.group(3).strip()) if p.strip() and p.strip()!='void']

fixed, skipped = [], []
hdr = re.compile(r'@k10d\s+(\w+)\s+@')
funcs_txt = open(FUNCS_H, encoding='latin-1').read(); funcs_new = funcs_txt
for dp,_,fns in os.walk(SRC):
    for f in sorted(fns):
        if not f.endswith('.c'): continue
        p = os.path.join(dp, f); t = open(p, encoding='latin-1').read()
        regs = []
        for m in LOCAL.finditer(t):
            nm = m.group(1); n = int(m.group(2) or m.group(3))
            if re.search(r'\b%s\s*=' % re.escape(nm), t): continue   # assigned -> not an incoming-reg drop
            regs.append((nm, n))
        if not regs: continue
        hm = hdr.search(t); fn = hm.group(1) if hm else f[:-2]
        if any(n < 4 or n > 7 for _, n in regs):
            skipped.append((fn, 'B-8 r8..r15')); continue
        ret, name, params = params_of(t)
        if ret is None: skipped.append((fn, 'parse')); continue
        k = len(params) if params else 0
        maxslot = max(n-4 for _, n in regs)
        # direct callers only matter when we ADD a param (maxslot>=k). A pure substitute (every reg maps to
        # an existing param) changes no signature and no caller, so it is safe even with direct callers.
        if maxslot >= k and direct_callers(fn): skipped.append((fn, 'direct callers (needs new param)')); continue
        conv_x = (k == 0) or any('param_x' in (pp or '') for pp in (params or []))
        def pname(s): return (params[s].split()[-1].replace('*','') if s < k else (("param_x%d"%s) if conv_x else ("param_%d"%(s+1))))
        added = ["param_x%d" % s if conv_x else "param_%d" % (s+1) for s in range(k, maxslot+1)]
        argstr = ", ".join((params or [])) if params else ""
        if added: argstr = (argstr + ", " if argstr else "") + ", ".join("uint32_t " + a for a in added)
        argstr = argstr or "void"
        body = re.sub(r'\n([A-Za-z_][\w\* ]*?)\b%s\s*\([^;{]*\)\s*\n\{' % re.escape(fn),
                      "\n" + ret + " " + fn + "(" + argstr + ")\n{", t, count=1)
        body = LOCAL.sub(lambda m: "(uint32_t)%s" % pname(int(m.group(2) or m.group(3))-4) if 4 <= int(m.group(2) or m.group(3)) <= 7 else m.group(0), body)
        body = DECLSTMT.sub('', body)   # drop the now-unused local declaration(s)
        decl_rx = re.compile(r'^([A-Za-z_][\w\* ]*?\b%s\s*\()([^;]*)(\)\s*;\s*)$' % re.escape(fn), re.M)
        dM = decl_rx.search(funcs_new)
        if not dM: skipped.append((fn, 'no funcs.h decl')); continue
        inner = dM.group(2).strip(); base = "" if inner in ('', 'void') else inner
        newinner = ((base + ", " if base else "") + ", ".join("uint32_t" for _ in added)) if added else (base or "void")
        funcs_new = funcs_new[:dM.start()] + dM.group(1) + newinner + dM.group(3) + funcs_new[dM.end():]
        fixed.append((fn, p, body))

print(f"{'APPLY' if APPLY else 'DRY-RUN'}: caller_rN indirect-fixable: {len(fixed)}; skipped: {len(skipped)}")
from collections import Counter
print("skip:", dict(Counter(r for _, r in skipped)))
for fn,_,_ in fixed[:8]: print("  fix:", fn)
if APPLY:
    for fn, p, body in fixed: open(p, 'w', encoding='latin-1').write(body)
    open(FUNCS_H, 'w', encoding='latin-1').write(funcs_new)
    print(f"applied {len(fixed)} files + funcs.h")
