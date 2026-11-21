# K10D recompile — Bug Bestiary

Decompiler-error classes found while getting the from-C firmware to compile → link → boot like
stock. Each recurs across many functions, so **find one, grep the class, fix the on-path instances,
verify, repeat** — never fix a single instance and move on. Keep this file current: add a row the
first time a class appears, bump the count/status as it's swept.

Golden rule for the forwarder/arg classes: **recover the real value from the reliable stock trace,
never guess.** And **filter to the boot path** — most instances are in unreachable functions
(`stock_calls == 0`); "fixing" those is unverifiable churn ("accidentally correct" code).

Reliable measurement (prerequisite for all localization):
- Build links with `-dt -pw 1023` so the linker map emits full (non-truncated) symbol names —
  otherwise the trace reducer silently drops relocated functions (see TOOL-1).
- Co-run diff: `WALL=120 bash codiff_fwc.sh` (fnseq fdiff) / `REGS=1 …` (rseq rdiff, args).
- Ground truth beats traces: read device state directly (e.g. LCD base reg `0x40040308`) and
  screenshot via QMP `screendump`.
- Per-function real register values: `grep '^<origVA> ' traces/stock.rseq` → `origVA r4 r5 r6 r7`.

---

## B-1 · struct-split (contiguous config record emitted as separate locals)
- **Symptom:** a callee reads `param_2[0x12]` etc. past what the caller's struct declares; garbage
  fields / corrupted vtable pointers; crashes that masquerade as unrelated (e.g. "vec31 cpucom").
- **Decompiler signature:** one contiguous on-stack record emitted as several non-contiguous
  `*Stack_*` / `local_*` locals, passed by `&base` to a callee.
- **Fix:** wrap the group into a real struct, walking offsets by actual type size.
  `scripts/fix_structsplit3.py` (compile-gated sweep).
- **Status:** ~144 functions swept. **The boot unlock** (1,009 → 200k+ fn-entries).

## B-2 · short-split STORE (32-bit pointer stored as two truncated 16-bit halves)
- **Symptom:** an object pointer read back via `*(int*)&field` is corrupted (written as a byte/short).
- **Decompiler signature:** `field5_0x18 = (short)(uVar>>0x10); field6_0x1a = (short)uVar;` on a
  field later dereferenced as a 32-bit pointer.
- **Fix:** `*(uint32_t*)&field5_0x18 = param_2[2];` (one 32-bit word store).
- **Status:** `cls_105a0a84_new` + 7 sibling constructors (unit 126). `scripts/fix_splitstore.py`.

## B-3 · under-arity dropped-register-arg (forwarder) ← **recurring; 2+ sightings**
- **Symptom:** a thin forwarder calls its callee with garbage; return-value / side-effect callers
  then corrupt downstream state. Often invisible until a clean rebuild (object cache hides it).
- **Decompiler signature:** function typed with too few params, reads incoming registers as
  **uninitialised locals**: `rN_in`, `in_rN`, `__frv_reg_unset(N)`, `unaff_rN`.
- **Detection:** `grep -rE '\br[4-9]_in\b|\bin_r[4-9]\b|__frv_reg_unset' cpu/src`
  (tree-wide: ~187 `rN_in` files, ~885 `__frv_reg_unset`). **Filter to on-path** via
  `grep '^<origVA> ' traces/stock.rseq` (skip `stock_calls==0`).
- **Fix:** recover the dropped register's real value from `stock.rseq`:
  - constant (e.g. always 0) → the delay-slot `ldi #0,rN` at every call site; use that value;
  - pointer / varying → thread it as a real parameter from the caller (may chain).
- **Instances:**
  - `get_lens_fw_update_status` (0x10546fbc): typed `(void)`, really a 4-arg forwarder
    `(buffer,count,elem,init_fn)` → `alloc_and_init_lens_fw_buffer(…,0,0)`. 4-arg sig + swept
    all 21 callers / 33 sites (args recovered statically incl. `call:d` delay slots). **DONE**
    (commit 72550e4b).
  - `forward_second_field_call` (0x10481340): typed 1-arg, reads `r5_in` as the **index** to
    `compute_offset_from_base(base, index)`. Every call site sets `r5=0` in the delay slot;
    11/11 trace calls `r5=0`. Hardcoded index 0 (covers direct + vtable-slot-2 dispatch). **DONE.**
  - `lookup_table_entry_by_index_10482026` (0x10482026, unit 176): reads `r5_in` (a **pointer**,
    stock `r5=0x8054cbcc`) passed to `screen_key_find`. On-path (2 calls). Harder — needs threading
    the real pointer from its caller. **OPEN.**
