#!/usr/bin/env python3
"""detect_vtable_dropped_arg.py — find the B-3v class (vtable-dispatch helper drops a forwarded arg).

THE BUG (Andrew: "the vtables suffer from the same dropped argument bug ... this might not be the
only vtable slot with this problem"): a tiny helper loads a member pointer and dispatches through a
runtime vtable — `call @rN` — but between its entry and that dispatch it NEVER writes r5/r6/r7. So
whatever argument register the CALLER set up flows straight through to the vtable target. The Ghidra
decompile gave the helper a 1-parameter C signature (just the object), so fcc is free to clobber r5
before the call and the forwarded argument arrives as garbage. invoke_virtual_slot_3_on_member_10466604
was the first instance (menu-blocking: dropped the mode EVENT in r5).

STRUCTURAL, model-independent test (reads only the original FWDC162B.BIN, no decompiler judgement):
  (a) HELPER forwards a register: disassembling entry..first `call @rN`, the register (r5/r6/r7) is
      never a write destination  ->  it passes through to the dispatch target.
  (b) a CALLER means it: some site that calls the helper writes that same register shortly before the
      call. A caller bothering to set r5 for a "1-arg" helper is the proof the arg is real, not noise.
A helper meeting (a)+(b) for some register is a confirmed dropper; report it with the caller sites
(and the immediate, when the caller used ldi) so the fix (add the param + forward it) is mechanical.

Usage: detect_vtable_dropped_arg.py [--all] [NAME...]
  default         scan every single-C-parameter invoke/call_virtual_slot_* helper, report confirmed.
  --all           also list helpers that forward a register but have NO caller that sets it (suspect,
                  unproven — the register may be live from further up, worth a human look).
  NAME...         restrict to these helper function names.
"""
import sys, os, re, glob, struct
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import frdis  # FW image, dis1, nm, VA2NAME, BASE

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FW, BASE = frdis.FW, frdis.BASE

def helper_files():
    fs = []
    for f in glob.glob(os.path.join(ROOT, "cpu", "src", "*", "invoke_virtual_slot_*.c")) + \
             glob.glob(os.path.join(ROOT, "cpu", "src", "*", "call_virtual_slot_*.c")):
        t = open(f, encoding="latin-1").read()
        hm = re.search(r'@k10d\s+(\w+)\s+@\s+(0x[0-9a-f]+)', t[:300])
        if not hm:
            continue
        name, va = hm.group(1), int(hm.group(2), 16)
        # declared C parameter count
        d = re.search(r'\b' + re.escape(name) + r'\s*\(([^;{]*?)\)\s*\n*\{', t)
        args = d.group(1).strip() if d else '?'
        nparams = 0 if args in ('', 'void') else (args.count(',') + 1 if args != '?' else -1)
        fs.append((name, va, nparams, f))
    return fs

DEST = re.compile(r',r(\d+)$')
DEST1 = re.compile(r'^(?:extsh|extuh|extsb|extub|lsl|lsr|asr)\s+r(\d+)')

def dest_reg(mn):
    """GPR written by this instruction, or None. cmp/cmp2 write only flags -> excluded."""
    if mn.startswith('cmp'):
        return None
    m = DEST.search(mn)
    if m:
        return int(m.group(1))
    m = DEST1.match(mn)
    if m:
        return int(m.group(1))
    return None

def forwarded_regs(va, limit=48):
    """Walk entry..first `call @rN` (the vtable dispatch). Return the subset of {5,6,7} never written
    on that path (they flow through to the target). Stops at ret/unconditional jmp too. Conservative:
    a conditional branch is followed straight-through (these helpers are a null-check + call); if we
    hit a second call@ or run off, we stop. Also honours one delay-slot after call:d/jmp:d."""
    written = set()
    pc = va
    saw_dispatch = False
    for _ in range(limit):
        mn, ln = frdis.dis1(pc)
        if mn.startswith('call @') or mn.startswith('call:d @'):
            saw_dispatch = True
            if mn.startswith('call:d'):           # delay-slot runs before the transfer
                dmn, _ = frdis.dis1(pc + ln)
                dd = dest_reg(dmn)
                if dd is not None:
                    written.add(dd)
            break
        if mn.startswith(('ret', 'jmp @', 'jmp:d @')):
            break
        d = dest_reg(mn)
        if d is not None:
            written.add(d)
        pc += ln
    fwd = [r for r in (5, 6, 7) if r not in written]
    return fwd, saw_dispatch

