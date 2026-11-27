#!/usr/bin/env python3
"""fix_indirect_mixed_b3.py [--apply] — B-3 mixed subclass, INDIRECT-called only: a function that already
declares some params but forwards a HIGHER, undeclared register via __frv_reg_unset(N) (slot N-4 >= #params).
For indirect/vtable-dispatched functions (NO direct callers), we can safely EXTEND the signature: append a
uint32_t param for every ABI slot from #existing..max(N-4) (placeholders for any skipped slot), replace
__frv_reg_unset(N) with (uint32_t)<that param>, and update the funcs.h declaration. The ABI delivers the
register into the new param; no caller changes (indirect). Skips any with direct callers (need threading),
any where a used reg maps to an ALREADY-declared slot (that's B-3c, handled by fix_b3c.py), and any it can't
parse. Follows the existing param-name convention (param_N or param_xN). DRY-RUN by default."""
import os, re, sys
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "cpu", "src"); FUNCS_H = os.path.join(ROOT, "cpu", "include", "funcs.h")
APPLY = '--apply' in sys.argv
USE = re.compile(r'__frv_reg_unset\s*\(\s*(\d+)\s*\)')

def direct_callers(fn):
    rx = re.compile(r'\b%s\b' % re.escape(fn))
    for dp,_,fns in os.walk(SRC):
        for f in fns:
            if not f.endswith('.c') or f==fn+'.c': continue
            try:
                if rx.search(open(os.path.join(dp,f),encoding='latin-1').read()): return True
            except OSError: pass
    return False

def parse_params(args):
    args=args.strip()
    if args in ('','void'): return []
    parts,depth,cur=[],0,''
    for ch in args:
        if ch in '([': depth+=1
        elif ch in ')]': depth-=1
        if ch==',' and depth==0: parts.append(cur); cur=''
        else: cur+=ch
    if cur.strip(): parts.append(cur)
    return [p.strip() for p in parts]

funcs_txt = open(FUNCS_H,encoding='latin-1').read(); funcs_new=funcs_txt
fixed=[]; skipped=[]
hdr=re.compile(r'@k10d\s+([A-Za-z0-9_]+)\s+@')
for dp,_,fns in os.walk(SRC):
    for f in sorted(fns):
        if not f.endswith('.c'): continue
        p=os.path.join(dp,f); t=open(p,encoding='latin-1').read()
        regs=sorted(set(int(m.group(1)) for m in USE.finditer(t)))
        if not regs: continue
        hm=hdr.search(t);  fn=hm.group(1) if hm else f[:-2]
        dm=re.search(r'\n([A-Za-z_][\w\* ]*?)\b%s\s*\(([^;{]*)\)\s*\n\{' % re.escape(fn), t)
        if not dm: skipped.append((fn,'parse')); continue
        ret,arglist=dm.group(1).strip(),dm.group(2)
        params=parse_params(arglist)
        k=len(params)
        maxslot=max(r-4 for r in regs)
        if maxslot < k:  # all used regs map to declared slots -> B-3c, not mixed
            skipped.append((fn,'all-declared(B-3c)')); continue
        if direct_callers(fn): skipped.append((fn,'direct-callers')); continue
        # name convention from last existing param
        conv_x = any('param_x' in pp for pp in params) or k==0
        def pname(slot): return ("param_x%d"%slot) if conv_x else ("param_%d"%(slot+1))
        added=[pname(s) for s in range(k, maxslot+1)]
        newargs = arglist.rstrip()
        if newargs.strip() in ('','void'): newargs=", ".join("uint32_t %s"%pname(s) for s in range(maxslot+1))
        else: newargs = newargs + ", " + ", ".join("uint32_t %s"%a for a in added)
        body = t[:dm.start()] + "\n" + ret + " " + fn + "(" + newargs + ")\n{" + t[dm.end():]
        body = USE.sub(lambda mm: "(uint32_t)%s" % pname(int(mm.group(1))-4), body)
        # funcs.h: extend the declared arg types by len(added) uint32_t
        decl_rx = re.compile(r'^([A-Za-z_][\w\* ]*?\b%s\s*\()([^;]*)(\)\s*;\s*)$' % re.escape(fn), re.M)
        dmatch = decl_rx.search(funcs_new)
        if not dmatch: skipped.append((fn,'no funcs.h decl')); continue
        inner = dmatch.group(2).strip()
        base = "" if inner in ('','void') else inner+", "
        newinner = base + ", ".join("uint32_t" for _ in added) if base or added else inner
        funcs_new = funcs_new[:dmatch.start()] + dmatch.group(1)+newinner+dmatch.group(3) + funcs_new[dmatch.end():]
        fixed.append((fn,p,body))

print(f"{'APPLY' if APPLY else 'DRY-RUN'}: indirect-mixed fixable: {len(fixed)}; skipped: {len(skipped)}")
from collections import Counter
print("skip:", dict(Counter(r for _,r in skipped)))
for fn,_,_ in fixed[:6]: print("  fix:", fn)
if APPLY:
    for fn,p,body in fixed: open(p,'w',encoding='latin-1').write(body)
    open(FUNCS_H,'w',encoding='latin-1').write(funcs_new)
    print(f"applied {len(fixed)} files + funcs.h")
