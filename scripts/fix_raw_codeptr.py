#!/usr/bin/env python3
"""fix_raw_codeptr.py [--apply] — fix the ENTRY cases of the no-original-jumps-leak class
(detect_raw_codeptr.py): replace `(*(code *)0xADDR)(args)` with `SYMBOL(args)` where ADDR is the
EXACT entry of a recompiled function, so the linker relocates the call to the packed body instead
of running stale original bytes. Only touches exact-entry (ENTRY) cases — never INSIDE/mid-function
ones (those need a split). DRY-RUN by default.

Safety: only rewrites when the symbol is declared in funcs.h (so the call type-checks). Leaves the
argument list verbatim. If a rewrite causes an arity/type mismatch the build will flag that one
file; re-run without it."""
import os, re, glob, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "cpu", "src"); FUNCS_H = os.path.join(ROOT, "cpu", "include", "funcs.h")
APPLY = '--apply' in sys.argv

name_by_addr = {}
for f in glob.glob(os.path.join(SRC, "**", "*.c"), recursive=True):
    try: h = open(f, encoding='latin-1').read(300)
    except OSError: continue
    m = re.search(r'@k10d\s+(\w+)\s+@\s+0x([0-9a-fA-F]+)', h)
    if m: name_by_addr[int(m.group(2),16)] = m.group(1)

funcs_decl = open(FUNCS_H, encoding='latin-1').read()
def declared(nm): return re.search(r'\b%s\s*\(' % re.escape(nm), funcs_decl) is not None

RAW = re.compile(r'\(\s*\*\s*\(\s*code\s*\*\s*\)\s*0x(10[0-9a-fA-F]{6})\s*\)')
changed, skipped = [], []
for f in glob.glob(os.path.join(SRC, "**", "*.c"), recursive=True):
    t = open(f, encoding='latin-1').read(); nt = t; n = 0
    for m in list(RAW.finditer(t)):
        a = int(m.group(1), 16); nm = name_by_addr.get(a)
        if not nm:
            continue                       # INSIDE/ORIGINAL -> leave
        if nm.endswith('_%06x' % a) and ('@ 0x%08x' % a) not in t[:300]:
            pass
        if not declared(nm):
            skipped.append((os.path.relpath(f,SRC), a, 'not in funcs.h')); continue
        nt = nt.replace(m.group(0), nm); n += 1
    if n and nt != t:
        changed.append((os.path.relpath(f,SRC), n))
        if APPLY: open(f, 'w', encoding='latin-1').write(nt)

print(f"{'APPLY' if APPLY else 'DRY-RUN'}: files rewritten={len(changed)} (ENTRY raw-ptr calls), skipped={len(skipped)}")
for rel,n in changed[:40]: print(f"  {rel}: {n} call(s)")
if skipped:
    print("skipped:")
    for rel,a,why in skipped[:10]: print(f"  {rel}: 0x{a:08x} {why}")
