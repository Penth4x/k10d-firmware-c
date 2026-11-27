#!/usr/bin/env python3
"""detect_unguarded_vcall.py — the DROPPED-NULL-GUARD class: a vtable call through a pointer that
came from a nullable allocation (heap_alloc / heap_alloc_2 / *_new that returns 0 on OOM), with NO
`if (ptr != 0)` guard — while sibling pointers in the same function ARE guarded. On the empty-pool
path the pointer is 0 and the vtable deref calls a null fn pointer -> crash (MENU LAYER-6 was exactly
this: pcVar5 in initialize_object_subsystems_104eb426 unguarded while pcVar3/pcVar4 were guarded).

Heuristic (reports CANDIDATES for manual review):
  A local P assigned `P = ...heap_alloc...` (nullable), then used in a vtable call
  `((vtbl_entry*)(P->field...))[..].fn(` or `(((vtbl_entry*)(P->..`), where NO line between the
  allocation and that call contains `if (P ==`/`if (P !=`/`if (P)` (i.e., unguarded). Prefer cases
  where a DIFFERENT heap-allocated pointer in the same function IS guarded (asymmetry => dropped)."""
import os, re
SRC = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "cpu", "src")
ALLOC = re.compile(r'\b(\w+)\s*=\s*\([^)]*\)\s*(heap_alloc\w*|mempool_get_block)\b|\b(\w+)\s*=\s*(heap_alloc\w*)\s*\(')
VCALL = re.compile(r'\(\(\(?vtbl_entry\s*\*\)\s*\(?(\w+)->')

hits = []
for dp,_,fns in os.walk(SRC):
    for f in sorted(fns):
        if not f.endswith('.c'): continue
        p = os.path.join(dp,f); t = open(p, encoding='latin-1').read()
        lines = t.splitlines()
        # pointers assigned from a nullable alloc, with their line index
        alloc_line = {}
        for i,ln in enumerate(lines):
            m = ALLOC.search(ln)
            if m:
                nm = m.group(1) or m.group(3)
                if nm: alloc_line.setdefault(nm, i)
        if not alloc_line: continue
        # The WRAPPING guard is `if (P != ...0x0) {` in the few lines just before the vtable call.
        # (The construction check `if (P == 0) { P=0; } else {ctor}` does NOT guard the later call.)
        def wrap_guard(P, i):
            for j in range(max(0,i-3), i+1):
                if re.search(r'if\s*\([^;{]*\b%s\b[^;{]*!=\s*(\([^)]*\)\s*)?0x0' % re.escape(P), lines[j]):
                    return True
            return False
        # a sibling is "guarded" if ITS vtable call has a wrap guard (asymmetry signal)
        for i,ln in enumerate(lines):
            vm = VCALL.search(ln)
            if not vm: continue
            P = vm.group(1)
            if P not in alloc_line: continue
            if wrap_guard(P, i): continue
            # exclude the constructor idiom: body wrapped in `if ((P != ..0x0) || (P = alloc, P != ..0x0))`
            if re.search(r'if\s*\(\s*\(\s*%s\s*!=\s*(\([^)]*\)\s*)?0x0\s*\)\s*\|\|' % re.escape(P), t): continue
            # sibling asymmetry: another alloc-ptr's vcall in this fn HAS a wrap guard
            sib_guarded = False
            for k,l2 in enumerate(lines):
                vm2 = VCALL.search(l2)
                if vm2 and vm2.group(1) in alloc_line and vm2.group(1) != P and wrap_guard(vm2.group(1), k):
                    sib_guarded = True; break
            sibling_guarded = sib_guarded
            hits.append((os.path.relpath(p,SRC), i+1, P, sibling_guarded))

hits.sort(key=lambda h: (not h[3],))   # asymmetric (sibling guarded) first = strongest signal
print(f"=== unguarded vtable-call-on-nullable-alloc (dropped-guard) candidates: {len(hits)} ===")
print("(SIB=a sibling alloc-ptr in the same fn IS guarded -> strongest 'dropped guard' signal)")
for rel,ln,P,sib in hits[:40]:
    print(f"  {rel}:{ln}  {P}  {'[SIB-GUARDED]' if sib else ''}")
