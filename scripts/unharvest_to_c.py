#!/usr/bin/env python3
"""unharvest_to_c.py [--apply] — convert HARVESTED forwarders back to proper recompilable C (Andrew's
principle: "the only asm should be code that cannot be generated with the C compiler"). For each
cpu/src/.../FOO.c.handasm whose function has NO direct callers (indirect/vtable dispatch — the register
args flow in by the FR ABI, so adding params is safe without touching any caller):
  - restore the .c (from .c.handasm) and add a uint32_t param per forwarded register (__frv_reg_unset(N)
    -> param_x(N-4), r4=param_x0..r7=param_x3), replacing __frv_reg_unset(N) with (uint32_t)param_x(N-4);
  - rewrite the (void)/empty signature to list those params;
  - update the cpu/include/funcs.h declaration to match;
  - delete cpu/gen/FOO.asm (the harvest) and the .c.handasm.
Skips (reports) any with direct callers (need data-flow threading), non-void existing params, or a
signature it can't rewrite mechanically. DRY-RUN by default."""
import os, re, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "cpu", "src"); GEN = os.path.join(ROOT, "cpu", "gen")
FUNCS_H = os.path.join(ROOT, "cpu", "include", "funcs.h")
APPLY = '--apply' in sys.argv
USE = re.compile(r'__frv_reg_unset\s*\(\s*(\d+)\s*\)')
hdr = re.compile(r'@k10d\s+([A-Za-z0-9_]+)\s+@')

def direct_callers(fn):
    rx = re.compile(r'\b%s\b' % re.escape(fn))
    out = []
    for dp,_,fns in os.walk(SRC):
        for f in fns:
            if not f.endswith('.c') or f == fn+'.c': continue
            try:
                if rx.search(open(os.path.join(dp,f),encoding='latin-1').read()): out.append(f)
            except OSError: pass
    return out

handasms = []
for dp,_,fns in os.walk(SRC):
    for f in fns:
        if f.endswith('.c.handasm'): handasms.append(os.path.join(dp,f))

converted, skipped = [], []
funcs_txt = open(FUNCS_H, encoding='latin-1').read(); funcs_new = funcs_txt
for ha in sorted(handasms):
    t = open(ha, encoding='latin-1').read()
    m = hdr.search(t)
    if not m: skipped.append((ha,'no @k10d name')); continue
    fn = m.group(1)
    regs = sorted(set(int(x.group(1)) for x in USE.finditer(t)))
    if not regs: skipped.append((fn,'no __frv_reg_unset (already clean?)')); continue
    # definition: '<ret> fn(<args>)\n{'
    dm = re.search(r'\n([A-Za-z_][\w\* ]*?)\b%s\s*\(([^;{]*)\)\s*\n\{' % re.escape(fn), t)
    if not dm: skipped.append((fn,'cant parse definition')); continue
    ret, args = dm.group(1).strip(), dm.group(2).strip()
    if args not in ('', 'void'): skipped.append((fn,'existing params: %r (needs manual)' % args)); continue
    dc = direct_callers(fn)
    if dc: skipped.append((fn,'%d direct callers (needs threading)' % len(dc))); continue
    # params must cover EVERY ABI slot 0..max(used) so each used reg lands in its correct register
    # (r4=param slot0.. r7=slot3); a gap (e.g. uses only r5) needs a param_x0 placeholder or param_x1
    # would be passed in r4. Unused slots are harmless placeholders.
    maxslot = max(r-4 for r in regs)
    params = ", ".join("uint32_t param_x%d" % s for s in range(maxslot+1))
    newdef = "%s %s(%s)\n{" % (ret, fn, params)
    body = t[:dm.start()] + "\n" + newdef + t[dm.end():]
    body = USE.sub(lambda mm: "(uint32_t)param_x%d" % (int(mm.group(1))-4), body)
    # funcs.h: replace the declaration line
    decl_rx = re.compile(r'^[A-Za-z_][\w\* ]*?\b%s\s*\([^;]*\)\s*;\s*$' % re.escape(fn), re.M)
    newdecl = "%s %s(%s);" % (ret, fn, ", ".join("uint32_t" for _ in range(maxslot+1)))
    if not decl_rx.search(funcs_new): skipped.append((fn,'no funcs.h decl')); continue
    funcs_new = decl_rx.sub(newdecl, funcs_new, count=1)
    converted.append((fn, ha, body, os.path.join(GEN, fn+'.asm')))

print(f"{'APPLY' if APPLY else 'DRY-RUN'}: convertible indirect-only forwarders: {len(converted)}; skipped: {len(skipped)}")
from collections import Counter
print("skip reasons:", dict(Counter(r.split(':')[0].split('(')[0].strip() for _,r in skipped)))
if APPLY:
    for fn, ha, body, asm in converted:
        cpath = ha[:-len('.handasm')]
        open(cpath,'w',encoding='latin-1').write(body)
        os.remove(ha)
        if os.path.exists(asm): os.remove(asm)
    open(FUNCS_H,'w',encoding='latin-1').write(funcs_new)
    print(f"wrote {len(converted)} .c, removed {len(converted)} .c.handasm + their cpu/gen/*.asm, updated funcs.h")
else:
    for fn,_,_,_ in converted[:6]: print("  would convert:", fn)
