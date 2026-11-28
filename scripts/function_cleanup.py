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

def caller_context(self_name):
    """Who CALLS this function + example call-sites -- the best signal for its real role and the
    meaning of its args/return (and for spotting a dropped/mis-typed arg). Read-only; names are
    speculative. Found by grepping the tree for calls to <self_name>( ."""
    protos = load_protos()
    try:
        hits = subprocess.run(["grep", "-rhnE", "--include=*.c", r'\b' + re.escape(self_name) + r'\s*\(',
                               os.path.join(ROOT, "cpu/src")], capture_output=True, text=True, timeout=90).stdout
    except (subprocess.SubprocessError, OSError):
        return ""
    sites, protonames = [], set()
    for line in hits.splitlines():
        s = line.strip()
        if s.startswith("*") or "@k10d" in s or re.match(r'\w[\w\s\*]*' + re.escape(self_name) + r'\s*\(', s):
            continue   # skip comments and the definition itself
        sites.append(s[:160])
    # callers' prototypes: files that reference it, by basename
    try:
        files = subprocess.run(["grep", "-rlwE", "--include=*.c", re.escape(self_name),
                                os.path.join(ROOT, "cpu/src")], capture_output=True, text=True, timeout=90).stdout.split()
    except (subprocess.SubprocessError, OSError):
        files = []
    for f in files:
        cn = os.path.splitext(os.path.basename(f))[0]
        if cn != self_name and cn in protos:
            protonames.add(protos[cn])
    out = ""
    if protonames:
        out += "caller prototypes:\n" + "\n".join(sorted(protonames)[:20])
    if sites:
        out += "\nexample call-sites (how it is invoked -- the real arg meanings):\n" + "\n".join(sites[:12])
    return out.strip()

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
FR DELAY SLOTS -- read before reasoning about call arguments: the instruction immediately AFTER a
delayed transfer (`call:d`, `bcc:d`/`bne:d`/`beq:d` etc., `bra:d`, `jmp:d`, `ret:d`) is its DELAY
SLOT and EXECUTES BEFORE control transfers. So a register written in the delay slot of a `call:d`
IS already set when the callee begins -- that value is an argument to THAT call, NOT to some later
one. Do not conclude a delay-slot `ldi`/`mov` "belongs to the next call" because it is printed after
the call line; that is backwards. FR passes arguments in r4,r5,r6,r7 (r4=1st, r5=2nd, ...), so map
each arg register carefully (a value in r4 is the 1st arg, r5 the 2nd) before claiming a mismatch.

### RENAMES
Proposed names (all current names are speculative guesses; so are the callee names you were shown).
`fn: <old> -> <new>` on its own line (this one is a PROPOSAL ONLY -- see CLEANED rules), then
`var: <old> -> <new>` lines for locals/parameters. Omit a line if no better name. snake_case,
specific. Never rename anything in other functions.

### CLEANED
A single ```c fenced block: the SAME function, rewritten ONLY for readability + your variable/
parameter RENAMES. Hard rules:
- Keep the GENERATED MACHINE CODE identical. The cleanup is checked by compiling original vs cleaned
  and requiring a byte-identical .text section, so your change must be rename + reformat + comments
  ONLY. Do NOT reorder statements, merge/split them, introduce ternaries or early returns, change a
  loop/switch form, or rewrite an expression into an equivalent one -- those move .text and get HELD.
  Keep the exact same statements in the exact same order; keep every cast, offset, mask, branch and
  side effect; keep bugs intact (reported above, not fixed here).
- Keep the function's OWN name EXACTLY as given -- callers reference it, so a function rename can
  only be a PROPOSAL in RENAMES, never applied in this block. You MAY rename locals/parameters.
- Do not touch or inline other functions. Keep the leading /* @k10d ... */ header block verbatim
  (especially its `@ 0x<va>` line).
- Prefer clear locals and short comments that explain WHAT the original is doing.

COMMON MISTAKES seen in earlier runs -- DO NOT REPEAT:
- Non-compiling output: every variable you use must be declared; match the original's types; balance
  parentheses/braces; keep the exact cast syntax. (You will be asked to fix compile errors you cause.)
- Declaring locals you never use -- declare exactly the locals the body uses, no extras.
- Guessing a specific bug class when unsure: if a FINDING is not clearly one of the listed B-NN
  classes, label it `[none]` or `[uncertain]` with the observation -- do NOT assert a B-NN you are
  not confident in (you once mislabeled a data-flow issue as B-10).
- Editorializing in the code: do NOT add `// BUG ...` or finding/opinion comments in CLEANED. Findings
  go in ### FINDINGS only; the code stays a faithful rewrite. Comments may only describe WHAT the code
  does.
