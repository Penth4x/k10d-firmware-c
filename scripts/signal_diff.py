#!/usr/bin/env python3
"""signal_diff.py <cand_int40.log> <stock_int40.log> — find the FIRST divergence in the boot
signal cascade. Extracts the ordered sequence of kernel SIGNAL events (set_flg / sig_sem /
snd_mbx) from each int40 trace (ignoring timer-IRQ act_tsk noise and blocking receives), aligns
them, and prints the first point where candidate != stock — which is the next load-bearing
decompiler bug to chase. The pattern (r5) on set_flg is the usual culprit (B-15 merged-case).

Usage: produce the traces with scripts/syscall_trace.sh <bios> all <wall>, then diff."""
import re, sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import frdis
SND = 0x10010c18; SETF = 0x10010984
SIG = [a for a, n in frdis.VA2NAME.items() if n == 'kernel_sig_sem'][0]
LABEL = {SND: 'SND_MBX', SETF: 'SET_FLG', SIG: 'SIG_SEM'}

def events(p):
    out = []
    for l in open(p, encoding='latin-1'):
        m = re.search(r'r12=([0-9a-f]+) r4=([0-9a-f]+) r5=([0-9a-f]+)', l)
        if not m: continue
        svc = int(m.group(1), 16)
        if svc in LABEL:
            lab = LABEL[svc]; r4 = int(m.group(2), 16); r5 = int(m.group(3), 16)
            # For SND_MBX / SIG_SEM, r5 is a message-buffer POINTER (differs run-to-run);
            # compare only the object id. For SET_FLG, r5 is the semantic pattern — keep it.
            out.append((lab, r4, r5 if lab == 'SET_FLG' else None))
    return out

def main(candp, stockp):
    c = events(candp); s = events(stockp)
    print(f"cand signals={len(c)}  stock signals={len(s)}")
    i = 0
    while i < len(c) and i < len(s) and c[i] == s[i]:
        i += 1
    if i == len(c) == len(s):
        print("IDENTICAL signal cascades — no divergence.")
        return
    print(f"\nfirst divergence at signal #{i}:")
    lo = max(0, i-3)
    for j in range(lo, i):
        mv = f"{c[j][2]:#x}" if c[j][2] is not None else "(ptr)"; print(f"  [{j}] MATCH  {c[j][0]:8} id={c[j][1]:#x} pattern/val={mv}")
    def show(tag, seq):
        print(f"  {tag}:")
        for j in range(i, min(i+5, len(seq))):
            e = seq[j]
            note = ''
            if e[0] == 'SET_FLG':
                note = f"   <- set_flg(flag {e[1]:#x}, pattern {e[2]:#x})"
            v = f"{e[2]:#x}" if e[2] is not None else "(ptr)"; print(f"    [{j}] {e[0]:8} id={e[1]:#x} val={v}{note}")
    show('CAND ', c)
    show('STOCK', s)
    # if the divergence is a SET_FLG with same id but different pattern, name it the B-15 culprit
    if i < len(c) and i < len(s) and c[i][0] == s[i][0] == 'SET_FLG' and c[i][1] == s[i][1] and c[i][2] != s[i][2]:
        print(f"\n>>> B-15 signature: set_flg(flag {c[i][1]:#x}) pattern cand={c[i][2]:#x} vs stock={s[i][2]:#x}")
        print("    Find the function raising flag %#x and reconstruct its event->pattern map." % c[i][1])

if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2])
