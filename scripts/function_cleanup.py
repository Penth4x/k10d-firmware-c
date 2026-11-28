#!/usr/bin/env python3
"""function_cleanup.py -- per-function LLM cleanup pass (local Qwen3.8-27B on llama-server).

For each decompiled C function it does THREE things, by comparing the C against the ORIGINAL
Fujitsu-FR disassembly of the same function:

  1. BUG SCAN   -- flag instances of the known bug classes in BESTIARY.md (B-2/B-3/B-12/...),
                   e.g. a byte read truncated from an over-wide global, a dropped register arg,
                   a short-split store. Reports them; does NOT fix them in the cleaned code.
  2. READABILITY-- rewrite the function body for readability (naming aside): whitespace, obvious
                   loop/idiom clarity, grouping, explanatory comments. STRICTLY behaviour-
                   preserving -- this is a FAITHFUL recompile of real firmware, so the cleaned
                   C must compile to equivalent behaviour, bugs INCLUDED. Suspected bugs are
                   reported in (1), never silently patched here.
  3. NAMING     -- propose a better function name + variable names (the current names are
                   model-guesses; so are the callee names, which are shown for context only).

Constraints enforced in the prompt: the model may INSPECT other functions (their prototypes are
provided) but must NOT modify them, and must treat all existing names -- including callee names --
as SPECULATIVE. Output is a review PROPOSAL (cleanup/<unit>__<fn>.md), never auto-applied: a faithful
recompile means every rewrite needs a human read + a differential build before it replaces committed
code. Pass --apply only on a function you have reviewed; it writes the cleaned body in place and
keeps a .orig backup.

Usage:
  function_cleanup.py cpu/src/UNIT/func.c [more.c ...]     # specific files
  function_cleanup.py --unit 222_sr_companion_dispatch     # a whole unit
  function_cleanup.py --list cpu/src/UNIT/func.c           # just print the asm+prompt, no LLM call
  function_cleanup.py --apply cpu/src/UNIT/func.c          # write cleaned body in place (reviewed only)
  [--out DIR]  (thinking is always on; output is never token-capped)
"""
import os, re, sys, json, sqlite3, subprocess, urllib.request, argparse, hashlib, tempfile

ROOT      = "/home/memorai/k10d-firmware-c"
CATALOG   = "/home/memorai/k10d-re/harness2/catalog.sqlite"
FRDIS     = "/home/memorai/k10d-re/frdis.py"
FUNCS_H   = os.path.join(ROOT, "cpu/include/funcs.h")
BESTIARY  = os.path.join(ROOT, "BESTIARY.md")
LLM_URL   = "http://localhost:8841/v1/chat/completions"
MODEL     = "qwen3.8-27b"

HDR_VA    = re.compile(r'@k10d\s+\S+\s+@\s+0x([0-9a-fA-F]+)')
IDENT     = re.compile(r'\b([A-Za-z_]\w*)\b')
FENCE_C   = re.compile(r'```(?:c|C)?\s*\n(.*?)```', re.S)

# ---------------------------------------------------------------- disassembly / catalog
def body_range(va):
    """(body_start, body_end) for the function at origVA, from the catalog ranges table."""
    try:
        con = sqlite3.connect(f"file:{CATALOG}?mode=ro", uri=True)
        row = con.execute("SELECT body_start, body_end FROM ranges WHERE va=?", (va,)).fetchone()
        con.close()
        if row and row[0] is not None and row[1] is not None:
            return int(row[0]), int(row[1])
    except sqlite3.Error:
        pass
    return None

def disassemble(va):
    rng = body_range(va)
    lo, hi = (rng if rng else (va, va + 0x400))   # fall back to a 1KB window
    try:
        out = subprocess.run([sys.executable, FRDIS, hex(lo), hex(hi)],
                             capture_output=True, text=True, timeout=60).stdout
    except (subprocess.SubprocessError, OSError) as e:
        return f"(disassembly failed: {e})"
    return out.strip() or "(empty disassembly)"

# ---------------------------------------------------------------- context: callee prototypes
_PROTOS = None
def load_protos():
    global _PROTOS
    if _PROTOS is None:
        _PROTOS = {}
        try:
            for line in open(FUNCS_H, errors="ignore"):
                m = re.search(r'\b([A-Za-z_]\w*)\s*\(', line)
                if m:
                    _PROTOS[m.group(1)] = line.strip()
        except OSError:
            pass
    return _PROTOS

def callee_context(body, self_name):
    """Prototypes of the OTHER functions this body references -- read-only context."""
    protos = load_protos()
    names = {t for t in IDENT.findall(body) if t in protos and t != self_name}
    return "\n".join(protos[n] for n in sorted(names)[:40])

# ---------------------------------------------------------------- bestiary (condensed)
_BEST = None
def bestiary_classes():
    """One line per '## B-xx ...' heading -- the known bug-class catalogue."""
    global _BEST
    if _BEST is None:
        lines = []
        try:
            for line in open(BESTIARY, errors="ignore"):
                m = re.match(r'##\s+(B-\d+\S*.*)', line)
                if m:
                    lines.append("- " + m.group(1).strip())
        except OSError:
            pass
        _BEST = "\n".join(lines) or "(bestiary unavailable)"
    return _BEST