# ---- caller scan: index every `ldi:32 #imm,rN` in the image by imm (candidate function-pointer load)
def build_ldi32_index():
    idx = {}
    n = len(FW)
    for o in range(0, n - 5, 2):
        w = (FW[o] << 8) | FW[o + 1]
        if (w & 0xFFF0) == 0x9F80:                 # ldi:32 #imm32,rN
            imm = struct.unpack(">I", FW[o + 2:o + 6])[0]
            ri = w & 0xF
            idx.setdefault(imm, []).append((BASE + o, ri))
    return idx

def build_direct_call_index():
    """Index PC-relative direct calls (FR `call`/`call:d` label, 11-bit signed halfword disp) by
    their target VA. Covers the common intra-module case (ui_task6_body -> helper is only 0x15c away)
    that the ldi:32 path never sees."""
    idx = {}
    n = len(FW)
    for o in range(0, n - 1, 2):
        w = (FW[o] << 8) | FW[o + 1]
        top = w >> 11
        if top == 0x1A or top == 0x1B:            # call / call:d  <label>
            d = w & 0x7FF
            if d & 0x400:
                d -= 0x800
            pc = BASE + o
            tgt = pc + 2 + d * 2
            idx.setdefault(tgt, []).append(pc)
    return idx

def caller_sets_reg(call_pc, regs, back=10):
    """Does the caller write any of `regs` in the `back` instructions before call_pc? Return
    {reg: imm_or_None}. We re-walk forward from an estimate because FR is variable length; simplest
    robust approach: disassemble a window [call_pc-2*back, call_pc) forward, tracking last write."""
    start = call_pc - 2 * back
    last = {}
    pc = start
    while pc < call_pc:
        mn, ln = frdis.dis1(pc)
        d = dest_reg(mn)
        if d in regs:
            im = re.search(r'#0x([0-9a-f]+)', mn) or re.search(r'#(-?\d+)', mn)
            last[d] = im.group(0) if im else '(reg)'
        pc += ln
    return last

def find_call_to(helper_va, ldi_idx, direct_idx):
    """Call sites of helper_va: (1) direct PC-relative `call <helper>`; (2) `ldi:32 #helper,rN` then
    `call @rN` within a few instrs. Returns list of call-instruction PCs."""
    sites = list(direct_idx.get(helper_va, []))
    for load_pc, ri in ldi_idx.get(helper_va, []):
        pc = load_pc + 6
        for _ in range(6):
            mn, ln = frdis.dis1(pc)
            if mn == f'call @r{ri}' or mn == f'call:d @r{ri}':
                sites.append(pc)
                break
            # register reused as a dest kills the chain
            if dest_reg(mn) == ri or mn.startswith(('ret', 'jmp')):
                break
            pc += ln
    return sites

def main(argv):
    show_all = '--all' in argv
    argv = [a for a in argv if a != '--all']
    want = set(argv)
    helpers = helper_files()
    if want:
        helpers = [h for h in helpers if h[0] in want]
    singles = [h for h in helpers if h[2] == 1]
    print(f"vtable helpers total={len(helpers)}  single-C-param candidates={len(singles)}")
    print("building call indices ...", flush=True)
    ldi_idx = build_ldi32_index()
    direct_idx = build_direct_call_index()
    print(f"  {len(ldi_idx)} ldi:32 targets, {len(direct_idx)} direct-call targets\n")

    confirmed, suspect = [], []
    for name, va, npar, f in sorted(singles, key=lambda x: x[1]):
        fwd, dispatch = forwarded_regs(va)
        if not dispatch or not fwd:
            continue
        sites = find_call_to(va, ldi_idx, direct_idx)
        hits = {}
        for cs in sites:
            sets = caller_sets_reg(cs, set(fwd))
            if sets:
                hits[cs] = sets
        rec = (name, va, fwd, sites, hits, f)
        (confirmed if hits else suspect).append(rec)

    print("=" * 96)
    print(f"CONFIRMED B-3v droppers (forwards r{{5,6,7}} AND a caller sets it): {len(confirmed)}")
    print("=" * 96)
    for name, va, fwd, sites, hits, f in confirmed:
        print(f"\n{name}  @ {va:#010x}   forwards r{fwd}   callers={len(sites)}")
        print(f"   {os.path.relpath(f, ROOT)}")
        for cs, sets in hits.items():
            s = ', '.join(f"r{r}={v}" for r, v in sets.items())
            print(f"   caller call@{cs:#010x}  sets {s}")
    if show_all:
        print("\n" + "=" * 96)
        print(f"SUSPECT (forwards a reg, no caller sets it in-window — reg may be live from upstream): {len(suspect)}")
        print("=" * 96)
        for name, va, fwd, sites, hits, f in suspect:
            print(f"{name:52s} @ {va:#010x}  forwards r{fwd}  callers={len(sites)}")
    print(f"\ntotal: {len(confirmed)} confirmed, {len(suspect)} suspect")

if __name__ == "__main__":
    main(sys.argv[1:])