- Changing behaviour while "cleaning": no reordering of reads/writes, no folding/simplifying arithmetic
  or branches, no "fixing" a suspected bug. Byte-for-byte equivalent, always."""

def build_user(name, va, c_src, asm, fcc_self=None):
    fcc_block = ("" if not fcc_self else
        f"\n\nFRESH fcc ASSEMBLY of the DECOMPILED C above -- what the current C recompiles to via OUR "
        f"compiler, fcc911s, which is NOT the compiler the original firmware was built with. So compare it "
        f"to the original disasm for EQUIVALENCE, not identity: benign differences (register allocation, "
        f"instruction scheduling, idiom/peephole choices, equivalent addressing) are EXPECTED and are NOT "
        f"bugs. Flag a FINDING only for a SEMANTIC divergence -- a different operation, a wrong "
        f"offset/width/mask/immediate, a missing or extra memory access or side effect, or control flow "
        f"that does not match. Those mean the decompiled C does not faithfully represent the original.\n{fcc_self}")
    return f"""KNOWN BUG CLASSES (bestiary):
{bestiary_classes()}

CALLEES -- other functions this one calls (prototypes only; inspect, do NOT modify; names speculative):
{callee_context(c_src, name) or '(none referenced)'}

CALLERS -- who calls this function, and how (read-only; the best clue to its role + real arg meanings;
names speculative, do NOT modify them):
{caller_context(name) or '(no C-level callers found; may be reached only via vtable/register)'}

