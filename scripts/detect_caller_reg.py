#!/usr/bin/env python3
"""detect_caller_reg.py — find the SECOND forwarder-drop pattern (sibling of __frv_reg_unset): the decompiler
represents a dropped INCOMING register as an UNASSIGNED LOCAL named caller_r<N> or r<N>_in (read without ever
being written = the value of register N on entry). For argument registers r4..r7 (param slots 0..3 on the FR
ABI) this is the SAME B-3 dropped-parameter bug as __frv_reg_unset(N); the whole __frv_reg_unset sweep missed
these. (caller_r8..r15 are callee-saved reads = genuine B-8, harvest; reported separately.)

Classifies each arg-register local:
  FIXABLE-DECLARED : the function already declares a param in slot N-4 -> substitute that param (pure B-3c).
  FIXABLE-ADD      : no param in slot N-4 -> add a param (indirect: safe; direct callers: thread).
  B8-SAVED         : r8..r15 -> callee-saved, not an argument; treat as B-8 (harvest / manual).
A local counts only if it is declared `<type> NAME;` and never appears on the left of `NAME =` (unassigned)."""
import os, re, sys
SRC = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "cpu", "src")
DECL = re.compile(r'^\s*[A-Za-z_][\w \*]*?\b(caller_r(\d+)|r(\d+)_in)\s*;', re.M)
def params_of(text):
    m = re.search(r'\n([A-Za-z_][\w\* ]*?)\b\w+\s*\(([^;{]*)\)\s*\n\{', text)
    if not m: return None
    args = m.group(2).strip()
    if args in ('', 'void'): return []
    parts, d, cur = [], 0, ''
    for ch in args:
        if ch in '([': d += 1
        elif ch in ')]': d -= 1
        if ch == ',' and d == 0: parts.append(cur); cur = ''
        else: cur += ch
    if cur.strip(): parts.append(cur)
    return [p.strip() for p in parts]

decl_fix, add_fix, b8 = [], [], []
for dp,_,fns in os.walk(SRC):
    for fn in sorted(fns):
        if not fn.endswith('.c'): continue
        p = os.path.join(dp, fn); t = open(p, encoding='latin-1').read()
        for m in DECL.finditer(t):
            name = m.group(1); n = int(m.group(2) or m.group(3))
            # must be UNASSIGNED (never `name =`), and USED (appears again besides the decl)
            if re.search(r'\b%s\s*=' % re.escape(name), t): continue
            if len(re.findall(r'\b%s\b' % re.escape(name), t)) < 2: continue
            rel = os.path.relpath(p, SRC)
            # is it forwarded (passed as a call arg)?
            fwd = bool(re.search(r'[(,]\s*(\([\w \*]*\)\s*)?%s\b' % re.escape(name), t))
            if n < 4 or n > 7:
                b8.append((rel, name, n, fwd)); continue
            params = params_of(t); slot = n - 4
            if params is not None and slot < len(params):
                decl_fix.append((rel, name, n, params[slot], fwd))
            else:
                add_fix.append((rel, name, n, fwd))

print(f"=== caller_rN / rN_in dropped-ARG-register class (r4..r7) ===")
print(f"FIXABLE-DECLARED (reg maps to an existing param -> substitute, pure B-3c): {len(decl_fix)}")
for rel,name,n,pnm,fwd in decl_fix[:25]:
    print(f"  {rel}: {name}(r{n}) -> {pnm}{'  [FWD]' if fwd else ''}")
print(f"FIXABLE-ADD (no param in slot -> add param): {len(add_fix)}")
for rel,name,n,fwd in add_fix[:15]:
    print(f"  {rel}: {name}(r{n}){'  [FWD]' if fwd else ''}")
print(f"\nB-8 callee-saved reads (r8..r15, harvest/manual): {len(b8)} files")
print(f"TOTAL arg-register drops: {len(decl_fix)+len(add_fix)} (decl {len(decl_fix)}, add {len(add_fix)}); B-8 {len(b8)}")
