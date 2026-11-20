#!/usr/bin/env python3
"""fix_structsplit.py — the decompiler emits a contiguous struct built on the stack as a set of
SEPARATE locals (puStack_28, puStack_24, ... uStack_18 ...) and passes &<base-local> to a callee
that reads it as param[0..N]. fcc lays those locals out non-contiguously, so param[k>0] reads
garbage AND the spread inflates the frame (shifting SP/WRAM). Fix: wrap the contiguous group in a
real struct so the layout matches the original.

For each file: find a `&<name>Stack_<NN>` whose address is passed to a call, collect the
contiguous group of stack locals at offsets NN, NN-4, NN-8, ... (the struct fields in address
order), replace their declarations with one struct and rewrite references. Compile-gated: a file
is kept only if it still compiles clean.

  fix_structsplit.py            # apply to all candidate files (compile-gated)
  fix_structsplit.py <file...>  # only these
"""
import os, re, sys, glob, subprocess
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
INC  = os.path.join(ROOT, 'cpu', 'include')
S = '/home/memorai/k10d-re/softune'
WI = ['-I', 'Z:' + INC.replace('/', '\\')]

DECL = re.compile(r'^\s*([A-Za-z_][\w ]*?[ \*])([a-z]+Stack_([0-9a-f]+))\s*;\s*$', re.M)
def is_word(typ):
    """4-byte field only: a pointer, or int/uint32/undefined4/void**. Exclude byte/short/arrays."""
    t = typ.strip()
    if '*' in t: return True
    return t in ('int', 'uint', 'uint32_t', 'int32_t', 'undefined4', 'code', 'void')
def fcc_ok(path):
    p = subprocess.run(['wine','BIN/fcc911s.exe','-S','-O1','-cpu','MB91F128',*WI,'-o','nul',
                        'Z:'+os.path.abspath(path).replace('/','\\')], cwd=S,
                       capture_output=True, text=True, timeout=120)
    out = p.stdout + p.stderr
    return not re.search(r' E\d+B:| F\d+B:', out)

def fix_file(path):
    txt = open(path, encoding='latin-1').read()
    # map local -> (offset, type, decl_line)
    locals_ = {}
    for m in DECL.finditer(txt):
        locals_[m.group(2)] = (int(m.group(3),16), m.group(1).strip(), m.group(0))
    if not locals_: return 'no-locals'
    # find a &<local> whose address is passed to a call: '&name' not preceded by a declaration
    passed = None
    for m in re.finditer(r'[(,]\s*(?:\(void\s*\*?\)\s*)?\(?\s*&([a-z]+Stack_[0-9a-f]+)\)?', txt):
        nm = m.group(1)
        if nm in locals_: passed = nm; break
    if not passed: return 'no-addr-pass'
    base_off = locals_[passed][0]
    if not is_word(locals_[passed][1]): return 'base-not-word'   # field[0] of a config is a ptr/word
    byoff = {v[0]: k for k, v in locals_.items()}
    # fields sit on a clean 4-byte grid (base, -4, -8, ...), any type (a char field pads to its slot).
    group = []; o = base_off
    while o in byoff:
        group.append((o, byoff[o])); o -= 4
    if len(group) < 3: return 'group<3'
    lo = group[-1][0]
    # exclude byte-buffers: reject if any local sits at a non-4-aligned offset inside the span
    for off in locals_.values():
        if lo < off[0] < base_off and (base_off - off[0]) % 4 != 0:
            return 'byte-buffer-neighbor'
    names = [n for _, n in group]
    sname = '_cfg_%x' % base_off
    members = ['    %s %s;' % (locals_[nm][1], nm) for _, nm in group]
    struct_decl = '  struct {\n' + '\n'.join(members) + '\n  } %s;' % sname
    # 1) remove the member decl lines
    new = txt
    for nm in names:
        dl = locals_[nm][2]
        new = new.replace(dl + '\n', '', 1) if (dl + '\n') in new else new.replace(dl, '', 1)
    # 2) rewrite body references FIRST (so the struct decl we insert next is untouched)
    for nm in sorted(names, key=len, reverse=True):
        new = re.sub(r'\b'+re.escape(nm)+r'\b', sname+'.'+nm, new)
    # 3) insert the struct decl (original field names) right after the opening brace
    mbrace = re.search(r'\)\s*\n?\s*\{', new)
    if not mbrace: return 'no-brace'
    ins = mbrace.end()
    new = new[:ins] + '\n' + struct_decl + new[ins:]
    open(path, 'w').write(new)
    if fcc_ok(path):
        return 'fixed(%d fields)' % len(group)
    open(path, 'w').write(txt)  # revert
    return 'revert-compilefail'

def main():
    files = sys.argv[1:] or glob.glob(os.path.join(ROOT,'cpu','src','**','*.c'), recursive=True)
    from collections import Counter
    c = Counter()
    for f in files:
        r = fix_file(f); c[r.split('(')[0]] += 1
        if r.startswith('fixed'): print('FIXED', os.path.relpath(f, ROOT), r)
    print('SUMMARY:', dict(c))

if __name__ == '__main__':
    main()
