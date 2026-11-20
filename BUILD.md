# K10D recompiled-from-C firmware — build & iterate

This repo is the **self-contained source** of the K10D firmware, recompiled entirely from C.
Edit the C here, rebuild, diff against the original, commit.

## You provide
- **SOFTUNE FR toolchain** (dir with `BIN/fcc911s.exe`, `FASM911S.EXE`, `FLNK911S.EXE`, `F2MS.EXE`), run via `wine`.
- **The original 1.31 firmware** `FWDC162B.BIN` — the build harvests all non-code data (rodata/data/jump tables) from it; only the recompiled **code** is new.
- `qemu-system-frn` (to boot/diff).

## Build the main CPU
```
SOFTUNE=/path/to/softune FW131=/path/to/FWDC162B.BIN bash cpu/build.sh
# -> cpu/out/firmware.abs, cpu/out/candidate_FWDC162B.BIN
```
`cpu/gen/{crt0,vtables,syms}.asm` are the committed symbolic non-code artifacts (reset/boot stub,
C++ vtables, data-symbol address map) — no build database needed.

## Boot & diff against the original
```
QEMU=/path/to/qemu-system-frn FW131=/path/to/FWDC162B.BIN bash scripts/boot_diff.sh
```
Reports the first executed-PC divergence. Fix the diverging function in `cpu/src/...`, rebuild, re-diff, commit.

## DSP
`dsp/` holds the DSP partition source; its build/link scripts are WIP (see dsp/).
