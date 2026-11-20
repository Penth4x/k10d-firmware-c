#!/usr/bin/env python3
"""fix_structsplit3.py — wrap a contiguous group of stack locals (MIXED types: u32/u16/u8/ptr)
that the decompiler left separate but which is passed by &base to a callee as one struct, so fcc
lays them out non-contiguously and the callee reads a corrupted struct. Walks offsets using each
local's actual type size (so u16/u8 members are handled), wraps the group in a real struct, and
renames references. Compile-gated.
"""
import re,sys,os,subprocess,glob
ROOT=os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
S='/home/memorai/k10d-re/softune'; INC=['-I','Z:\\home\\memorai\\k10d-firmware-c\\cpu\\include']
DECL=re.compile(r'^(\s*)([A-Za-z_][\w ]*?[ \*])((?:(?:pp?|p)?[a-z]+Stack|local)_([0-9a-f]+))\s*;\s*$',re.M)
def tsize(t):
    t=t.strip()
    if '*' in t: return 4
    if re.search(r'\b(char|byte|undefined1|uint8_t|int8_t|u8)\b',t): return 1
    if re.search(r'\b(short|ushort|undefined2|uint16_t|int16_t|u16)\b',t): return 2
    if re.search(r'\b(longlong|double|undefined8|uint64_t|int64_t|u64)\b',t): return 8
    return 4
def fcc_ok(p):
    r=subprocess.run(['wine','BIN/fcc911s.exe','-S','-O1','-cpu','MB91F128',*INC,'-o','nul','Z:'+os.path.abspath(p).replace('/','\\')],cwd=S,capture_output=True,text=True,timeout=120)
    return not re.search(r' E\d+B:| F\d+B:',r.stdout+r.stderr)
def fix(path):
    t=open(path,encoding='latin-1').read()
    locs={}  # name -> (offset,type,size,declline)
    KW={'return','goto','break','continue','else','do','case','sizeof'}
    for m in DECL.finditer(t):
        typ=m.group(2).strip()
        if typ.split()[0] in KW or '=' in typ or '(' in typ: continue  # not a declaration
        locs[m.group(3)]=(int(m.group(4),16),typ,tsize(typ),m.group(0))
    if not locs: return 'no-locals'
    byoff={v[0]:k for k,v in locs.items()}
    # find a &<local> passed as an argument (inside a call paren, preceded by ( or ,)
    base=None
    for m in re.finditer(r'[(,]\s*(?:\([^)]*\)\s*)?&((?:(?:pp?|p)?[a-z]+Stack|local)_[0-9a-f]+)\b',t):
        if m.group(1) in locs: base=m.group(1); break
    if not base: return 'no-addr-pass'
    off0=locs[base][0]
    # walk down by actual sizes
    group=[base]; cur=off0
    offs=sorted(byoff)
    import bisect
    while True:
        sz=locs[byoff[cur]][2]
        i=bisect.bisect_left(offs,cur)-1   # largest offset strictly < cur
        if i<0: break
        nxt=offs[i]
        gap=cur-nxt-sz                      # bytes between this field end and next field start
        if byoff[nxt] not in group and 0<=gap<=3:   # contiguous allowing <=3 alignment padding
            group.append(byoff[nxt]); cur=nxt
        else: break
    if len(group)<3: return 'group<3'
    names=group
    sname='_cfg_%x'%off0
    members=['    %s %s;'%(locs[n][1],n) for n in names]
    sdecl='  struct {\n'+'\n'.join(members)+'\n  } %s;'%sname
    new=t
    for n in names:
        dl=locs[n][3]
        new=new.replace(dl+'\n','',1) if (dl+'\n') in new else new.replace(dl,'',1)
    for n in sorted(names,key=len,reverse=True):
        new=re.sub(r'\b'+re.escape(n)+r'\b',sname+'.'+n,new)
    mb=re.search(r'\)\s*\n?\s*\{',new)
    if not mb: return 'no-brace'
    new=new[:mb.end()]+'\n'+sdecl+new[mb.end():]
    open(path,'w').write(new)
    if fcc_ok(path): return 'fixed(%d)'%len(group)
    open(path,'w').write(t); return 'revert-compilefail'
def main():
    files=sys.argv[1:] or glob.glob(os.path.join(ROOT,'cpu','src','**','*.c'),recursive=True)
    from collections import Counter; c=Counter()
    for f in files:
        r=fix(f); c[r.split('(')[0]]+=1
        if r.startswith('fixed'): print('FIXED',os.path.relpath(f,ROOT),r)
        if r=='revert-compilefail': print('COMPILEFAIL',os.path.relpath(f,ROOT))
    print('SUMMARY',dict(c))
if __name__=='__main__': main()
