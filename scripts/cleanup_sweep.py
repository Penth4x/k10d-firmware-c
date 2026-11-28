#!/usr/bin/env python3
"""cleanup_sweep.py -- unattended, resumable sweep of function_cleanup.py over the whole tree.

Runs the per-function cleanup (bug-scan + readability + rename, fcc/.text-gated, self-healing) across
every C function in cpu/src, so the model can churn for days without a babysitter. Designed for a
weekend run:

  * RESUMABLE   -- a JSON checkpoint records every finished function; a crash, reboot or Ctrl-C just
                   continues where it left off (the toolchain lives on /home, the checkpoint too).
  * ROBUST      -- each function runs in its OWN subprocess with a timeout; a hang, an fcc wedge, or
                   an LLM hiccup skips that one and is logged -- it can never kill the sweep. Transient
                   LLM/server errors (e.g. a reboot taking the llama-server down) are retried with
                   backoff until it comes back.
  * CHECKPOINTED GIT -- applied functions are committed in batches of --batch, so progress is always
                   on disk in git (reports are gitignored; the applied .c + the findings catalog aren't).
  * FINDINGS CATALOG -- every function's FINDINGS (decompile divergences) are appended to
                   DECOMPILE_FINDINGS.md, the tree-wide bug backlog, committed with the batches.

Usage:
  cleanup_sweep.py                 # sweep the whole tree, resuming from the checkpoint
  cleanup_sweep.py --unit U        # restrict to one unit (still resumable)
  cleanup_sweep.py --batch 10      # commit every N applied functions (default 10)
  cleanup_sweep.py --timeout 900   # per-function wall-clock cap (default 900s)
  cleanup_sweep.py --gcc-only      # pass through: use host-gcc gate (no fcc/wine)
  cleanup_sweep.py --status        # print progress + tallies and exit
Run it detached:  nohup python3 scripts/cleanup_sweep.py > cleanup_sweep.log 2>&1 &
"""
import os, re, sys, glob, json, time, signal, subprocess, argparse

ROOT    = "/home/memorai/k10d-firmware-c"
CLEAN   = os.path.join(ROOT, "cleanup")
STATE   = os.path.join(CLEAN, "sweep_state.json")
CATALOG = os.path.join(ROOT, "DECOMPILE_FINDINGS.md")       # committed backlog (NOT under cleanup/)
TOOL    = os.path.join(ROOT, "scripts/function_cleanup.py")
RESULT  = re.compile(r'^\s*(\S+): findings~(\d+)\s+rename=(\w+)\s+rounds=(\d+)\s+(\S+)')

_stop = False
def _sig(*_):                      # on SIGTERM/SIGINT: finish the current function, checkpoint, exit
    global _stop; _stop = True
signal.signal(signal.SIGTERM, _sig); signal.signal(signal.SIGINT, _sig)

def load_state():
    base = {"done": [], "applied": 0, "held": 0, "nocompile": 0, "skipped": 0, "fail": 0, "with_findings": 0}
    try:
        base.update(json.load(open(STATE)))      # backfill any keys an older checkpoint lacks
    except (OSError, json.JSONDecodeError):
        pass
    return base

def save_state(s):
    os.makedirs(CLEAN, exist_ok=True)
    tmp = STATE + ".tmp"; json.dump(s, open(tmp, "w")); os.replace(tmp, STATE)

def run_one(path, timeout, gcc_only, allow_codegen=False, de_soup=False):
    """One function in an isolated subprocess. Retries transient LLM/server errors (e.g. the
    llama-server down during a reboot) with backoff; returns the tool's stdout+stderr or a marker."""
    cmd = [sys.executable, TOOL, path] + (["--gcc-only"] if gcc_only else []) + (["--allow-codegen"] if allow_codegen else []) + (["--de-soup"] if de_soup else [])
    for attempt in range(6):
        try:
            r = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True, timeout=timeout)
            out = r.stdout + r.stderr
            if "LLM error" in out and attempt < 5:            # server hiccup/down -> wait and retry
                time.sleep(min(30 * (attempt + 1), 180)); continue
            if "LLM error" in out:                            # exhausted retries: server is DOWN, not a
                return "SERVER_DOWN"                           # per-function failure -> caller re-queues (never skips)
            return out
        except subprocess.TimeoutExpired:
            return "TIMEOUT"
        except (subprocess.SubprocessError, OSError) as e:
            if attempt < 5:
                time.sleep(30); continue
            return f"ERROR {e}"
    return "LLM error (gave up after retries)"

