#!/usr/bin/env python3
"""gen_boot_priority.py -- order the cleanup sweep by the stock boot->menu path.

The sweep over all ~12.9k functions is weeks long; most of that is code the firmware never
runs on the way to the menu. This emits a PRIORITY ORDER so the sweep cleans + checks the
functions the STOCK firmware actually executes during boot FIRST, hottest (most-executed)
first -- so the DECOMPILE_FINDINGS backlog is immediately useful for making the recompile
boot faithfully, instead of waiting for alphabetical coverage.

Source of truth: the stock boot trace in the catalog (trace_runs.label 'boot15-*'), via
trace_cov(run_id, va, hits). Each covered function va is matched to the cpu/src/*/*.c file
whose `@k10d <name> @ 0x<va>` header carries that va. Writes one absolute .c path per line,
hottest first, to cleanup/boot_priority.txt (gitignored).

Usage: gen_boot_priority.py [--run-label boot15-current] [--out cleanup/boot_priority.txt]
"""
import os, re, sys, glob, sqlite3, argparse

ROOT = "/home/memorai/k10d-firmware-c"
DB   = "/home/memorai/k10d-re/harness2/catalog.sqlite"
HDR  = re.compile(r'@k10d\s+\S+\s+@\s+0x([0-9a-fA-F]+)')

def va_to_file():
    """Map every header VA -> its cpu/src .c file."""
    idx = {}
    for f in glob.glob(os.path.join(ROOT, "cpu/src", "*", "*.c")):
        try:
            m = HDR.search(open(f, errors="ignore").read(2048))
        except OSError:
            continue
        if m:
            idx.setdefault(int(m.group(1), 16), f)
    return idx

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--run-label", default="boot15-current",
                    help="trace_runs.label of the stock boot trace (default boot15-current)")
    ap.add_argument("--out", default=os.path.join(ROOT, "cleanup/boot_priority.txt"))
    a = ap.parse_args()

    con = sqlite3.connect(f"file:{DB}?mode=ro", uri=True)
    row = con.execute("select id from trace_runs where label=?", (a.run_label,)).fetchone()
    if not row:
        sys.exit(f"no trace_runs row with label {a.run_label!r}; have: "
                 + ", ".join(r[0] for r in con.execute("select label from trace_runs")))
    run_id = row[0]
    covered = con.execute(
        "select c.va, c.hits from trace_cov c where c.run_id=? order by c.hits desc", (run_id,)
    ).fetchall()

    idx = va_to_file()
    seen, lines, mapped = set(), [], 0
    for va, hits in covered:
        f = idx.get(va)
        if f and f not in seen:
            seen.add(f); lines.append(f); mapped += 1

    os.makedirs(os.path.dirname(a.out), exist_ok=True)
    with open(a.out, "w") as fh:
        fh.write("\n".join(lines) + ("\n" if lines else ""))

    total_cov = len(covered)
    total_src = len(idx)
    print(f"boot trace {a.run_label!r} (run {run_id}): {total_cov} functions covered")
    print(f"  mapped to cpu/src files: {mapped}  ({total_cov - mapped} covered fns have no cpu/src file)")
    print(f"  priority list ({mapped} of {total_src} src files, hottest first) -> {a.out}")
    print(f"  remaining tree (processed after the priority list): {total_src - mapped}")

if __name__ == "__main__":
    main()