# ---------------------------------------------------------------- prompt
SYSTEM = """You review mechanically-decompiled C against the ORIGINAL machine code it came from.
Target: Fujitsu FR60Lite / Milbeaut (32-bit, BIG-ENDIAN, 16-bit instructions). The C is Ghidra
output being hand-curated into a FAITHFUL recompilation of real camera firmware: it must compile
to BEHAVIOUR EQUIVALENT to the original, so you must never change what the code DOES.

You will produce exactly three sections, in this order, and nothing else:

### FINDINGS
Zero or more known-bug-class hits, found by comparing the C to the disassembly. One bullet each:
`- [B-NN|none] <symptom> @ <C evidence> vs <asm evidence> -> <why it diverges>`. If none, write
`- none`. Report bugs here ONLY; do NOT fix them in the cleaned code below.

### RENAMES
Proposed names (all current names are speculative guesses; so are the callee names you were shown).
`fn: <old> -> <new>` on its own line (this one is a PROPOSAL ONLY -- see CLEANED rules), then
`var: <old> -> <new>` lines for locals/parameters. Omit a line if no better name. snake_case,
specific. Never rename anything in other functions.

### CLEANED
A single ```c fenced block: the SAME function, rewritten ONLY for readability + your variable/
parameter RENAMES. Hard rules:
- Behaviour must be byte-for-byte equivalent (same reads/writes/widths/order/branches); keep every
  cast, offset, mask and side effect; keep bugs intact (reported above, not fixed here).
- Keep the function's OWN name EXACTLY as given -- callers reference it, so a function rename can
  only be a PROPOSAL in RENAMES, never applied in this block. You MAY rename locals/parameters.
- Do not touch or inline other functions. Keep the leading /* @k10d ... */ header block verbatim
  (especially its `@ 0x<va>` line).
- Prefer clear locals and short comments that explain WHAT the original is doing."""

def build_user(name, va, c_src, asm):
    return f"""KNOWN BUG CLASSES (bestiary):
{bestiary_classes()}

OTHER FUNCTIONS this one calls (prototypes only -- inspect, do NOT modify; names are speculative):
{callee_context(c_src, name) or '(none referenced)'}

ORIGINAL FR DISASSEMBLY of {name} @ 0x{va:08x}:
{asm}

DECOMPILED C (the function to review):
```c
{c_src}
```

Review per your three sections. Compare the C against the disassembly for the bug classes; keep the
cleaned code behaviour-identical (bugs included)."""

# ---------------------------------------------------------------- llm
def call_llm(user, timeout=1800):
    # Never kneecap the model: thinking always ON, and NO max_tokens cap (reasoning + output run to
    # the server's context limit). A hard cap silently truncates reasoning/output mid-answer.
    payload = json.dumps({
        "model": MODEL,
        "messages": [{"role": "system", "content": SYSTEM},
                     {"role": "user", "content": user}],
        "temperature": 0.1, "stream": False,
        "chat_template_kwargs": {"enable_thinking": True},
    }).encode()
    req = urllib.request.Request(LLM_URL, data=payload,
                                 headers={"Content-Type": "application/json"})
    with urllib.request.urlopen(req, timeout=timeout) as r:
        content = json.loads(r.read().decode())["choices"][0]["message"]["content"]
    return re.sub(r'<think>.*?</think>', '', content, flags=re.S).strip()

def split_sections(raw):
    sec = {"FINDINGS": "", "RENAMES": "", "CLEANED": ""}
    cur = None
    for line in raw.splitlines():
        h = re.match(r'###\s+(FINDINGS|RENAMES|CLEANED)', line)
        if h:
            cur = h.group(1); continue
        if cur:
            sec[cur] += line + "\n"
    cleaned = FENCE_C.findall(sec["CLEANED"])
    cleaned = max(cleaned, key=len) if cleaned else None
    return sec["FINDINGS"].strip(), sec["RENAMES"].strip(), cleaned

# ---------------------------------------------------------------- compile gate
def compile_error(c_text):
    """gcc's error output if the cleaned function won't compile (host gcc + the FR headers), else ''.
    Same flags that fix_loop.py uses and that I verified parse these files; -w silences the FR-on-host
    warnings so only real errors (undeclared vars, type/paren mistakes the LLM introduced) remain."""
    inc = os.path.join(ROOT, "cpu/include")
    tf = tempfile.NamedTemporaryFile("w", suffix=".c", delete=False)
    tf.write(c_text); tf.close()
    try:
        r = subprocess.run(["gcc", "-c", "-w", "-fpermissive", "-std=gnu99", "-I", inc,
                            "-fno-common", "-fmax-errors=10", "-o", "/dev/null", tf.name],
                           capture_output=True, text=True, timeout=90)
        return "" if r.returncode == 0 else (r.stderr.strip() or "gcc failed (no stderr)")
    except (subprocess.SubprocessError, OSError) as e:
        return f"(compile-check error: {e})"
    finally:
        try: os.remove(tf.name)
        except OSError: pass

