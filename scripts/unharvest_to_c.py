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
    ret, argstr = dm.group(1).strip(), dm.group(2).strip()
    # parse existing params; each used reg maps to ABI slot N-4 (r4=slot0..r7=slot3). A slot < #existing
    # is an existing param (substitute its name = B-3c); a higher slot needs a new uint32_t param. Cover
    # EVERY slot 0..max(used) with placeholders so each used reg lands in its correct register.
    def _parse(a):
        a=a.strip()
        if a in ('','void'): return []
        parts,d,cur=[],0,''
        for ch in a:
            if ch in '([': d+=1
            elif ch in ')]': d-=1
            if ch==',' and d==0: parts.append(cur); cur=''
            else: cur+=ch
        if cur.strip(): parts.append(cur)
        return [p.strip() for p in parts]
    existing=_parse(argstr); k=len(existing)
    exnames=[(re.search(r'(\w+)\s*$', p.replace('*',' ')) or re.search(r'(\w+)','x')).group(1) for p in existing]
    conv_x = (k==0) or any('param_x' in p for p in existing)
    maxslot=max(r-4 for r in regs)
    def pname(s): return exnames[s] if s<k else (("param_x%d"%s) if conv_x else ("param_%d"%(s+1)))
    added=[pname(s) for s in range(k, maxslot+1)]
    if k==0 and not added: added=["param_x0"]  # safety
    # direct callers only matter when we ADD a param (signature change breaks them). Pure B-3c
    # (every reg maps to an existing param, no new param) is safe with any callers — just substitute.
    if added and direct_callers(fn):
        skipped.append((fn,'direct callers + needs new param (threading)')); continue
    newargs = argstr if (existing) else ""
    if added:
        newargs = (newargs+", " if newargs else "") + ", ".join("uint32_t "+a for a in added)
    newargs = newargs if newargs else "void"
    newdef = "%s %s(%s)\n{" % (ret, fn, newargs)
    body = t[:dm.start()] + "\n" + newdef + t[dm.end():]
    body = USE.sub(lambda mm: "(uint32_t)%s" % pname(int(mm.group(1))-4), body)
    # funcs.h: append len(added) uint32_t to the existing declaration's arg list
    decl_rx = re.compile(r'^([A-Za-z_][\w\* ]*?\b%s\s*\()([^;]*)(\)\s*;\s*)$' % re.escape(fn), re.M)
    dM = decl_rx.search(funcs_new)
    if not dM: skipped.append((fn,'no funcs.h decl')); continue
    inner=dM.group(2).strip(); base="" if inner in ('','void') else inner
    if added: newinner = (base+", " if base else "") + ", ".join("uint32_t" for _ in added)
    else: newinner = base if base else "void"
    funcs_new = funcs_new[:dM.start()] + dM.group(1)+newinner+dM.group(3) + funcs_new[dM.end():]
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