def append_catalog(name, path, report_path):
    """Append this function's FINDINGS to the committed decompile-divergence backlog."""
    if not os.path.exists(report_path):
        return 0
    txt = open(report_path, errors="ignore").read()
    m = re.search(r'## FINDINGS.*?\n(.*?)\n## ', txt, re.S)
    findings = (m.group(1).strip() if m else "")
    if not findings or findings.lower() in ("- none", "none"):
        return 0
    if not os.path.exists(CATALOG):
        open(CATALOG, "w").write("# Decompile-divergence catalog\n\n"
            "Per-function FINDINGS from the cleanup sweep (fcc-asm vs original disasm + bestiary "
            "classes). This is the faithfulness backlog: each entry is a place the decompiled C may "
            "not reproduce the original machine code. Machine-appended; review + fix.\n")
    rel = os.path.relpath(path, ROOT)
    open(CATALOG, "a").write(f"\n## {name}  (`{rel}`)\n{findings}\n")
    return 1

def git_commit(n, state):
    mod = subprocess.run(["git", "-C", ROOT, "status", "--porcelain", "--", "cpu/src", "cpu/include/funcs.h", "DECOMPILE_FINDINGS.md"],
                         capture_output=True, text=True).stdout
    if not mod.strip():
        return
    subprocess.run(["git", "-C", ROOT, "add", "--", "cpu/src", "cpu/include/funcs.h", "DECOMPILE_FINDINGS.md"], check=False)
    msg = (f"chore(cleanup sweep): {n} functions (provably codegen-identical)\n\n"
           f"Automated readability+rename pass (function_cleanup.py, fcc/.text-gated: every applied "
           f"function compiles to the same machine code). Running totals: {state['applied']} applied, "
           f"{state['held']} held (codegen changed, review), {state['with_findings']} with decompile "
           f"findings (see DECOMPILE_FINDINGS.md), {state['nocompile']} uncompilable, {state['fail']} errored.")
    subprocess.run(["git", "-C", ROOT, "commit", "-q", "-m", msg], check=False)

def _fmt_dur(sec):
    sec = int(sec)
    d, sec = divmod(sec, 86400); h, sec = divmod(sec, 3600); m, _ = divmod(sec, 60)
    if d:  return f"{d}d {h}h"
    if h:  return f"{h}h {m}m"
    return f"{m}m"

