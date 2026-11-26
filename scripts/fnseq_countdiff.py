#!/usr/bin/env python3
"""fnseq_countdiff.py <stock.fnseq> <cand.fnseq> — per-function entry COUNT comparison.
Sequence-diff (codiff) drowns in timer-IRQ/poll jitter; raw counts don't. Functions stock
runs far more often than the candidate are where the candidate stops doing real work (the
blocking-wait divergence). Each fnseq line is 'VA name' (or just VA). Prints the biggest
stock-heavy gaps (menu/init work the candidate never reaches)."""
import sys, collections, re
def load(f):
    c=collections.Counter(); names={}
    for l in open(f):
        parts=l.split()
        if not parts: continue
        va=parts[0]; c[va]+=1
        if len(parts)>1: names[va]=' '.join(parts[1:])
    return c,names
sc,sn=load(sys.argv[1]); cc,cn=load(sys.argv[2])
names={**cn,**sn}
# IRQ/poll noise to de-emphasize (still shown, flagged)
NOISE={'0x100080d2','0x10537118','0x1000d268','0x1053706c','0x1000fa2c','0x1000d498','0x10537076',
       '0x1049122e','0x10427f2a','0x10427f5c'}
rows=[]
for va in set(sc)|set(cc):
    s=sc.get(va,0); c=cc.get(va,0)
    rows.append((s-c, s, c, va, names.get(va,'?')))
print("=== functions STOCK runs MORE than CAND (stock-heavy; where cand falls behind) ===")
print(f"{'Δ(s-c)':>7} {'stock':>6} {'cand':>6}  function")
for d,s,c,va,nm in sorted(rows, reverse=True)[:40]:
    flag=' [IRQ/poll]' if va in NOISE else ''
    print(f"{d:>7} {s:>6} {c:>6}  {va} {nm}{flag}")
print("\n=== functions CAND runs but STOCK does NOT (cand-only; wrong branch / spin) ===")
for d,s,c,va,nm in sorted(rows):
    if s==0 and c>0:
        print(f"{d:>7} {s:>6} {c:>6}  {va} {nm}")
