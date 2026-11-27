#!/usr/bin/env python3
"""fix_unguarded_vcall.py [--apply] — wrap each dropped-null-guard vtable call (BESTIARY B-18,
found by detect_unguarded_vcall.py) in an `if (P != (void *)0x0) { ... }` guard so an empty-pool
null allocation skips the deref instead of calling a null fn pointer. Guards are no-ops when P is
non-null, so this is a safe hardening pass. Handles multi-line call statements (wraps from the
vtable-call line through the line that closes it with `;`). DRY-RUN by default."""
import os, re, sys
SRC = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "cpu", "src")
APPLY = '--apply' in sys.argv
VCALL = re.compile(r'\(\(\(?vtbl_entry\s*\*\)\s*\(?(\w+)->')
# reuse the detector's logic to get (file,lineidx,P) candidates
import importlib.util
spec = importlib.util.spec_from_file_location("d", os.path.join(os.path.dirname(__file__), "detect_unguarded_vcall.py"))

def candidates():
    # lightweight re-scan (same core rules as the detector) returning (path, line0, P)
    out = []
    for dp,_,fns in os.walk(SRC):
        for f in sorted(fns):
            if not f.endswith('.c'): continue
            p = os.path.join(dp,f); t = open(p,encoding='latin-1').read(); lines = t.splitlines()
            allocs = {}
            for i,ln in enumerate(lines):
                m = re.search(r'\b(\w+)\s*=\s*\([^)]*\)\s*heap_alloc\w*\s*\(|\b(\w+)\s*=\s*heap_alloc\w*\s*\(', ln)
                if m: allocs.setdefault(m.group(1) or m.group(2), i)
            if not allocs: continue
            def wrap_guard(P,i):
                for j in range(max(0,i-3),i+1):
                    if re.search(r'if\s*\([^;{]*\b%s\b[^;{]*!=\s*(\([^)]*\)\s*)?0x0'%re.escape(P), lines[j]): return True
                return False
            for i,ln in enumerate(lines):
                vm = VCALL.search(ln)
                if not vm: continue
                P = vm.group(1)
                if P not in allocs or wrap_guard(P,i): continue
                if re.search(r'if\s*\(\s*\(\s*%s\s*!=\s*(\([^)]*\)\s*)?0x0\s*\)\s*\|\|'%re.escape(P), t): continue
                out.append((p,i,P))
    return out

by_file = {}
for p,i,P in candidates():
    by_file.setdefault(p, []).append((i,P))

nfiles = 0; ncalls = 0
for p, items in by_file.items():
    lines = open(p,encoding='latin-1').read().split('\n')
    # process bottom-up so line indices stay valid
    for i,P in sorted(items, reverse=True):
        # find the statement end (line containing the terminating ';' at/after i)
        j = i
        while j < len(lines) and ';' not in lines[j]: j += 1
        if j >= len(lines): continue
        indent = re.match(r'\s*', lines[i]).group(0)
        block = ['%sif (%s != (void *)0x0) {' % (indent, P)]
        block += ['  ' + l for l in lines[i:j+1]]
        block += ['%s}' % indent]
        lines[i:j+1] = block
        ncalls += 1
    nfiles += 1
    if APPLY: open(p,'w',encoding='latin-1').write('\n'.join(lines))

print(f"{'APPLY' if APPLY else 'DRY-RUN'}: wrapped {ncalls} unguarded vtable call(s) in {nfiles} file(s)")
for p in list(by_file)[:25]: print("  " + os.path.relpath(p,SRC))