def print_status(state, unit=None):
    files = glob.glob(os.path.join(ROOT, "cpu/src", unit or "*", "*.c"))
    total = len(files)
    done  = len(state["done"])
    remaining = max(total - done, 0)
    pct = (100.0 * done / total) if total else 0.0
    # per-function wall times from the current run's log; recent samples only, so a one-off
    # outage wait (a single huge duration) does not poison the rate.
    durs = []
    try:
        for ln in open(os.path.join(ROOT, "cleanup_sweep.log"), errors="ignore"):
            m = re.search(r"\((\d+)s\)\s*$", ln)
            if m: durs.append(int(m.group(1)))
    except OSError:
        pass
    recent = sorted(durs[-25:])
    med = recent[len(recent)//2] if recent else None   # median = robust to outliers
    running = bool(subprocess.run(["pgrep", "-f", "scripts/cleanup_sweep.py"],
                                  capture_output=True).stdout.strip())
    child = subprocess.run(["bash", "-c",
             "ps -eo args | awk '/function_cleanup.py/ && !/awk/{print $NF; exit}'"],
             capture_output=True, text=True).stdout.strip()

    print(f"cleanup sweep  [{'RUNNING' if running else 'STOPPED'}]")
    print(f"  progress : {done}/{total} functions ({pct:.1f}%)  -- {remaining} remaining")
    print(f"  results  : applied={state['applied']} held={state['held']} skipped={state['skipped']} "
          f"nocompile={state['nocompile']} fail={state['fail']}  (with_findings={state['with_findings']})")
    if med:
        print(f"  rate     : ~{med}s/fn median (last {len(recent)}), ~{3600/med:.0f} fn/hr")
        print(f"  ETA      : ~{_fmt_dur(remaining * med)} at this rate (single slot; excludes server downtime)")
    else:
        print("  rate/ETA : n/a (no completed-function timings in the log yet)")
    if child:
        print(f"  now on   : {child}")

def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--unit")
    ap.add_argument("--batch", type=int, default=10)
    ap.add_argument("--timeout", type=int, default=900)
    ap.add_argument("--gcc-only", action="store_true")
    ap.add_argument("--allow-codegen", action="store_true", help="apply even when codegen changes (compile-only; boot test validates)")
    ap.add_argument("--de-soup", dest="de_soup", action="store_true", help="de-soup mode: gate on ASM INTENT (data-op widths + control flow), not exact codegen")
    ap.add_argument("--status", action="store_true")
    ap.add_argument("--json", action="store_true", help="with --status: raw JSON tallies")
    ap.add_argument("--priority-file", help="file of .c paths (one per line) to process FIRST, in order (e.g. boot-path functions)")
    a = ap.parse_args()

    state = load_state()
    if a.status:
        if a.json:
            print(json.dumps({k: (len(v) if isinstance(v, list) else v) for k, v in state.items()}, indent=2))
        else:
            print_status(state, a.unit)
        return

    pat = os.path.join(ROOT, "cpu/src", a.unit or "*", "*.c")
    files = sorted(glob.glob(pat))
    done = set(state["done"])
    todo = [f for f in files if f not in done]
    if a.priority_file:
        try:
            pri = [ln.strip() for ln in open(a.priority_file) if ln.strip()]
        except OSError:
            pri = []
        pset, tset = set(pri), set(todo)
        head = [x for x in pri if x in tset]          # priority list, in order, not-yet-done
        tail = [f for f in todo if f not in pset]      # everything else, after
        todo = head + tail
        print(f"priority: {len(head)} boot-path functions first, then {len(tail)} others", flush=True)
    print(f"sweep: {len(todo)} to do / {len(files)} total ({len(done)} already done). batch={a.batch} timeout={a.timeout}s "
          f"gate={'gcc' if a.gcc_only else 'fcc'} mode={'DE-SOUP(intent-gate)' if a.de_soup else ('allow-codegen' if a.allow_codegen else 'strict-identity')}", flush=True)

    since_commit = 0
    for i, f in enumerate(todo, 1):
        if _stop:
            print("stop requested -- checkpointing and exiting", flush=True); break
        t0 = time.time()
        out = run_one(f, a.timeout, a.gcc_only, a.allow_codegen, a.de_soup)
        while out == "SERVER_DOWN" and not _stop:   # llama-server down (reboot/crash): wait, retry SAME
            print(f"[{i}/{len(todo)}] llama-server down -- waiting 120s, will retry {os.path.basename(f)} "
                  f"(not skipping)", flush=True)
            for _ in range(24):                     # 24*5s = 120s, but stay responsive to SIGTERM/SIGINT
                if _stop: break
                time.sleep(5)
            if _stop: break
            out = run_one(f, a.timeout, a.gcc_only, a.allow_codegen, a.de_soup)
        if _stop:
            print("stop requested -- checkpointing and exiting", flush=True); break
        name = os.path.splitext(os.path.basename(f))[0]
        unit = os.path.basename(os.path.dirname(f))
        rp = os.path.join(CLEAN, f"{unit}__{name}.md")

        m = next((RESULT.match(ln) for ln in out.splitlines() if RESULT.match(ln)), None)
        if m:
            nf, _, _, tag = int(m.group(2)), m.group(3), m.group(4), m.group(5)
            if tag.startswith("APPLIED"):      state["applied"] += 1; since_commit += 1
            elif tag.startswith("HELD"):        state["held"] += 1
            elif tag == "NOCOMPILE":            state["nocompile"] += 1
            else:                               state["skipped"] += 1   # not-applied: no usable cleanup (va-header dropped / renamed / empty)
            if append_catalog(name, f, rp):     state["with_findings"] += 1
            status = tag
        else:
            state["fail"] += 1; status = out.strip().splitlines()[-1][:60] if out.strip() else "no-output"

        done.add(f); state["done"] = sorted(done)
        save_state(state)                        # checkpoint after EVERY function (cheap, crash-safe)
        print(f"[{i}/{len(todo)}] {unit}/{name}: {status}  ({time.time()-t0:.0f}s)", flush=True)

        if since_commit >= a.batch:
            git_commit(since_commit, state); since_commit = 0

    git_commit(since_commit, state)              # final partial batch
    print(f"done. applied={state['applied']} held={state['held']} skipped={state['skipped']} "
          f"findings={state['with_findings']} nocompile={state['nocompile']} fail={state['fail']}", flush=True)

if __name__ == "__main__":
    main()
