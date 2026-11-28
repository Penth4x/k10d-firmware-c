#!/usr/bin/env python3
"""cleanup_status.py -- live status of function_cleanup.py runs.

Reads the generated cleanup/ reports + git working tree to show progress, findings, and what's
been applied. Run anytime (optionally `watch -n5 python3 scripts/cleanup_status.py`).

  cleanup_status.py                 # summary
  cleanup_status.py --findings      # also list every function with a bug-class finding
  cleanup_status.py --unit UNIT     # denominator = functions in cpu/src/UNIT (shows % done)
"""
import os, re, sys, glob, subprocess, argparse

ROOT = "/home/memorai/k10d-firmware-c"
CLEAN = os.path.join(ROOT, "cleanup")

def running():
    try:
        out = subprocess.run(["ps", "-eo", "pid,etimes,args"], capture_output=True, text=True).stdout
    except OSError:
        return []
    return [l.split(None, 2) for l in out.splitlines() if "function_cleanup.py" in l and "grep" not in l]

def git_modified_c():
    try:
        out = subprocess.run(["git", "-C", ROOT, "status", "--porcelain", "--", "cpu/src"],
                             capture_output=True, text=True).stdout
    except OSError:
        return []
    return [l[3:] for l in out.splitlines() if l[1:2] in ("M", "A") or l[0:1] in ("M", "A")]

def parse_report(p):
    txt = open(p, errors="ignore").read()
    fsec = re.search(r'## FINDINGS.*?\n(.*?)\n## ', txt, re.S)
    findings = fsec.group(1).strip() if fsec else ""
    has = bool(findings) and findings.strip().lower() not in ("- none", "none", "")
    applied = "APPLIED" if "CLEANED (behaviour-preserving" in txt else ""
    return has, findings

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--findings", action="store_true")
    ap.add_argument("--unit")
    a = ap.parse_args()

    procs = running()
    reports = sorted(glob.glob(os.path.join(CLEAN, "*.md")), key=os.path.getmtime)
    modified = git_modified_c()

    denom = ""
    if a.unit:
        total = len(glob.glob(os.path.join(ROOT, "cpu/src", a.unit, "*.c")))
        denom = f" / {total} in {a.unit} ({100*len(reports)//max(total,1)}%)"

    print("=== function_cleanup status ===")
    if procs:
        for pid, et, cmd in procs:
            print(f"  RUNNING  pid {pid}  {int(et)//60}m{int(et)%60:02d}s  {cmd[:80]}")
    else:
        print("  not running")
    print(f"  reports written : {len(reports)}{denom}")
    print(f"  applied (uncommitted .c): {len(modified)}")

    with_find = [(p, f) for p in reports for (h, f) in [parse_report(p)] if h]
    print(f"  functions with bug-class findings: {len(with_find)}")

    last = reports[-5:]
    if last:
        print("  last processed:")
        for p in last:
            h, _ = parse_report(p)
            print(f"    {'[FIND]' if h else '[ ok ]'} {os.path.basename(p)[:-3]}")

    if a.findings and with_find:
        print("\n=== FINDINGS ===")
        for p, f in with_find:
            print(f"\n# {os.path.basename(p)[:-3]}")
            print(f)

if __name__ == "__main__":
    main()
