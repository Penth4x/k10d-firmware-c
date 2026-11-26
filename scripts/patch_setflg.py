#!/usr/bin/env python3
"""patch_setflg.py [--apply] — fix set_flg_obj callers (B-3 pattern-drop). set_flg_obj
(0x104596cc) forwards the incoming eventflag PATTERN in r5; the decompiler typed it 1-arg so
every caller drops the pattern -> set_flg(id, 0) = no-op -> waiters never wake (THE menu
deadlock). Recover each caller's r5 (the pattern, usually a small constant set just before the
call) via the validated symbolic tracer, then rewrite set_flg_obj(X) -> set_flg_obj(X, pattern).

Depends on set_flg_obj's signature already being (uint32_t*, uint32_t param_2) + funcs.h."""
import os, re, sys, bisect
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import frdis, resolve_rfs
SETFLG = 0x104596cc
resolve_rfs.RFS = SETFLG  # retarget the tracer's call-detection
APPLY = '--apply' in sys.argv
SRC = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "cpu", "src")
hdr = re.compile(r'@k10d\s+([A-Za-z0-9_]+)\s+@\s+(0x[0-9a-f]+)')
CALL_RE = re.compile(r'set_flg_obj\s*\(\s*([^;]*?)\s*\)\s*;')
VAs = sorted(frdis.VA2NAME)
def extent(va): i = bisect.bisect_right(VAs, va); return VAs[i] if i < len(VAs) else va + 0x800

def patt_to_c(sym):
    """turn the symbolic r5 into a C expression; only accept clearly-safe forms."""
    if sym is None: return None
    if re.fullmatch(r'0x[0-9a-f]+', sym): return sym          # constant
    if sym == 'p2': return 'param_2'
    if sym == 'p3': return 'param_3'
    if sym == 'p4': return 'param_4'
    return None  # anything computed/stack -> MANUAL

callers = []
for dp, _, fns in os.walk(SRC):
    for fn in fns:
        if not fn.endswith(".c") or fn == "set_flg_obj.c": continue
        p = os.path.join(dp, fn); t = open(p, encoding="latin-1").read()
        if "set_flg_obj(" not in t: continue
        m = hdr.search(t)
        if m: callers.append((m.group(1), int(m.group(2), 16), p))
callers.sort(key=lambda x: x[1])

done = 0; manual = []
for name, va, p in callers:
    t = open(p, encoding="latin-1").read()
    if re.search(r'set_flg_obj\([^;]*,[^;]*\)', t): continue   # already 2-arg
    r = resolve_rfs.trace(va)
    r5 = r[1] if r else None
    pat = patt_to_c(r5)
    calls = CALL_RE.findall(t)
    if len(calls) != 1 or ',' in calls[0] or pat is None:
        manual.append((name, f"r5={r5} calls={len(calls)}")); continue
    arg = calls[0].strip()
    new = f"set_flg_obj({arg}, {pat});"
    t2 = CALL_RE.sub(new, t, count=1)
    if t2 == t: manual.append((name, "noop-sub")); continue
    print(f"PATCH {name:44} set_flg_obj({arg}) -> ...,{pat}")
    done += 1
    if APPLY: open(p, "w", encoding="latin-1").write(t2)
print(f"\n{done} patched, {len(manual)} MANUAL. {'(APPLIED)' if APPLY else '(dry-run)'}")
for n, why in manual[:60]: print(f"  MANUAL {n:44} {why}")