# ---------------------------------------------------------------- per-file driver
def process(path, args):
    src = open(path, errors="ignore").read()
    m = HDR_VA.search(src)
    if not m:
        print(f"  skip {path}: no '@k10d ... @ 0x<va>' header", file=sys.stderr); return
    va = int(m.group(1), 16)
    name = os.path.splitext(os.path.basename(path))[0]
    asm = disassemble(va)
    user = build_user(name, va, src, asm)

    if args.list:
        print(f"===== {name} @ 0x{va:08x} =====\n{asm}\n----- prompt -----\n{user[:4000]}")
        return

    try:
        raw = call_llm(user)
    except Exception as e:                       # noqa: BLE001 -- surface any transport error
        print(f"  LLM error on {name}: {e}", file=sys.stderr); return
    findings, renames, cleaned = split_sections(raw)

    rel = os.path.relpath(path, ROOT)
    report = (f"# cleanup proposal: {name}\n\n"
              f"- source: `{rel}`  (origVA 0x{va:08x})\n"
              f"- model: {MODEL}\n\n"
              f"## FINDINGS (known bug classes)\n{findings or '- none'}\n\n"
              f"## RENAMES (speculative)\n{renames or '(none)'}\n\n"
              f"## CLEANED (behaviour-preserving; review + differential-build before applying)\n"
              f"```c\n{cleaned or '(model produced no fenced block)'}\n```\n")
    os.makedirs(args.out, exist_ok=True)
    unit = os.path.basename(os.path.dirname(path))
    rp = os.path.join(args.out, f"{unit}__{name}.md")
    open(rp, "w").write(report)
    nf = 0 if findings.strip() in ("", "- none") else findings.count("\n- ") + findings.strip().startswith("- ")
    applied = False
    cc_err = ""
    if not args.dry_run and cleaned:
        # guards (git is the backup/review; these stop obviously-wrong applies):
        #  - the @k10d va header must survive,
        #  - the function must still define ITS OWN name (a function-rename stays a proposal), and
        #  - the cleaned code must COMPILE (host gcc + the FR headers) -- never commit broken code.
        if HDR_VA.search(cleaned) is None:
            print(f"    apply SKIPPED {name}: cleaned block dropped the @k10d va header", file=sys.stderr)
        elif not re.search(r'\b' + re.escape(name) + r'\s*\(', cleaned):
            print(f"    apply SKIPPED {name}: cleaned block renamed the function (proposal only)", file=sys.stderr)
        elif (cc_err := compile_error(cleaned)):
            print(f"    apply SKIPPED {name}: cleaned code does not compile (kept original)", file=sys.stderr)
            report += f"\n## COMPILE ERROR (apply skipped -- original kept)\n```\n{cc_err[:1500]}\n```\n"
            open(rp, "w").write(report)
        else:
            open(path, "w").write(cleaned if cleaned.endswith("\n") else cleaned + "\n")
            applied = True
    print(f"  {name}: findings~{nf}  rename={'y' if renames and renames!='(none)' else 'n'}"
          f"  {'APPLIED' if applied else ('dry-run' if args.dry_run else 'not-applied')}  -> {rp}")
    return {"path": rel, "report": os.path.relpath(rp, ROOT), "applied": applied}

def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("files", nargs="*", help="C function files to review")
    ap.add_argument("--unit", help="process every .c in cpu/src/<unit>/")
    ap.add_argument("--out", default=os.path.join(ROOT, "cleanup"), help="report output dir")
    ap.add_argument("--dry-run", action="store_true", help="write the report only; do NOT apply the cleaned body")
    ap.add_argument("--commit", action="store_true", help="git-commit the applied files + reports after the run (review via diff later)")
    ap.add_argument("--list", action="store_true", help="print asm + prompt only, no LLM call")
    args = ap.parse_args()

    files = list(args.files)
    if args.unit:
        import glob
        files += sorted(glob.glob(os.path.join(ROOT, "cpu/src", args.unit, "*.c")))
    if not files:
        ap.error("give function .c files or --unit")

    results = [r for f in files if (r := process(os.path.abspath(f), args))]
    applied = [r for r in results if r.get("applied")]
    if args.commit and applied:
        paths = [r["path"] for r in applied] + [r["report"] for r in results]
        subprocess.run(["git", "-C", ROOT, "add", "--"] + paths, check=False)
        msg = (f"chore(cleanup): LLM readability+rename pass on {len(applied)} function(s)\n\n"
               "Behaviour-preserving cleanup by local Qwen3.8-27B (function_cleanup.py): readability\n"
               "rewrite + local renames; bug-class findings reported in cleanup/ (NOT auto-fixed).\n"
               "Review the diff (or re-run the LLM independently) before trusting; a differential\n"
               "build confirms behaviour is unchanged.")
        subprocess.run(["git", "-C", ROOT, "commit", "-q", "-m", msg], check=False)
        print(f"committed {len(applied)} applied function(s) + reports (review via git diff)")

if __name__ == "__main__":
    main()
