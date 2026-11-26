#!/usr/bin/env python3
"""trace_diff.py — structural comparison of two FR execution traces, timing/packing-noise-immune.

The problem: candidate (PACKED, recompiled) and stock (original) differ in instruction counts, packed
addresses, loop repeat-counts and scheduling — raw PC-stream diffs are pure noise. But the SEMANTIC
invariant is the same in both: the ordered sequence of FUNCTION CALLS (by canonical name) with their
ARGUMENTS (r4..r7). This tool reduces each FRN_FT trace to that call+args sequence, canonicalises the
names (packed->name via firmware.map for the candidate; original-VA->name via @k10d headers for stock),
collapses consecutive repeats (loop/scheduler noise), aligns the two sequences with difflib, and prints
the FIRST STRUCTURAL DIVERGENCE: either a call one side makes and the other doesn't, or the SAME call
made by both with DIFFERENT arguments (the load-bearing decompiler-bug signature, e.g. a dropped/wrong
register arg).

Capture both traces with full FRN_FT (every PC + r4,r5,r8,r13 logged), e.g.:
  timeout 30 env FRN_FT=/path/cand.log  qemu ... -bios cand.BIN
  timeout 30 env FRN_FT=/path/stock.log qemu ... -bios FWDC162B.BIN
Then: trace_diff.py cand.log stock.log
Note: FRN_FT logs r4,r5 (param1,param2) and r8,r13 (caller's object+offset) — not r6,r7. r4/r5 cover
most arg divergences; r8/r13 disambiguate which object a method ran on.
"""
import sys, os, re, glob, bisect, difflib

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

def packed_syms():
    syms = {}
    p = os.path.join(ROOT, "cpu", "out", "firmware.map")
    for l in open(p, encoding="latin-1"):
        l = l.replace("\r", "")
        m = re.search(r'^\s*([0-9a-fA-F]{6,8})\(ABS\).*?_([A-Za-z]\w+)', l)
        if m: syms[int(m.group(1), 16)] = m.group(2)
    return syms

def orig_syms():
    syms = {}
    for f in glob.glob(os.path.join(ROOT, "cpu", "src", "*", "*.c")):
        h = open(f, encoding="latin-1").readline()
        m = re.search(r'@k10d\s+(\w+)\s+@\s+(0x[0-9a-f]+)', h)
        if m: syms[int(m.group(2), 16)] = m.group(1)
    return syms

def param_counts():
    """name -> declared parameter count, parsed from each function's C signature. Used to decide
    whether r5 (register for param2) is a real ARGUMENT (>=2 params) or a leftover register (noise)."""
    pc = {}
    for f in glob.glob(os.path.join(ROOT, "cpu", "src", "*", "*.c")):
        t = open(f, encoding="latin-1").read()
        m = re.search(r'@k10d\s+(\w+)\s+@', t[:200])
        if not m: continue
        name = m.group(1)
        # find the function definition: <ret> name( ... ) {  (allowing a newline before {)
        d = re.search(r'\b' + re.escape(name) + r'\s*\(([^;{]*?)\)\s*\n*\{', t)
        if not d: continue
        args = d.group(1).strip()
        pc[name] = 0 if args in ('', 'void') else args.count(',') + 1
    return pc

LINE = re.compile(r'PC=0x([0-9a-f]+) r4=([0-9a-f]+) r5=([0-9a-f]+)')

def call_seq(logpath, name_of_addr):
    """Reduce an FRN_FT log to the ordered sequence of (name, r4, r5) at FUNCTION ENTRIES
    (a PC that is a known function start). Consecutive identical (name) events are collapsed to
    one, keeping the FIRST occurrence's args (loop/scheduler noise removed)."""
    out = []
    last = None
    for line in open(logpath, encoding="latin-1"):
        m = LINE.search(line)
        if not m: continue
        pc = int(m.group(1), 16)
        nm = name_of_addr(pc)
        if nm is None: continue           # mid-function PC, not an entry
        if nm == last: continue           # collapse repeats (same fn back-to-back)
        last = nm
        out.append((nm, int(m.group(2), 16), int(m.group(3), 16)))
    return out

def mk_lookup(*maps):
    """EXACT-match (= function entry) lookup across one or more {addr:name} maps, tried in order.
    The CANDIDATE runs original kernel/crt0 code (original addresses) AND packed recompiled app code
    (packed addresses), so it needs BOTH maps; STOCK needs only the original map. Either way a PC maps
    to the same canonical function NAME, which is what aligns the two traces."""
    def f(pc):
        for m in maps:
            n = m.get(pc)
            if n is not None: return n
        return None
    return f

def main(cand_log, stock_log):
    ps = packed_syms(); os_ = orig_syms(); pcnt = param_counts()
    cand = call_seq(cand_log, mk_lookup(ps, os_))   # packed app + original kernel/crt0
    stock = call_seq(stock_log, mk_lookup(os_))
    print("candidate calls (collapsed): %d   stock: %d" % (len(cand), len(stock)))
    cn = [c[0] for c in cand]; sn = [s[0] for s in stock]
    sm = difflib.SequenceMatcher(a=cn, b=sn, autojunk=False)
    # Report EVERY divergence through the trace (difflib re-syncs across matching blocks), so a single
    # early structural hiccup doesn't hide the load-bearing one. Two kinds:
    #  ARG   — same fn aligned in both, different param2 (r5): the dropped/wrong-register-arg signature.
    #  STRUCT— a run of calls one side makes that the other doesn't (extra/missing work / wrong branch).
    MAXARG = int(os.environ.get("TD_MAXARG", 40)); MAXSTRUCT = int(os.environ.get("TD_MAXSTRUCT", 25))
    na = ns = 0
    for tag, i1, i2, j1, j2 in sm.get_opcodes():
        if tag == 'equal':
            for k in range(i2 - i1):
                ci = cand[i1 + k]; sj = stock[j1 + k]
                # Only a real ARGUMENT divergence: the fn declares >=2 params (so r5 IS param2),
                # r5 differs, and it isn't a run-to-run pointer (kernel scratch 0x6a.., RAM >=0x80000000).
                if ci[2] == sj[2] or na >= MAXARG: continue
                if pcnt.get(ci[0], 0) < 2: continue          # r5 is a leftover register, not an arg
                if ci[2] >= 0x6a000000 and sj[2] >= 0x6a000000: continue  # both pointers -> layout noise
                na += 1
                print("ARG  #%2d  %-38s cand param2=%#010x  stock param2=%#010x   (param1 %#x/%#x)"
                      % (na, ci[0], ci[2], sj[2], ci[1], sj[1]))
            continue
        if ns < MAXSTRUCT:
            ns += 1
            cs = ' '.join("%s" % cand[k][0] for k in range(i1, min(i1 + 5, i2))) or '(none)'
            ss = ' '.join("%s" % stock[k][0] for k in range(j1, min(j1 + 5, j2))) or '(none)'
            ctx = cand[i1-1][0] if i1 > 0 else '(start)'
            print("STRUCT#%2d after '%s':  CAND[+%d]={%s}  STOCK[+%d]={%s}"
                  % (ns, ctx, i2-i1, cs, j2-j1, ss))
    print("\ntotals: %d arg-divergences, %d structural blocks (caps %d/%d; set TD_MAXARG/TD_MAXSTRUCT)"
          % (na, ns, MAXARG, MAXSTRUCT))

if __name__ == "__main__":
    if len(sys.argv) != 3:
        sys.exit("usage: trace_diff.py CAND_FT.log STOCK_FT.log")
    main(sys.argv[1], sys.argv[2])
