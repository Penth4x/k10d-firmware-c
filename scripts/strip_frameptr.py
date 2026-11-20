#!/usr/bin/env python3
"""strip_frameptr.py — remove fcc's gratuitous frame pointer from a generated .asm.

fcc911s emits `ST RP,@-SP; ENTER #N ... LEAVE; LD @SP+,RP` for every non-leaf function,
establishing a frame pointer in R14 that it then NEVER uses (it addresses locals via SP).
That burns 4 extra stack bytes per call (the saved-R14 slot) vs the original Pentax compiler,
which omitted the frame pointer for these functions. Stripping it makes our frames match.

Transform (only when the function body never references R14 — verified true for all of them):
  ENTER #4    -> (deleted)                 # pure FP slot, zero locals
  ENTER #N>4  -> ADDSP #-(N-4)             # allocate locals only, skip the FP slot
               (if N-4 > 508: LDI:20 #(N-4),R0 ; SUB R0,R15)
  LEAVE       -> inverse (deleted / ADDSP #(N-4) / LDI:20+ADD)

SP-relative local offsets are unchanged: SP just sits 4 bytes higher, and every @(SP,k) the
body uses shifts with it consistently. R14 is left untouched (caller's value preserved —
strictly more correct than save/clobber/restore). A function that *does* touch R14 is left
exactly as fcc emitted it (safety).

  strip_frameptr.py <file.asm> [...]      # rewrite in place; prints per-file action count
"""
import re, sys, os, mmap

# Only strip the frame pointer where the ORIGINAL Pentax compiler also omitted it. The decision
# comes from the source itself: each function's `.c` header declares `@k10d <name> @ 0x<origVA>`,
# and we check the original firmware's prologue at that VA for an ENTER (0x17xx, != ST RP 0x1781).
# No static list to desync — recomputed from the source's own origVA + the reference binary.
ORIG_BIN = os.environ.get('ORIG_BIN', '/home/memorai/k10d-re/FWDC162B.BIN')
BASE = 0x10000000
_mm = None
def _orig_keeps_fp(va):
    """True if the original binary's prologue at va uses a frame pointer (ENTER)."""
    global _mm
    if _mm is None:
        try:
            f = open(ORIG_BIN, 'rb'); _mm = mmap.mmap(f.fileno(), 0, prot=mmap.PROT_READ)
        except Exception: _mm = b''
    off = va - BASE
    if off < 0 or off + 24 > len(_mm): return False
    # ENTER = opcode 0x0Fxx (ENTER #4 = 0f01, #8 = 0f02, ... low byte = frame/4). It follows any
    # register-push prologue (ST Ri,@-SP = 0x17xx), so scan the first 12 halfwords.
    for i in range(0, 24, 2):
        hw = (_mm[off+i] << 8) | _mm[off+i+1]
        if (hw & 0xff00) == 0x0f00:   # ENTER
            return True
    return False

# funcname -> origVA, read once from the source header the build hands us (optional 2nd arg).
_NAME2VA = {}
def _load_src_vas(src_path):
    try: head = open(src_path, encoding='latin-1').read(400)
    except Exception: return
    m = re.search(r'@k10d\s+(\w+)\s+@\s+0x([0-9a-f]+)', head)
    if m: _NAME2VA[m.group(1)] = int(m.group(2), 16)

def _keep(name):
    va = _NAME2VA.get(name.lstrip('_'))
    return va is not None and _orig_keeps_fp(va)

ENTER = re.compile(r'^(\s*)ENTER\s+#(\d+)\s*$')
LEAVE = re.compile(r'^(\s*)LEAVE\s*$')
LABEL = re.compile(r'^(_\w+):')
R14   = re.compile(r'\bR14\b')


def alloc(ind, nbytes):
    """emit instruction(s) that do SP -= nbytes (nbytes>0)."""
    if nbytes <= 508:
        return [f'{ind}ADDSP\t#-{nbytes}\n']
    return [f'{ind}LDI:20\t#{nbytes}, R0\n', f'{ind}SUB\tR0, R15\n']


def dealloc(ind, nbytes):
    if nbytes <= 508:
        return [f'{ind}ADDSP\t#{nbytes}\n']
    return [f'{ind}LDI:20\t#{nbytes}, R0\n', f'{ind}ADD\tR0, R15\n']


def split_functions(lines):
    """yield (start, end) line-index ranges, one per `_name:`-introduced function body."""
    starts = [i for i, l in enumerate(lines) if LABEL.match(l)]
    for a, b in zip(starts, starts[1:] + [len(lines)]):
        yield a, b


def strip_file(path):
    lines = open(path, encoding='latin-1', errors='replace').readlines()
    out = list(lines)
    changed = 0
    # process functions back-to-front so edits don't shift earlier indices
    for a, b in reversed(list(split_functions(lines))):
        lm = LABEL.match(lines[a])
        if lm and _keep(lm.group(1)):
            continue  # original compiler kept a frame pointer here — match it, don't strip
        body = lines[a:b]
        if any(R14.search(re.sub(r'^\s*(ENTER|LEAVE).*$', '', l)) for l in body):
            continue  # function genuinely uses R14 — leave fcc's frame intact
        ent = next((i for i, l in enumerate(body) if ENTER.match(l)), None)
        if ent is None:
            continue
        n = int(ENTER.match(body[ent]).group(2))
        if n < 4 or n % 1:
            continue
        loc = n - 4
        # rewrite every LEAVE then the ENTER (indices within [a,b))
        for i in range(b - 1, a - 1, -1):
            m = LEAVE.match(lines[i])
            if m:
                out[i:i+1] = [] if loc == 0 else dealloc(m.group(1), loc)
        m = ENTER.match(lines[a + ent])
        out[a+ent:a+ent+1] = [] if loc == 0 else alloc(m.group(1), loc)
        changed += 1
    if changed:
        open(path, 'w', encoding='latin-1').writelines(out)
    return changed


if __name__ == '__main__':
    # Usage: strip_frameptr.py <file.asm> [--src <file.c>] ...
    # --src gives the C source whose @k10d header declares the origVA for the asm's function(s);
    # without it, the origVA is looked up by searching the tree (slower).
    args = sys.argv[1:]
    asms, src = [], None
    i = 0
    while i < len(args):
        if args[i] == '--src' and i + 1 < len(args):
            src = args[i+1]; i += 2
        else:
            asms.append(args[i]); i += 1
    if src:
        _load_src_vas(src)
    elif asms:
        import glob
        for a in asms:
            b = os.path.splitext(os.path.basename(a))[0]
            for c in glob.glob(f'cpu/src/**/{b}.c', recursive=True):
                _load_src_vas(c)
    tot = sum(strip_file(p) for p in asms)
    print(f'[strip_frameptr] stripped frame pointer from {tot} function(s) across {len(asms)} file(s)')
