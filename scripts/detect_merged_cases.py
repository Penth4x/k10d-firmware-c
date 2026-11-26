#!/usr/bin/env python3
"""detect_merged_cases.py — hunt the 'merged-case / fabricated-constant' decompiler bug:
the original calls set_flg_obj (or any kernel pattern-setter) from ONE instruction that is
reached by several branches, each loading a DIFFERENT constant into r5; the decompiler
collapses those cases into one C branch and keeps only one arm's constant. verify_setflg.py
(linear scan) is blind to it because it only sees the last ldi before the call.

Method per function that calls set_flg_obj: build the intra-function instruction graph
(fallthrough + branch edges), and for each `call @r12` where r12==set_flg_obj, walk BACKWARD
over predecessors collecting every `ldi #k,r5` that reaches the call with no other write to
r5 on the way. If >=2 distinct k reach one call site, the pattern is branch-dependent; the C
for that function MUST encode the choice (a ternary/if). If the C has only plain constants
(no '?' and fewer distinct values than the disasm), flag it."""
import os, re, sys, bisect
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import frdis
SETFLG = 0x104596cc
SRC = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "cpu", "src")
hdr = re.compile(r'@k10d\s+([A-Za-z0-9_]+)\s+@\s+(0x[0-9a-f]+)')
VAs = sorted(frdis.VA2NAME)

def extent(va):
    i = bisect.bisect_right(VAs, va); return VAs[i] if i < len(VAs) else va + 0x800

def decode(va):
    """return list of (pc, w, sz, mnem) and index by pc."""
    end = extent(va); pc = va; insns = []; idx = {}
    while pc < end:
        w = frdis.r16(pc); txt, sz = frdis.dis1(pc)
        idx[pc] = len(insns); insns.append([pc, w, sz, txt]); pc += sz
    return insns, idx, end

def branch_target(pc, w):
    td = w & 0xff; disp = td - 0x100 if td & 0x80 else td
    return pc + 2 + disp * 2

def r5_const(txt):
    m = re.match(r'ldi:\d+ #(0x[0-9a-f]+),r5$', txt)
    return int(m.group(1), 16) if m else None

def writes_r5(txt):
    # any instruction that sets r5 (ldi, mov ..,r5, ld ..,r5, arithmetic ..,r5)
    return bool(re.search(r',r5$', txt)) or bool(re.search(r',r5\b', txt))

def reaching_r5(insns, idx, call_i):
    """backward BFS from the instruction BEFORE call_i (delay-slot aware handled by caller);
    collect distinct r5 constants that reach with no other r5 write first."""
    # build predecessor edges
    preds = {i: [] for i in range(len(insns))}
    for i,(pc,w,sz,txt) in enumerate(insns):
        hi4 = (w >> 12) & 0xf; opb = (w >> 8) & 0xf
        ni = idx.get(pc+sz)
        is_branch = hi4 in (0xE, 0xF)
        # fallthrough edge (unless unconditional branch op_b==0, or ret)
        uncond = is_branch and opb == 0
        if ni is not None and not uncond and not txt.startswith('ret'):
            preds[ni].append(i)
        if is_branch:
            t = branch_target(pc, w); ti = idx.get(t)
            if ti is not None and opb != 1:
                preds[ti].append(i)
    consts=set(); seen=set(); stack=[call_i]
    while stack:
        i = stack.pop()
        for p in preds.get(i, []):
            if p in seen: continue
            seen.add(p)
            txt = insns[p][3]; k = r5_const(txt)
            if k is not None: consts.add(k); continue  # r5 fixed here, stop
            if writes_r5(txt): continue  # r5 set by non-const (variable) — stop, can't track
            stack.append(p)
    return consts

def analyze(va):
    insns, idx, end = decode(va)
    r12 = None; flags=[]
    for i,(pc,w,sz,txt) in enumerate(insns):
        m = re.search(r'ldi:\d+ #0x[0-9a-f]+ <([^>]+)>,r12', txt)
        if m: r12 = m.group(1)
        elif re.search(r',r12\b', txt): r12 = None
        if re.match(r'call(:d)? @r12', txt) and r12 == 'set_flg_obj':
            # the r5 at the call: delay slot (next insn) may set it; include it as a predecessor
            consts = reaching_r5(insns, idx, i)
            # delay slot
            if ':d' in txt and i+1 < len(insns):
                k = r5_const(insns[i+1][3])
                if k is not None: consts = {k}  # delay slot overrides
            flags.append((pc, sorted(consts)))
    return flags

suspect=[]
for dp,_,fns in os.walk(SRC):
    for fn in sorted(fns):
        if not fn.endswith(".c") or fn == "set_flg_obj.c": continue
        p = os.path.join(dp, fn); t = open(p, encoding="latin-1").read()
        if "set_flg_obj(" not in t: continue
        m = hdr.search(t)
        if not m: continue
        va = int(m.group(2), 16)
        try: flags = analyze(va)
        except Exception as e:
            print(f"ERR {fn}: {e}"); continue
        # C constants
        ccs = [c for c in re.findall(r'set_flg_obj\s*\([^;]*?,\s*(0x[0-9a-f]+|\d+)\s*\)', t)]
        cset = set(int(x,0) for x in ccs)
        has_ternary = '?' in t
        for pc, consts in flags:
            if len(consts) >= 2 and not has_ternary:
                missing = set(consts) - cset
                if missing:
                    suspect.append((m.group(1), pc, consts, sorted(cset)))
                    break
print(f"=== MERGED-CASE SUSPECTS ({len(suspect)}) ===")
for name, pc, consts, cset in suspect:
    print(f"  {name:46} call@{pc:08x} disasm-r5={[hex(x) for x in consts]} C={[hex(x) for x in cset]}")
print(f"\n{len(suspect)} functions where a set_flg_obj call is reached by >=2 distinct r5 constants but the C has no ternary (likely merged/fabricated).")
