#!/usr/bin/env python3
"""patch_rfs_alloc.py [--apply] — fix reg_framework_send callers of the uniform alloc family:
r5(payload) = the alloc-result variable (disasm shows 'mov r4,r5' right after the alloc call,
never overwritten before the send), r6(code) = the delay-slot constant. Rewrites the single
reg_framework_send(ARG) call to reg_framework_send(ARG, (void*)VAR, CODE).

Only touches files where ALL of: table r5=='mov r4,r5'; exactly one alloc assignment whose
lvalue is a simple identifier; exactly one reg_framework_send( call with a single argument.
Everything else is left for manual handling (printed as SKIP)."""
import os, re, sys, subprocess, bisect
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import frdis
ROOT=os.path.dirname(os.path.dirname(os.path.abspath(__file__))); SRC=os.path.join(ROOT,"cpu","src")
APPLY='--apply' in sys.argv
hdr=re.compile(r'@k10d\s+([A-Za-z0-9_]+)\s+@\s+(0x[0-9a-f]+)')
VAs=sorted(frdis.VA2NAME)
def extent(va): i=bisect.bisect_right(VAs,va); return VAs[i] if i<len(VAs) else va+0x800

def table_r5_r6(va):
    end=extent(va); addrs=[]; pc=va
    while pc<end:
        _,sz=frdis.dis1(pc); addrs.append(pc); pc+=sz
    rfs=None
    for i,a in enumerate(addrs):
        t,_=frdis.dis1(a)
        if "<reg_framework_send>" in t:
            for j in range(i+1,min(i+4,len(addrs))):
                t2,_=frdis.dis1(addrs[j])
                if t2.startswith("call"): rfs=j; break
            break
    if rfs is None: return None,None
    def wr(txt,rn):
        m=re.search(r',r(\d+)$',txt)
        return m and int(m.group(1))==rn and not txt.startswith(("st","sth","stb","cmp"))
    r6=None
    dt,_=frdis.dis1(addrs[rfs+1])
    if wr(dt,6): r6=dt
    r5=None
    for k in range(rfs-1,max(0,rfs-14),-1):
        t,_=frdis.dis1(addrs[k])
        if wr(t,5): r5=t; break
    return r5,r6

ALLOC_RE=re.compile(r'^\s*([A-Za-z_][A-Za-z0-9_]*)\s*=\s*(?:\([^)]*\)\s*)?\(?\s*(?:alloc_dynamic_array_header|alloc_[A-Za-z0-9_]*|heap_alloc|mempool_get_block|get_free_queue_block)\s*\(', re.M)
CALL_RE=re.compile(r'reg_framework_send\s*\(\s*([^;]*?)\s*\)\s*;')

done=0; skip=0
for dp,_,fns in os.walk(SRC):
    for fn in fns:
        if not fn.endswith(".c") or fn=="reg_framework_send.c": continue
        p=os.path.join(dp,fn); t=open(p,encoding="latin-1").read()
        if "reg_framework_send(" not in t: continue
        m=hdr.search(t)
        if not m: continue
        va=int(m.group(2),16); name=m.group(1)
        r5,r6=table_r5_r6(va)
        calls=CALL_RE.findall(t)
        if r5!="mov r4,r5":
            continue  # not this family
        allocs=ALLOC_RE.findall(t)
        code=re.search(r'#0x([0-9a-f]+)',r6).group(1) if r6 else None
        if len(allocs)!=1 or len(calls)!=1 or code is None or ',' in calls[0]:
            print(f"SKIP {name}: allocs={allocs} calls={len(calls)} code={code} arg='{calls[0] if calls else None}'")
            skip+=1; continue
        var=allocs[0]; arg=calls[0].strip()
        new=f"reg_framework_send({arg}, (void *){var}, 0x{code});"
        t2=CALL_RE.sub(new, t, count=1)
        if t2==t:
            print(f"SKIP {name}: substitution no-op"); skip+=1; continue
        print(f"PATCH {name}: reg_framework_send({arg}) -> ..., (void*){var}, 0x{code}")
        done+=1
        if APPLY: open(p,"w",encoding="latin-1").write(t2)
print(f"\n{done} patched, {skip} skipped. {'(APPLIED)' if APPLY else '(dry-run; pass --apply)'}")
