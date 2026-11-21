#!/usr/bin/env python3
"""Classify the `&typed_ptr->field + idx` (pointer-arith scaling, class B-9) candidates.

For each unguarded cast-store `*(T *)(&P->field + idx)` (no (int) cast on the &), find the
index variable's increment in the same function. A BYTE-stride increment (idx += 4/8/0x10 ...)
means the author intended byte arithmetic and the missing (int) scales it -> BUG. A unit step
(idx += 1) means the scaling is the intended typed-array walk -> OK. Also flag functions that
MIX `(int)&...+idx` and bare `&...+idx` for the SAME idx -> definite inconsistency.
"""
import os, re, glob
import os
ROOT = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "cpu", "src")
RX_UNGUARDED = re.compile(r'\*\([^;]*\*\)\(&([A-Za-z_][\w()\s*]*(?:->|\.)[\w]+)\s*\+\s*([A-Za-z_]\w*)\s*\)')
RX_GUARDED   = re.compile(r'\*\([^;]*\*\)\(\((?:int|char|uint|unsigned|long)[^)]*\)&[^;]*\+\s*([A-Za-z_]\w*)\s*\)')

def incr_of(text, var):
    # find `var = var + N`, `var += N`, `var++`
    for m in re.finditer(re.escape(var) + r'\s*=\s*' + re.escape(var) + r'\s*\+\s*(0x[0-9a-fA-F]+|\d+)', text):
        return int(m.group(1), 0)
    for m in re.finditer(re.escape(var) + r'\s*\+=\s*(0x[0-9a-fA-F]+|\d+)', text):
        return int(m.group(1), 0)
    if re.search(re.escape(var) + r'\+\+', text) or re.search(r'\+\+' + re.escape(var), text):
        return 1
    return None

suspects, intended, unknown = [], [], []
for f in glob.glob(ROOT + "/**/*.c", recursive=True):
    t = open(f, encoding="latin-1").read()
    ung = list(RX_UNGUARDED.finditer(t))
    if not ung: continue
    # skip DAT_/stack0/PTR_ (byte-typed symbols, correctly byte-arith)
    ung = [m for m in ung if not re.search(r'&(DAT_|stack0|PTR_|LAB_)', m.group(0))]
    if not ung: continue
    guarded_vars = set(RX_GUARDED.findall(t))
    rel = os.path.relpath(f, ROOT)
    seen_idx = {}
    for m in ung:
        idx = m.group(2)
        seen_idx.setdefault(idx, 0)
        seen_idx[idx] += 1
    for idx, cnt in seen_idx.items():
        step = incr_of(t, idx)
        mixed = idx in guarded_vars
        rec = (rel, idx, step, cnt, mixed)
        if mixed or (step is not None and step >= 4):
            suspects.append(rec)
        elif step == 1:
            intended.append(rec)
        else:
            unknown.append(rec)

def show(title, L):
    print(f"\n### {title} ({len(L)})")
    for rel, idx, step, cnt, mixed in sorted(L):
        s = hex(step) if isinstance(step, int) else step
        print(f"  {rel:70s} idx={idx} step={s} stores={cnt} mixed_with_(int)&={mixed}")

show("SUSPECT  (byte-stride increment OR mixed guarded/unguarded -> B-9 bug)", suspects)
show("LIKELY-INTENDED (unit step=1 -> typed array walk, leave alone)", intended)
show("UNKNOWN  (no increment found -> inspect by hand)", unknown)
