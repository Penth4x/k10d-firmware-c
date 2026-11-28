#!/usr/bin/env python3
"""cleanup_group.py -- propose consolidating one-function-per-file into fewer source files.

One .c per function is awful for the linker (thousands of TUs, slow links, no locality). This asks
the local Qwen3.8-27B to propose a CONSOLIDATION PLAN for a unit: group related functions (by call
relationships, shared purpose, naming) into a handful of .c files, and name each file. It PROPOSES
only -- merging files + updating the build is a reviewed step -- writing cleanup/GROUPING_<unit>.md.

Context given to the model per function: name, origVA, one-line purpose (from the @k10d header), and
which other in-unit functions it calls (so it can cluster by call graph). Names are speculative.

Usage: cleanup_group.py --unit 128_ev_display_mapping [--apply]
  --apply : actually merge the files per the plan (into the proposed names), git-add, and leave for
            review + a differential build. Default is propose-only.
"""
import os, re, sys, json, glob, urllib.request, argparse

ROOT    = "/home/memorai/k10d-firmware-c"
LLM_URL = "http://localhost:8841/v1/chat/completions"
MODEL   = "qwen3.8-27b"
HDR_VA  = re.compile(r'@k10d\s+\S+\s+@\s+0x([0-9a-fA-F]+)')
IDENT   = re.compile(r'\b([A-Za-z_]\w*)\b')

def purpose(src):
    m = re.search(r'\*\s*purpose:\s*\n\s*\*\s*(.+)', src)
    if m:
        return m.group(1).strip()
    m = re.search(r'name:\s*(.+)', src)
    return (m.group(1).strip()[:80] if m else "(no purpose line)")

def fn_name(path):
    return os.path.splitext(os.path.basename(path))[0]

def call_llm(user, timeout=1800):
    # thinking always on, no max_tokens cap (never kneecap the model)
    payload = json.dumps({"model": MODEL,
        "messages": [{"role": "system", "content": SYSTEM}, {"role": "user", "content": user}],
        "temperature": 0.2, "stream": False,
        "chat_template_kwargs": {"enable_thinking": True}}).encode()
    req = urllib.request.Request(LLM_URL, data=payload, headers={"Content-Type": "application/json"})
    with urllib.request.urlopen(req, timeout=timeout) as r:
        c = json.loads(r.read().decode())["choices"][0]["message"]["content"]
    return re.sub(r'<think>.*?</think>', '', c, flags=re.S).strip()

SYSTEM = """You reorganize a reverse-engineered firmware source tree. It currently has ONE .c file per
function, which is terrible for the linker and for reading. Propose grouping the functions of one
'unit' into a FEW .c files, clustering by call relationships, shared data/purpose, and naming.

Rules: group tightly-coupled functions (caller+callees, a class's methods, a table and its readers)
together; aim for a handful of files, not one-per-function and not a single mega-file; give each a
clear snake_case filename ending .c. All names shown are speculative guesses. Do NOT invent functions.

Output ONLY a plan, as lines:
`<proposed_file.c>: funcA, funcB, funcC`
one per proposed file, every input function assigned to exactly one file, then a short `# rationale:`
paragraph. No code."""

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--unit", required=True)
    ap.add_argument("--apply", action="store_true", help="merge files per the plan (review + differential-build after)")
    a = ap.parse_args()

    files = sorted(glob.glob(os.path.join(ROOT, "cpu/src", a.unit, "*.c")))
    if not files:
        sys.exit(f"no .c in cpu/src/{a.unit}")
    names = {fn_name(f) for f in files}
    rows, bodies = [], {}
    for f in files:
        src = open(f, errors="ignore").read()
        bodies[fn_name(f)] = (f, src)
        va = HDR_VA.search(src)
        callees = sorted({t for t in IDENT.findall(src) if t in names and t != fn_name(f)})[:8]
        rows.append(f"{fn_name(f)} @0x{va.group(1) if va else '?'} :: {purpose(src)}"
                    + (f"  [calls: {', '.join(callees)}]" if callees else ""))

    user = (f"UNIT {a.unit} -- {len(files)} functions, one .c each. Propose a consolidation.\n\n"
            + "\n".join(rows))
    plan = call_llm(user)
    out = os.path.join(ROOT, "cleanup", f"GROUPING_{a.unit}.md")
    os.makedirs(os.path.dirname(out), exist_ok=True)
    open(out, "w").write(f"# file-consolidation proposal: {a.unit}\n\n"
                         f"{len(files)} functions -> proposed grouping ({MODEL}):\n\n```\n{plan}\n```\n")
    print(f"{a.unit}: {len(files)} functions -> plan at {out}")
    print(plan[:1500])

    if a.apply:
        # parse `file.c: a, b, c` lines, concatenate each group's .c into the proposed file.
        groups = {}
        for line in plan.splitlines():
            m = re.match(r'\s*([\w./-]+\.c)\s*:\s*(.+)', line)
            if not m:
                continue
            fns = [x.strip() for x in re.split(r'[,\s]+', m.group(2)) if x.strip() in bodies]
            if fns:
                groups[m.group(1)] = fns
        assigned = {fn for fns in groups.values() for fn in fns}
        missing = set(bodies) - assigned
        if missing:
            print(f"  NOT applying: {len(missing)} functions unassigned by the plan: {sorted(missing)[:5]}...",
                  file=sys.stderr); return
        udir = os.path.join(ROOT, "cpu/src", a.unit)
        for newfile, fns in groups.items():
            merged = []
            for i, fn in enumerate(fns):
                p, s = bodies[fn]
                # keep only the first file's #includes; others drop the duplicate include block
                if i > 0:
                    s = re.sub(r'(?m)^#include[^\n]*\n', '', s, count=3)
                merged.append(s.rstrip() + "\n")
            dest = os.path.join(udir, os.path.basename(newfile))
            open(dest, "w").write("\n".join(merged))
            for fn in fns:
                if bodies[fn][0] != dest and os.path.exists(bodies[fn][0]):
                    os.remove(bodies[fn][0])
        import subprocess
        subprocess.run(["git", "-C", ROOT, "add", "-A", "--", f"cpu/src/{a.unit}"], check=False)
        print(f"  applied: {len(files)} files -> {len(groups)} files. Review + run scripts/cleanup_validate.sh, then commit.")

if __name__ == "__main__":
    main()