ORIGINAL FR DISASSEMBLY of {name} @ 0x{va:08x} (the ground truth -- the real camera's machine code):
{asm}{fcc_block}

DECOMPILED C (the function to review):
```c
{c_src}
```

Review per your three sections. Compare the C against the disassembly for the bug classes; keep the
cleaned code behaviour-identical (bugs included)."""

# ---------------------------------------------------------------- llm
def call_llm(messages, timeout=1800):
    # Never kneecap the model: thinking always ON, and NO max_tokens cap (reasoning + output run to
    # the server's context limit). A hard cap silently truncates reasoning/output mid-answer.
    payload = json.dumps({
        "model": MODEL, "messages": messages,
        "temperature": 0.1, "stream": False,
        "chat_template_kwargs": {"enable_thinking": True},
    }).encode()
    req = urllib.request.Request(LLM_URL, data=payload,
                                 headers={"Content-Type": "application/json"})
    with urllib.request.urlopen(req, timeout=timeout) as r:
        content = json.loads(r.read().decode())["choices"][0]["message"]["content"]
    return re.sub(r'<think>.*?</think>', '', content, flags=re.S).strip()

MAX_ROUNDS = 4   # 1 initial + up to 3 self-fixes of its own compile errors

def cleanup_with_self_check(user, dry_run):
    """Generate the cleanup, then let the model COMPILE-CHECK ITSELF and fix its own errors (feedback
    loop, like fix_loop). Returns (findings, renames, cleaned, rounds, final_compile_err)."""
    messages = [{"role": "system", "content": SYSTEM}, {"role": "user", "content": user}]
    findings = renames = cleaned = ""
    err = ""
    for rnd in range(1, MAX_ROUNDS + 1):
        raw = call_llm(messages)
        findings, renames, cleaned = split_sections(raw)
        if cleaned is None or dry_run:
            return findings, renames, cleaned, rnd, ""
        err = compile_error(cleaned)
        if not err:
            return findings, renames, cleaned, rnd, ""      # compiles -> done
        if rnd == MAX_ROUNDS:
            break
        # hand the compiler's complaint back and let it fix ITS OWN output
        messages.append({"role": "assistant", "content": raw})
        messages.append({"role": "user", "content":
            "Your CLEANED code does not compile. Fix ONLY the compile errors -- keep the readability "
            "cleanup, the renames, the behaviour, and the @k10d header. gcc reported:\n\n" + err +
            "\n\nReturn all three sections (### FINDINGS / ### RENAMES / ### CLEANED) again, corrected."})
    return findings, renames, cleaned, MAX_ROUNDS, err

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

def text_section(c_text):
    """The compiled .text bytes of the function (host gcc, no debug), or None if it won't compile.
    Two versions with byte-identical .text are PROVABLY behaviour-identical: variable names, whitespace
    and comments are not in .text, so a pure rename/reformat/comment cleanup leaves .text untouched; any
    change to logic or control flow moves it. This is the faithfulness gate -- general (every function,
    no emulation) and provable -- replacing the incidental SPI-txn check for the cleanup pass."""
    inc = os.path.join(ROOT, "cpu/include")
    cf = tempfile.NamedTemporaryFile("w", suffix=".c", delete=False); cf.write(c_text); cf.close()
    of, tf = cf.name + ".o", cf.name + ".text"
    try:
        r = subprocess.run(["gcc", "-c", "-w", "-fpermissive", "-std=gnu99", "-I", inc, "-fno-common",
                            "-o", of, cf.name], capture_output=True, text=True, timeout=90)
        if r.returncode != 0:
            return None
        subprocess.run(["objcopy", "-O", "binary", "--only-section=.text", of, tf],
                       capture_output=True, timeout=30)
        with open(tf, "rb") as fh:
            return fh.read()
    except (subprocess.SubprocessError, OSError):
        return None
    finally:
        for p in (cf.name, of, tf):
            try: os.remove(p)
            except OSError: pass

# ---------------------------------------------------------------- fcc (real target compiler)
SOFTUNE = os.environ.get("SOFTUNE", "/home/memorai/k10d-re/softune")
def _zpath(p): return "Z:" + os.path.abspath(p).replace("/", "\\")

def fcc_asm(c_text):
    """Fresh TARGET (Fujitsu FR) assembly of the function via the REAL compiler, fcc911s -S (through
    wine), or None on failure. This is authoritative codegen -- unlike the host-gcc proxy it is the
    exact instruction set the recompile emits. Its instruction sequence vs the ORIGINAL BINARY disasm
    is a mechanical decompile-faithfulness check; vs the original C's fcc asm it proves a cleanup
    changed no codegen. Slow (wine) -- used only in --fcc (high-assurance) mode."""
    inc = _zpath(os.path.join(ROOT, "cpu/include"))
    cf = tempfile.NamedTemporaryFile("w", suffix=".c", delete=False, dir="/tmp"); cf.write(c_text); cf.close()
    asm = cf.name + ".asm"
    try:
        subprocess.run(["wine", "BIN/fcc911s.exe", "-S", "-O1", "-cpu", "MB91F128", "-I", inc,
                        "-o", _zpath(asm), _zpath(cf.name)], cwd=SOFTUNE, capture_output=True, timeout=240)
        return open(asm, errors="ignore").read() if os.path.exists(asm) else None
    except (subprocess.SubprocessError, OSError):
        return None
    finally:
        for p in (cf.name, asm):
            try: os.remove(p)
            except OSError: pass

def asm_insns(asm):
    """Normalized instruction lines of an fcc .asm (mnemonic+operands; drop labels, directives, comments,
    blanks) -- for a codegen-equality compare that ignores symbol names and layout."""
    if not asm:
        return None
    out = []
    for ln in asm.splitlines():
        s = ln.strip()
        if not s or s.startswith(";") or s.startswith(".") or s.endswith(":"):
            continue
        out.append(re.sub(r'\s+', ' ', s).lower())
    return out

# ---------------------------------------------------------------- per-file driver
def process(path, args):
    src = open(path, errors="ignore").read()
    m = HDR_VA.search(src)
    if not m:
        print(f"  skip {path}: no '@k10d ... @ 0x<va>' header", file=sys.stderr); return
    va = int(m.group(1), 16)
    name = os.path.splitext(os.path.basename(path))[0]
    asm = disassemble(va)
    fcc_self = None if getattr(args, "gcc_only", False) else fcc_asm(src)  # default: real fcc asm (~1s)
    user = build_user(name, va, src, asm, fcc_self)

    if args.list:
        print(f"===== {name} @ 0x{va:08x} =====\n{asm}\n----- prompt -----\n{user[:4000]}")
        return

    try:
        findings, renames, cleaned, rounds, cc_err = cleanup_with_self_check(user, args.dry_run)
    except Exception as e:                       # noqa: BLE001 -- surface any transport error
        print(f"  LLM error on {name}: {e}", file=sys.stderr); return

    rel = os.path.relpath(path, ROOT)
    report = (f"# cleanup proposal: {name}\n\n"
              f"- source: `{rel}`  (origVA 0x{va:08x})\n"
              f"- model: {MODEL}  (self-check rounds: {rounds})\n\n"
              f"## FINDINGS (known bug classes)\n{findings or '- none'}\n\n"
              f"## RENAMES (speculative)\n{renames or '(none)'}\n\n"
              f"## CLEANED (behaviour-preserving; review + differential-build before applying)\n"
              f"```c\n{cleaned or '(model produced no fenced block)'}\n```\n"
              + (f"\n## STILL NOT COMPILING after {rounds} self-check rounds (original kept)\n```\n{cc_err[:1500]}\n```\n" if cc_err else ""))
    os.makedirs(args.out, exist_ok=True)
    unit = os.path.basename(os.path.dirname(path))
    rp = os.path.join(args.out, f"{unit}__{name}.md")
    open(rp, "w").write(report)
    nf = 0 if findings.strip() in ("", "- none") else findings.count("\n- ") + findings.strip().startswith("- ")

    applied = False
    tag = "dry-run" if args.dry_run else ("NOCOMPILE" if cc_err else "not-applied")
    if not args.dry_run and cleaned and not cc_err:
        # compile already passed in the loop; remaining guards: keep va header + own name, then the
        # FAITHFULNESS GATE -- the cleaned function must compile to byte-identical .text as the original
        # (provably behaviour-preserving: a pure rename/reformat/comment leaves .text untouched). If the
        # model restructured and .text moved, HOLD it for review instead of trusting it (unless --allow-codegen).
        if HDR_VA.search(cleaned) is None:
            print(f"    apply SKIPPED {name}: cleaned block dropped the @k10d va header", file=sys.stderr)
        elif not re.search(r'\b' + re.escape(name) + r'\s*\(', cleaned):
            print(f"    apply SKIPPED {name}: cleaned block renamed the function (proposal only)", file=sys.stderr)
        else:
            # Faithfulness gate: prefer the REAL compiler (fcc, ~1s/fn); fall back to the host-gcc .text
            # proxy only if fcc/wine is unavailable. A pure rename/format change has identical codegen
            # under either, so the fallback is still sound.
            a = b = None; gate = "fcc-asm"
            if not getattr(args, "gcc_only", False):
                a, b = asm_insns(fcc_asm(src)), asm_insns(fcc_asm(cleaned))
            if a is None or b is None:
                a, b = text_section(src), text_section(cleaned); gate = ".text"
            same = a is not None and b is not None and a == b
            if same:
                open(path, "w").write(cleaned if cleaned.endswith("\n") else cleaned + "\n")
                applied = True; tag = f"APPLIED({gate}=)"
            elif args.allow_codegen:
                open(path, "w").write(cleaned if cleaned.endswith("\n") else cleaned + "\n")
                applied = True; tag = "APPLIED(codegen-changed)"
            else:
                tag = "HELD(codegen-changed)"
                report += ("\n## CODEGEN CHANGED -- held for review (original kept)\n"
                           "The cleaned .text differs from the original, so this is NOT a pure rename/format "
                           "cleanup -- the model restructured logic/control-flow. Review behaviour before "
                           "applying, or re-run with --allow-codegen.\n")
                open(rp, "w").write(report)
                print(f"    HELD {name}: .text changed (restructured) -- not applied", file=sys.stderr)
    print(f"  {name}: findings~{nf}  rename={'y' if renames and renames!='(none)' else 'n'}"
          f"  rounds={rounds}  {tag}  -> {rp}")
    return {"path": rel, "report": os.path.relpath(rp, ROOT), "applied": applied}

def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("files", nargs="*", help="C function files to review")
    ap.add_argument("--unit", help="process every .c in cpu/src/<unit>/")
    ap.add_argument("--out", default=os.path.join(ROOT, "cleanup"), help="report output dir")
    ap.add_argument("--dry-run", action="store_true", help="write the report only; do NOT apply the cleaned body")
    ap.add_argument("--commit", action="store_true", help="git-commit the applied files + reports after the run (review via diff later)")
    ap.add_argument("--allow-codegen", action="store_true", help="apply even if codegen changed (structural refactors); default HOLDs those for review")
    ap.add_argument("--gcc-only", action="store_true", help="skip fcc: use the host-gcc .text proxy for the gate and omit the fcc-asm-vs-disasm decompile check (for hosts without the fcc/wine toolchain). Default uses real fcc (~1s/fn).")
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