- **Status:** on-path sweep in progress on the display/registry-init path.

## B-4 · frame-pointer codegen mismatch
- **Symptom:** extra `ENTER`/R14 frame where the original compiler omitted it; stack-layout drift.
- **Signature:** fcc always emits `ENTER (#..)` (0x0Fxx), even on leaf fns; stock omits it ~80%.
- **Fix:** selective post-assembly strip only where the source's origVA shows no `ENTER` in the
  reference binary. `scripts/strip_frameptr.py`, wired in `cpu/build.sh`.
- **Status:** committed (1e3e3c92).

## B-5 · loop codegen stack-drift (caller-saved spill)
- **Symptom:** persistent stack-pointer drift vs stock across a scanning loop.
- **Fix:** restructure the loop so loop vars stay caller-saved (single index, fresh entry ptr).
- **Status:** `mempool_release_block` (6819d5cf).

## B-6 · null-vtable call → jump-to-0 crash (masquerades as "task blocks / yields to idle")
- **Symptom:** in a function-entry trace the task appears to "yield to idle and never resume" —
  but it is actually a **crash**, not a blocking wait. At instruction level the PC jumps to
  `0x00000000` and executes low-memory garbage (PC = 2,4,6,…); a later timer IRQ recovers the
  scheduler to the idle task, which is what looked like a clean yield.
- **Signature (raw FRN_FT_FULLREGS):** `ld @r4,r12` with `*r4 == 0` (object has a NULL vtable),
  then a vtable-slot call `call @r12` → `PC=0x00000000`.
- **Detection:** capture `FRN_FT_FULLREGS` to a fifo, `awk` a window at the suspected PC, look for
  the `PC=0x00000000` transition; the preceding `ld @r4,…` names the bad object pointer. Also
  grep the access history of that address (`@0x<addr>`) — if it is only ever written `0`, it is an
  uninitialised slot, not a constructed object.
- **Root (two sub-cases):** (a) a constructor's vtable store was dropped (B-2-like) — but often the
  constructor is *correct*, so (b) the **object pointer itself is wrong**: a field that should hold
  a constructed object holds a zeroed slot, i.e. an earlier field-store was dropped or a getter
  returned the wrong address. Verify the constructor first (cheap), then trace the pointer's origin.
- **Instance (OPEN):** `initialize_camera_state_object` (0x10478132) crashes on a vtable-slot-2
  call where the object pointer is `*(param_1+8) == 0x80048700`, a slot only ever written 0
  (vtable 0). The sibling constructors (`cls_105aa4f0/40c/498_new`) all correctly write their
  vtables, so the bug is upstream: why `param_1+8` holds a zeroed slot instead of the
  `cls_105aa40c_new` object. **This is the current black-screen root.**
- **Lesson:** "yields to idle" in a function-trace is NOT proof of a wait — confirm with an
  instruction trace before theorising about semaphores/flags.

---

## TOOL-1 · trace reducer drops relocated functions (measurement bug, not firmware)
- **Symptom:** co-run fdiff shows the candidate "skipping" functions it actually executes; inflated
  "missing function" counts; phantom divergences that send you chasing the wrong place.
- **Cause:** the SOFTUNE linker map abbreviates/truncates long symbol names at the column width,
  dropping the origVA-disambiguating suffix; the reducer maps packed→origVA by name, so truncated
  names fail the lookup and those functions vanish from the candidate trace.
- **Fix:** link with `-dt -pw 1023` (full names). `cpu/build.sh` (commit 11fc2283).
- **Lesson:** when a trace-based conclusion feels off, verify against a **raw packed-PC trace**
  (`grep FRN_FT for the packed addr from firmware.map`) or direct device state before acting on it.
