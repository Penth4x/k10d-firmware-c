#!/usr/bin/env python3
"""fix_structsplit2.py — fold config slots the decompiler split OFF a _cfg_ struct back in.

A constructor is passed &_cfg_NN.first_field as its config array (param_2). The decompiler
sometimes keeps the trailing config words as SEPARATE write-only stack locals (uStack_10,
uStack_c, ...) laid out non-contiguously by fcc, so the constructor reads param_2[high] past the
struct and gets garbage. Fold any write-only stack local whose offset contiguously extends the
struct (minoff-4, -8, ...) into the struct as a field; redirect its assignments; drop its decl.
Safe: a folded local that the constructor never reads is just extra struct space; one it does read
is the missing config slot. Compile-gated.
"""
import re,sys,os,subprocess,glob
ROOT=os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
S='/home/memorai/k10d-re/softune'; INC=['-I','Z:\\home\\memorai\\k10d-firmware-c\\cpu\\include']
STRUCT=re.compile(r'(struct\s*\{\n)(.*?)(\n\s*\}\s*(_cfg_\w+)\s*;)',re.S)
FIELD=re.compile(r'^\s*[\w ]+\s+((?:pp?u?|u|i|c)Stack_([0-9a-f]+))\s*;\s*$',re.M)
DECL=re.compile(r'^(\s+)([\w ]+?\*?\*?)\s+((?:pp?u?|u|i|c)Stack_([0-9a-f]+))\s*;\s*$',re.M)
def fcc_ok(p):
    r=subprocess.run(['wine','BIN/fcc911s.exe','-S','-O1','-cpu','MB91F128',*INC,'-o','nul','Z:'+os.path.abspath(p).replace('/','\\')],cwd=S,capture_output=True,text=True,timeout=120)
    return not re.search(r' E\d+B:| F\d+B:',r.stdout+r.stderr)
def fix(path):
    t=open(path,encoding='latin-1').read()
    sm=STRUCT.search(t)
    if not sm: return 'no-struct'
    sbody,sname=sm.group(2),sm.group(4)
    offs=[int(m.group(2),16) for m in FIELD.finditer(sbody)]
    if not offs: return 'no-fields'
    minoff=min(offs)
    # candidate split-off locals: write-only scalar stack locals outside the struct
    fold=[]  # (offset, decl_line, type, name)
    for m in DECL.finditer(t):
        if sm.start()<=m.start()<sm.end(): continue   # inside the struct
        name=m.group(3); off=int(m.group(4),16)
        if off>=minoff: continue
        n_assign=len(re.findall(r'\b'+re.escape(name)+r'\s*=(?!=)',t))
        n_tot=len(re.findall(r'\b'+re.escape(name)+r'\b',t))
        if n_assign>=1 and n_tot==1+n_assign:        # write-only
            fold.append((off,m.group(0),m.group(2).strip(),name))
    if not fold: return 'nothing-to-fold'
    fold.sort(key=lambda x:-x[0])   # descending offset = struct order (contiguous after minoff)
    # require contiguity with the struct (minoff-4, -8, ...)
    want=minoff-4; contig=[]
    for off,decl,typ,name in fold:
        if off==want: contig.append((off,decl,typ,name)); want-=4
        else: break
    if not contig: return 'not-contiguous'
    new=t
    # 1) append fields to the struct (as uint32_t to match config words)
    addflds='\n'.join(f'    uint32_t {nm};' for _,_,_,nm in contig)
    new=new[:sm.start(3)]+'\n'+addflds+sm.group(3)+new[sm.end(3):]
    # recompute on the modified text for the rest
    # 2) redirect assignments  name = X;  ->  sname.name = (uint32_t)(X);   and 3) drop decls
    for _,decl,typ,name in contig:
        new=new.replace(decl+'\n','',1)
        # assignment: NAME = <rhs>;
        def repl(mm):
            rhs=mm.group(1).strip()
            return f'{sname}.{name} = (uint32_t)({rhs});'
        new=re.sub(r'\b'+re.escape(name)+r'\s*=\s*([^;]+);',repl,new)
    open(path,'w').write(new)
    if fcc_ok(path): return f'fixed({len(contig)})'
    open(path,'w').write(t); return 'revert-compilefail'
def main():
    files=sys.argv[1:] or glob.glob(os.path.join(ROOT,'cpu','src','**','*.c'),recursive=True)
    from collections import Counter
    c=Counter()
    for f in files:
        r=fix(f); c[r.split('(')[0]]+=1
        if r.startswith('fixed'): print('FIXED',os.path.relpath(f,ROOT),r)
    print('SUMMARY',dict(c))
if __name__=='__main__': main()
