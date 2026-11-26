#!/usr/bin/env python3
"""pmap.py — packed-address resolver that ALWAYS reads the CURRENT firmware.map.

The recompiled candidate code is PACKED; every rebuild shifts the packed addresses. Hardcoding a
packed address from a previous build silently goes stale (a trace for it returns 0 hits even though
the function ran). This makes that mistake IMPOSSIBLE: resolve by function NAME against the live map
on every call, so a stale address can never be used.

Usage:
  pmap.py NAME [NAME...]                 -> prints "NAME  0x<packed>" for each (current map)
  pmap.py --ft LOG NAME [NAME...]        -> for each NAME, count + first-instr in an FRN_FT log,
                                            resolving the packed address fresh (never stale)
  pmap.py --addr 0x<packed>              -> reverse: which function owns this packed address (now)
  pmap.py --orig NAME                    -> the ORIGINAL (unpacked) VA from the @k10d header
Map default: cpu/out/firmware.map (override with env PMAP or --map PATH).
Exit 2 if a name is unknown (so a typo fails loudly instead of silently tracing nothing)."""
import sys, os, re, bisect, glob, subprocess

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

def load_map(path):
    syms = {}
    with open(path, encoding="latin-1") as f:
        for l in f:
            l = l.replace("\r", "")
            m = re.search(r'^\s*([0-9a-fA-F]{6,8})\(ABS\).*?_([A-Za-z]\w+)', l)
            if m:
                syms[m.group(2)] = int(m.group(1), 16)
    return syms

def orig_va(name):
    for f in glob.glob(os.path.join(ROOT, "cpu", "src", "*", "*.c")):
        h = open(f, encoding="latin-1").readline()
        m = re.search(r'@k10d\s+' + re.escape(name) + r'\s+@\s+(0x[0-9a-f]+)', h)
        if m:
            return int(m.group(1), 16)
    return None

def main(argv):
    mappath = os.environ.get("PMAP") or os.path.join(ROOT, "cpu", "out", "firmware.map")
    if "--map" in argv:
        i = argv.index("--map"); mappath = argv[i+1]; del argv[i:i+2]
    if not os.path.exists(mappath):
        sys.exit("pmap: no firmware.map at %s (build first)" % mappath)
    syms = load_map(mappath)

    if argv and argv[0] == "--addr":
        a = int(argv[1], 16)
        items = sorted(syms.items(), key=lambda kv: kv[1])
        addrs = [v for _, v in items]
        i = bisect.bisect_right(addrs, a) - 1
        print("%#x -> %s +%#x" % (a, items[i][0], a - items[i][1]) if i >= 0 else "%#x -> ?" % a)
        return
    if argv and argv[0] == "--orig":
        va = orig_va(argv[1]); print("%s orig=%s" % (argv[1], hex(va) if va else "??")); return
    if argv and argv[0] == "--ft":
        log = argv[1]; names = argv[2:]
        miss = [n for n in names if n not in syms]
        if miss: sys.exit("pmap: unknown symbol(s): %s" % ", ".join(miss))
        for n in names:
            a = syms[n]; pat = "PC=0x%x " % a
            cnt = 0; first = None
            with open(log, encoding="latin-1") as f:
                for line in f:
                    if pat in line:
                        cnt += 1
                        if first is None:
                            mm = re.match(r'(\d+) ', line); first = mm.group(1) if mm else "?"
            print("%-42s packed=%#010x  hits=%d  first=%s" % (n, a, cnt, first))
        return
    # plain: name -> packed
    rc = 0
    for n in argv:
        if n in syms: print("%-42s 0x%08x" % (n, syms[n]))
        else: print("%-42s UNKNOWN (not in current map)" % n); rc = 2
    sys.exit(rc)

if __name__ == "__main__":
    main(sys.argv[1:])
