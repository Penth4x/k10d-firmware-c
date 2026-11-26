#!/usr/bin/env python3
"""fix_check_kernel_timeout.py — restore the dropped timeout arg to check_kernel_call_success_10459fea.

check_kernel_call_success_10459fea(0x10459fea) is a timed-wait trap wrapper: the original forwards
the ambient r4 (a timeout in ticks, set by each caller in the call's delay slot) to
allocate_kernel_object_1000e4e0. The decompiler dropped every caller's timeout AND made the wrapper
use __frv_reg_unset(4) (returns 0). Fix: give the wrapper a `timeout` param that it forwards, and
pass each caller's original r4 at every C call site.

This script: for each caller file whose C call-site count == disasm call-site count, injects the
disasm r4 value (in order) into each `check_kernel_call_success_10459fea()`. Files whose counts
differ are listed for manual handling. Use --apply to write; default is dry-run.
"""
import sys,re,glob,bisect,os
sys.path.insert(0,os.path.dirname(os.path.abspath(__file__))); import frdis
TARGET=0x10459fea
VAs=sorted(frdis.VA2NAME)
def extent(va):
    i=bisect.bisect_right(VAs,va); return VAs[i] if i<len(VAs) else va+0x400
def disasm_r4s(va):
    end=extent(va); pc=va; r12=None; r4=None; vals=[]; insns=[]
    while pc<end:
        t,sz=frdis.dis1(pc); insns.append((pc,t,sz)); pc+=sz
    for i,(pc,t,sz) in enumerate(insns):
        m=re.search(r'ldi:\d+ #0x([0-9a-f]+)',t)
        if m and 'r12' in t: r12=int(m.group(1),16)
        mm=re.match(r'ldi:\d+ #0x?([0-9a-f]+),r4$',t)
        if mm: r4=int(mm.group(1),16)
        if re.match(r'call(:d)? @r12',t) and r12==TARGET:
            ds=insns[i+1][1] if i+1<len(insns) else ''
            dm=re.match(r'ldi:\d+ #0x?([0-9a-f]+),r4$',ds)
            vals.append(int(dm.group(1),16) if dm else (r4 if r4 is not None else None))
    return vals
apply='--apply' in sys.argv
CALL=re.compile(r'check_kernel_call_success_10459fea\s*\(\s*\)')
clean=0; manual=[]
for f in sorted(glob.glob('cpu/src/*/*.c')):
    t=open(f,encoding='latin-1').read()
    if 'check_kernel_call_success_10459fea' not in t or f.endswith('check_kernel_call_success_10459fea.c'): continue
    csites=list(CALL.finditer(t))
    m=re.search(r'@k10d (\w+) @ (0x[0-9a-f]+)',t)
    r4s=disasm_r4s(int(m.group(2),16))
    name=os.path.basename(f)[:-2]
    if len(csites)!=len(r4s) or any(v is None for v in r4s):
        if csites: manual.append((name,len(csites),len(r4s),r4s))
        continue
    # inject in order (reverse so offsets stay valid)
    nt=t
    for cs,val in sorted(zip(csites,r4s),key=lambda z:-z[0].start()):
        nt=nt[:cs.start()]+('check_kernel_call_success_10459fea(0x%x)'%val)+nt[cs.end():]
    clean+=1
    if apply: open(f,'w',encoding='latin-1').write(nt)
print('clean files %s: %d'%('WRITTEN' if apply else 'would-fix',clean))
print('manual-needed files: %d'%len(manual))
for n,c,d,r in manual: print('  %-44s C=%d disasm=%d r4s=%s'%(n,c,d,[hex(x) if x is not None else '?' for x in r]))
