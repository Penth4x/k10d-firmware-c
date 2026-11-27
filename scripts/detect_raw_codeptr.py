#!/usr/bin/env python3
"""detect_raw_codeptr.py — the "no-original-jumps leak" class: a `(*(code *)0x10XXXXXX)(..)` call
to a HARDCODED original-layout address. If that address belongs to a RECOMPILED function, the
recompiled body was relocated (packed at 0x10622400+), so the hardcoded original address now holds
stale bytes -> calling it runs garbage / self-inconsistent original code -> crash. Such calls must
reference the SYMBOL (so the linker relocates) instead of the raw address.

Classifies each raw call target:
  ENTRY   : exact entry of a recompiled function -> FIXABLE: replace (*(code*)0xA)(args) with NAME(args).
  INSIDE  : inside a recompiled function (not entry) -> needs that function SPLIT at the offset,
            or it is an adjustor/alt-entry; manual.
  ORIGINAL: no recompiled function covers it -> original/kernel code left in place; calling the raw
            address is (probably) fine. Reported for completeness, not a bug.
"""
import os, re, glob, bisect
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "cpu", "src")

# recompiled function entries (stock addr -> name) from @k10d headers
ents = []
name_by_addr = {}
for f in glob.glob(os.path.join(SRC, "**", "*.c"), recursive=True):
    try: h = open(f, encoding='latin-1').read(300)
    except OSError: continue
    m = re.search(r'@k10d\s+(\w+)\s+@\s+0x([0-9a-fA-F]+)', h)
    if m:
        a = int(m.group(2), 16); ents.append(a); name_by_addr[a] = m.group(1)
ents.sort()

RAW = re.compile(r'\(\s*\*\s*\(\s*code\s*\*\s*\)\s*0x(10[0-9a-fA-F]{6})')
cls = {'ENTRY': [], 'INSIDE': [], 'ORIGINAL': []}
for f in glob.glob(os.path.join(SRC, "**", "*.c"), recursive=True):
    t = open(f, encoding='latin-1').read()
    rel = os.path.relpath(f, SRC)
    for m in RAW.finditer(t):
        a = int(m.group(1), 16)
        if a in name_by_addr:
            cls['ENTRY'].append((rel, a, name_by_addr[a]))
        else:
            i = bisect.bisect_right(ents, a) - 1
            # INSIDE if within ~0x400 of a recompiled entry below it (heuristic function span)
            if i >= 0 and a - ents[i] < 0x400:
                cls['INSIDE'].append((rel, a, name_by_addr[ents[i]], a - ents[i]))
            else:
                cls['ORIGINAL'].append((rel, a))

print(f"=== raw (*(code*)0xADDR) call targets: ENTRY(fixable)={len(cls['ENTRY'])} "
      f"INSIDE(split)={len(cls['INSIDE'])} ORIGINAL(ok)={len(cls['ORIGINAL'])} ===")
print(f"\n--- ENTRY: fixable by symbol substitution (first 30) ---")
for rel,a,nm in cls['ENTRY'][:30]: print(f"  {rel}: 0x{a:08x} -> {nm}()")
print(f"\n--- INSIDE: need split/alt-entry (first 15) ---")
for rel,a,nm,off in cls['INSIDE'][:15]: print(f"  {rel}: 0x{a:08x} = {nm}+0x{off:x}")
from collections import Counter
print(f"\nENTRY targets by distinct symbol: {len(set(x[2] for x in cls['ENTRY']))}")
