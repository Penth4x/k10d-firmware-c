# K10D firmware, in C

A C reconstruction of the Pentax K10D DSLR firmware (`FWDC162B`, v1.31), recovered by
decompiling the camera's flash image with Ghidra (Fujitsu FR / FR60Lite, big-endian) and
reconciling the result until it type-checks, recompiles, links, and **boots in emulation**.

Two processors, one file per recovered function:

- `cpu/` — the main CPU (@ `0x10000000`), grouped by recovered module under `cpu/src/<module>/`.
- `dsp/` — the self-booting DSP partition (@ `0xc0000`): the sensor / AE / shake-reduction
  real-time controller. (Build scripts WIP.)

The workflow is: **edit the C here → rebuild → diff the rebuilt image against the original in
emulation → fix the diverging function → repeat → commit.** The compiler and the differential
emulator keep every change honest.

---

## What you provide

The repo is self-contained *source*, but building a runnable image needs three external pieces:

1. **SOFTUNE FR toolchain** — a directory containing `BIN/fcc911s.exe`, `FASM911S.EXE`,
   `FLNK911S.EXE`, `F2MS.EXE`. Run under `wine` (the scripts do this for you). Point `SOFTUNE` at it.
2. **The original firmware** `FWDC162B.BIN` (v1.31). The build harvests every **non-code** byte
   (rodata / data / jump tables) from it and overlays only the recompiled **code**; the original
   binary is *not* distributed in this repo. Point `FW131` at your own copy.
3. **`qemu-system-frn`** — the QEMU FRN machine target, to boot and diff. Build it as below.

---

## Build the QEMU FRN emulator

The emulator is a separate companion repo (`qemu-frn`): a QEMU fork adding the `frn` target
(Fujitsu FR CPU) and the `k10d` machine (this camera's SoC, display, SD, DSP, cpucom).

```sh
git clone <qemu-frn repo> qemu-frn
cd qemu-frn
mkdir build && cd build
../configure --target-list=frn-softmmu --disable-werror --disable-docs
ninja                      # or: make -j$(nproc)
# -> build/qemu-system-frn
```

Boot the original firmware to sanity-check the emulator:

```sh
./build/qemu-system-frn -machine k10d -bios /path/to/FWDC162B.BIN -display none -serial stdio
```

The machine honours a set of `FRN_*` trace/control env vars used by the diff tooling below —
most importantly `FRN_FT=<fifo-or-file>`, which emits a function-trace stream.

---

## Build the firmware

```sh
SOFTUNE=/path/to/softune FW131=/path/to/FWDC162B.BIN bash cpu/build.sh
# -> cpu/out/firmware.abs           (linked image)
#    cpu/out/candidate_FWDC162B.BIN (flashable image: recompiled code overlaid on the original)
```

- Each `cpu/src/**/*.c` is compiled independently (`-O1`, the flag that best reproduces the
  original codegen) and assembled to `cpu/out/obj/`. The compile is **incremental** — only files
  newer than their `.obj` recompile, so an edit-rebuild cycle touches just the changed functions.
- `cpu/gen/{crt0,vtables,syms,syscall_traps}.asm` are committed symbolic non-code artifacts:
  the reset/boot stub, the C++ vtables, the data-symbol address map, and the REALOS syscall
  trampolines. No build database is required.
- Heavy parallel `wine` is flaky under load (a compile exits 0 but drops its `.obj`); `build.sh`
  retries missing objects at low parallelism and **aborts before linking** if the object set is
  incomplete, rather than emitting a confusing flood of unresolved-symbol errors.

---

## Diff against the original (`codiff`)

`scripts/codiff.sh` is the core verification loop. It **co-runs** the original (the oracle) and
your rebuilt candidate in `qemu-system-frn`, reduces each instruction trace to its
**function-entry sequence** (original VAs), realign-diffs the two, and prints every divergence
hunk — *"the original went A→B→C here, the candidate went A→C."* The first hunk is the first
place your firmware behaves differently.

```sh
QEMU=/path/to/qemu-system-frn FW131=/path/to/FWDC162B.BIN bash scripts/codiff.sh
```

A hunk looks like:

```
=== divergence @ stock[316] cand[316] ===
  prefix: 0x10459b70 mempool_get_block
  STOCK-only (5): 0x1000d268 rtos_dispatch_entry | ... | 0x10010138 kernel_alloc_pool_block
  CAND-only  (2): 0x10010138 kernel_alloc_pool_block | ...
```

i.e. after `mempool_get_block`, the original entered `rtos_dispatch_entry` (then the routine)
but the candidate called the routine directly — a behaviour bug to fix in the C.

Options:

- `WALL=<sec>` — wall-clock budget per emulator (default 150). **Traces are bounded by time,
  never by instruction count** (the interesting code is deep in the boot).
- `REGS=1` — also capture `r4`–`r7` at each entry and diff *arguments*: finds the first call made
  with the **wrong values** even when the call *sequence* still matches (the second divergence
  class, after control-flow).
- `RE=/path/to/k10d-re` — location of the sibling analysis checkout that supplies the symbol
  oracle (`fnseq.py` + the Ghidra symbol DB) used only to *name* the functions in the hunks; the
  diff itself is derived from this repo's candidate and `cpu/out/firmware.map`.

For a quick, oracle-free check, `scripts/boot_diff.sh` reports the first *executed-PC* divergence
instead (no symbol DB needed).

### The iterate loop

```
edit cpu/src/<module>/<fn>.c
  → bash cpu/build.sh                 # recompiles only what changed, relinks, overlays
  → bash scripts/codiff.sh           # first divergence hunk
  → fix the function the hunk names
  → repeat until codiff is clean
  → commit
```

---

## Repo layout

| path | what |
|------|------|
| `cpu/src/<module>/*.c` | main-CPU functions, one per file, grouped by recovered module |
| `cpu/include/` | shared headers (`structs.h`, `funcs.h`, `globals.h`, `frv_intrinsics.h`, C89 shims) |
| `cpu/gen/*.asm` | committed symbolic non-code (crt0, vtables, data symbols, syscall trampolines) |
| `cpu/build.sh` | compile → assemble → link → overlay into a candidate image |
| `scripts/codiff.sh` | function-entry behavioural diff vs the original |
| `scripts/boot_diff.sh` | quick executed-PC diff (no symbol DB) |
| `scripts/gen_syscall_traps.py` + `*.tsv` | regenerate the REALOS `int #0x40` trampolines + call-site rewrites |
| `scripts/overlay_fr.py` | overlay recompiled code onto the original to make the flashable image |
| `dsp/` | DSP partition source (build WIP) |

## Firmware is not included

Derived analysis only; the original firmware binary is not distributed here. You supply your own
`FWDC162B.BIN`. Companion repos: the Ghidra FR processor-module fix, and the QEMU FRN machine
target (`qemu-frn`).
