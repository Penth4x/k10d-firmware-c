#!/usr/bin/env python3
"""gen_syscall_traps.py — restore the REALOS `int #0x40` kernel trap at the recompile.

THE BOOT BUG. The decompiler annotated every `ldi:32 #R,r12; int #0x40` (a REALOS syscall
trap dispatched through rtos_dispatch_entry @ 0x1000d268) as a CALL_OVERRIDE, so the C reads
`routine(args)` — readable, but fcc then emits a REAL direct `CALL32:D routine,R12` that skips
the trap. The dispatcher's scheduling bookkeeping is lost; boot eventually diverges into an IRQ
storm (confirmed by codiff: stock goes mempool_get_block -> rtos_dispatch_entry -> routine,
candidate goes mempool_get_block -> routine directly).

FIX (site-precise, byte-faithful): for each distinct kernel routine R, emit a thunk
    __trap_<name>:  LDI:32 #R,R12 ; INT #0x40 ; RET
whose first two instructions are byte-identical to the original trap (verified: 9f8c <R> 1f40),
plus a RET to return to the C caller (result already in r4). Then in each TRAP WRAPPER .c only
(never a direct caller — there are none, verified), rewrite the call `<name>(` -> `__trap_<name>(`.
Wrappers are identified by VA from the tree's own @k10d headers, so names always match the tree.

Self-contained: needs only scripts/trap_sites.tsv (site_va -> routine_va, the irreducible
Ghidra-derived fact) and the C tree itself. Run from the repo root.

  gen_syscall_traps.py            # generate asm+header, apply C renames
  gen_syscall_traps.py --dry-run  # generate asm+header only; report edits, touch no .c
"""
import os, re, sys, glob, bisect

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))  # repo root
TREE = os.path.join(ROOT, 'cpu', 'src')
INC  = os.path.join(ROOT, 'cpu', 'include')
GEN  = os.path.join(ROOT, 'cpu', 'gen')
SITES = os.path.join(ROOT, 'scripts', 'trap_sites.tsv')
HDR = re.compile(r'@k10d\s+(\S+)\s+@\s+0x([0-9a-fA-F]{8})')

def build_tree_index():
    va2name, va2file = {}, {}
    for p in glob.glob(TREE + '/**/*.c', recursive=True):
        m = HDR.search(open(p, encoding='latin-1').read(300))
        if m:
            va2name[int(m.group(2), 16)] = m.group(1)
            va2file[int(m.group(2), 16)] = p
    return va2name, va2file

def load_sites():
    return [(int(a, 16), int(b, 16)) for a, b in
            (l.split() for l in open(SITES) if not l.startswith('#') and l.strip())]

def clone_proto(name, newname):
    """Clone `name`'s prototype line from funcs.h, renamed. Fallback: int newname()."""
    pat = re.compile(r'^([^;]*\b)' + re.escape(name) + r'(\s*\([^;]*\)\s*;)', re.M)
    txt = open(os.path.join(INC, 'funcs.h'), encoding='latin-1').read()
    m = pat.search(txt)
    if m:
        return m.group(1) + newname + m.group(2)
    return 'int %s();' % newname

def main():
    dry = '--dry-run' in sys.argv
    va2name, va2file = build_tree_index()
    vas = sorted(va2file)
    def containing(site):
        i = bisect.bisect_right(vas, site) - 1
        return vas[i] if i >= 0 else None

    sites = load_sites()
    # distinct routines (addr -> tree name) and per-wrapper-file set of routine names to rewrite
    routines = {}            # raddr -> tree name
    file_renames = {}        # wrapper .c path -> set(tree names)
    manual = []              # sites that don't name-match (handle by hand)
    skipped_noc = []         # trap whose wrapper has no .c (original code, trap intact)
    for site, raddr in sites:
        rname = va2name.get(raddr)
        wva = containing(site)
        wfile = va2file.get(wva)
        if not wfile:
            skipped_noc.append((site, raddr)); continue
        if not rname or not re.search(r'\b' + re.escape(rname) + r'\s*\(',
                                      open(wfile, encoding='latin-1').read()):
            manual.append((site, raddr, rname, os.path.relpath(wfile, ROOT))); continue
        routines[raddr] = rname
        file_renames.setdefault(wfile, set()).add(rname)

    # 1) thunks (byte-faithful: LDI:32 #R,R12 / INT #0x40 / RET), one per distinct routine
    os.makedirs(GEN, exist_ok=True)
    lines = ['; syscall_traps.asm (generated) — restore the int #0x40 REALOS trap that recompiled',
             '; direct calls bypass. Each thunk is byte-identical to the original trap + a RET.',
             '\t.SECTION\tSYSTRAP, CODE']
    for raddr in sorted(routines):
        sym = '___trap_' + routines[raddr]        # C __trap_X -> asm ___trap_X
        lines += ['\t.GLOBAL\t%s' % sym, '%s:' % sym,
                  '\tLDI:32\t#0x%08x, R12' % raddr,
                  '\t.DATA.B\t0x1f,0x40\t\t; INT #0x40',
                  '\t.DATA.B\t0x97,0x20\t\t; RET']
    open(os.path.join(GEN, 'syscall_traps.asm'), 'w').write('\n'.join(lines) + '\n')

    # 2) header: extern decl per thunk, prototype cloned from the routine's so args pass identically
    h = ['/* syscall_traps.h (generated) — thunks that re-trap kernel syscalls via int #0x40. */',
         '#ifndef SYSCALL_TRAPS_H', '#define SYSCALL_TRAPS_H', '#include "stdint.h"']
    for raddr in sorted(routines):
        h.append(clone_proto(routines[raddr], '__trap_' + routines[raddr]))
    h.append('#endif')
    open(os.path.join(INC, 'syscall_traps.h'), 'w').write('\n'.join(h) + '\n')

    # 3) rewrite the call token in each wrapper .c (and ensure the header is included)
    edited = 0
    for wfile, names in sorted(file_renames.items()):
        txt = open(wfile, encoding='latin-1').read()
        new = txt
        for nm in names:
            new = re.sub(r'\b' + re.escape(nm) + r'\s*\(', '__trap_' + nm + '(', new)
        if '#include "syscall_traps.h"' not in new:
            new = new.replace('#include "funcs.h"',
                              '#include "funcs.h"\n#include "syscall_traps.h"', 1)
        if new != txt:
            edited += 1
            if not dry:
                open(wfile, 'w').write(new)

    print('thunks: %d distinct routines -> cpu/gen/syscall_traps.asm' % len(routines))
    print('header: cpu/include/syscall_traps.h')
    print('wrappers %s: %d files' % ('TO EDIT (dry-run)' if dry else 'edited', edited))
    if skipped_noc:
        print('sites skipped (wrapper not recompiled, trap intact): %d' %
              len(skipped_noc), [hex(s) for s, _ in skipped_noc])
    if manual:
        print('MANUAL (call not name-matched in wrapper, fix by hand): %d' % len(manual))
        for site, raddr, rn, rel in manual:
            print('   site 0x%08x -> 0x%08x (%s) in %s' % (site, raddr, rn, rel))

if __name__ == '__main__':
    main()
