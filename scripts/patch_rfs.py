#!/usr/bin/env python3
"""patch_rfs.py [--apply] — unified reg_framework_send caller fixer. Uses the validated
symbolic resolver (resolve_rfs) to classify each caller's payload(r5)/code(r6), then rewrites
the single-arg reg_framework_send(ARG) call to reg_framework_send(ARG, PAYLOAD, CODE):

  ALLOC    payload = (void *)<alloc-result var>
  STACKPKT payload = <arg of virtual_destructor_free_10428222(&X,N) that follows>  (= &_cfg_1c.*)
  P2PLUS   payload = (void *)((uintptr_t)param_2 + 8)
  ZERO     payload = (void *)0
  P2       payload = (void *)(uintptr_t)param_2

STKLOAD/OTHER are printed as MANUAL (left untouched). Already-3-arg calls are skipped."""
import os, re, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import resolve_rfs as R
APPLY='--apply' in sys.argv
hdr=re.compile(r'@k10d\s+([A-Za-z0-9_]+)\s+@\s+(0x[0-9a-f]+)')
SRC=os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))),"cpu","src")
CALL_RE=re.compile(r'reg_framework_send\s*\(\s*([^;]*?)\s*\)\s*;')
ALLOC_RE=re.compile(r'\b([A-Za-z_][A-Za-z0-9_]*)\s*=\s*(?:\([^)]*\)\s*)?\(?\s*(?:alloc_dynamic_array_header|alloc_[A-Za-z0-9_]*|heap_alloc|mempool_get_block|get_free_queue_block)\s*\(')
VDF_RE=re.compile(r'virtual_destructor_free_10428222\s*\(\s*([^,]+?)\s*,')

def cat(r5):
    if not r5: return "OTHER"
    if r5.startswith("ret(") and "alloc" in r5: return "ALLOC"
    if re.match(r'\(0x[0-9a-f]+\+fp\)$',r5): return "STACKPKT"
    if r5=="p2": return "P2"
    if r5=="(p2+0x8)": return "P2PLUS"
    return "OTHER"   # STKLOAD etc handled as OTHER->manual

done=0; manual=[]
for dp,_,fns in os.walk(SRC):
    for fn in sorted(fns):
        if not fn.endswith(".c") or fn=="reg_framework_send.c": continue
        p=os.path.join(dp,fn); t=open(p,encoding="latin-1").read()
        if "reg_framework_send(" not in t: continue
        m=hdr.search(t)
        if not m: continue
        if re.search(r'reg_framework_send\([^;]*,[^;]*,[^;]*\)',t): continue  # already 3-arg
        va=int(m.group(2),16); name=m.group(1)
        r=R.trace(va)
        if not r: manual.append((name,"no-trace")); continue
        r5,r6=r[1],r[2]
        code=re.search(r'0x([0-9a-f]+)',r6).group(1) if r6 and '0x' in r6 else (r6 if r6 and r6.isdigit() else None)
        c=cat(r5)
        calls=CALL_RE.findall(t)
        if len(calls)!=1 or ',' in calls[0] or code is None:
            manual.append((name,f"{c} calls={len(calls)} code={code}")); continue
        arg=calls[0].strip()
        if c=="ALLOC":
            al=ALLOC_RE.findall(t)
            if len(set(al))!=1: manual.append((name,f"ALLOC vars={set(al)}")); continue
            payload=f"(void *){al[0]}"
        elif c=="STACKPKT":
            vd=VDF_RE.findall(t)
            if len(vd)!=1: manual.append((name,f"STACKPKT vdf={vd}")); continue
            payload=vd[0].strip()
        elif c=="P2PLUS":
            payload="(void *)((uintptr_t)param_2 + 8)"
        elif c=="P2":
            payload="(void *)(uintptr_t)param_2"
        else:
            manual.append((name,c)); continue
        new=f"reg_framework_send({arg}, {payload}, 0x{code});"
        t2=CALL_RE.sub(new,t,count=1)
        if t2==t: manual.append((name,"noop-sub")); continue
        print(f"PATCH {name:46} [{c:8}] -> ({arg}, {payload}, 0x{code})")
        done+=1
        if APPLY: open(p,"w",encoding="latin-1").write(t2)
print(f"\n{done} patched. {len(manual)} MANUAL:")
for n,why in manual: print(f"  {n:46} {why}")
print("(APPLIED)" if APPLY else "(dry-run)")
