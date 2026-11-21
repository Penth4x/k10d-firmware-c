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
- **Caveat:** to inspect the candidate's *real* recompiled code you MUST disassemble the PACKED
  copy at its linked address (via the map), never the candidate image at the origVA — see TOOL-2.
  Stock reads stack args at `(r14,12)/(r14,16)`; the recompile may legitimately read the same args
  at different `(r14,N)` offsets because it reorders `stm1`/`st sr1`/`enter` in the prologue — each
  is internally correct for its own prologue, so a different offset is NOT by itself a bug.

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
- **Root (three sub-cases):** (a) a constructor's vtable store was dropped (B-2-like) — but often the
  constructor is *correct*, so (b) the **object pointer itself is wrong**: a field that should hold
  a constructed object holds a zeroed slot, i.e. an earlier field-store was dropped or a getter
  returned the wrong address; or (c) **a nearby stack buffer overran the spill slot that held the
  object pointer** — see the B-6b sub-class below. Verify the constructor first (cheap: disasm the
  PACKED copy via `map_packed.py`, confirm the `ldi:32 #<vtbl>; st @r8` store is emitted), then,
  if the ctor is clean, capture a FULLREGS window at the call site and read the object pointer's
  *source* load — if it loads `0` from an `@(r14,-N)` slot, that slot was clobbered (sub-case c).
- **Instance (ROOT FOUND, fix applied):** `initialize_camera_state_object` (0x10478132) — **the
  black-screen root.** After the FP-alias fix (B-4) and the `forward_second_field_call` arity fix
  (B-3) advanced the co-run divergence to stock[7635], a FULLREGS window at packed `0x107549ca`
  showed the block-B object pointer loaded as `0` from `@(r14,-40)`, then `ld @0 → vtable 0 →
  call @0 → PC=0`. Cause = **B-6b**: block B calls `alloc_and_zero_small_block(&_cfg_84.pvStack_5c)`
  which zeros **4 words**, but the decompiler struct `_cfg_84` had only `pvStack_5c`+`iStack_58`
  (2 words) after that offset (the original contiguous 4-word buffer was split into 2 struct
  members + loose local `iStack_50` + an unnamed gap). The 4-word zeroing overran 2 words past the
  struct into fcc's spill slot `@(r14,-40)` (= `&param_1[0x14]`, the `cls_105aa39c` member ptr),
  nulling it. Fix: declare the buffer as 4 contiguous members of `_cfg_84` (`+iStack_54`, folded
  loose `iStack_50` into the struct) so the helper's write stays inside the addressable struct and
  fcc places its spills outside it. Stock frame is `ENTER #0xa8`; the fix restores cand to `#0xa8`.
- **Lesson:** "yields to idle" in a function-trace is NOT proof of a wait — confirm with an
  instruction trace before theorising about semaphores/flags. A single `FRN_FT_PC=<packed>
  FRN_FT_WIN=N FRN_FT_FULLREGS=1` windowed capture is the right tool (not an iterative treadmill).

## B-6b · zeroing-helper stack overrun (struct-split buffer under-sized) ← B-1/B-6 overlap
- **Symptom:** a live value spilled to the stack (an object pointer, a saved `piVar`) is read back
  as `0` or garbage, with no store to that slot in the source → downstream null-vtable crash (B-6).
- **Decompiler signature:** the original contiguous N-word stack buffer is fragmented into a few
  struct members + loose `iStack_*` locals (+ unnamed gaps). A memset-like helper
  (`alloc_and_zero_*`, `init_zeroed_heap_struct`) is called with `&struct.lastMember` and zeroes
  **more words than remain in the struct after that member**, so the tail of the write lands in
  whatever fcc placed next (often a register spill slot).
- **Detection:** for each `alloc_and_zero_*(…&buf…)` call, compare the helper's zero-count (read its
  body: `param_1[k]=0` count, or its `heap_alloc` size /4) against the words from `buf`'s offset to
  the end of its containing struct. `helper_words > words_remaining` ⇒ overrun.
- **Fix:** extend the struct so the buffer has ≥ helper_words contiguous members (fold the split-off
  loose locals back in). The struct is passed by address, so fcc keeps it intact and contiguous and
  spills land outside it. Don't just enlarge the frame — the buffer must be addressable members.

## B-7 · hardware poll-wait collapsed into `__halt()` (continuation dropped)
- **Symptom:** the recompile spins forever at a `bra <self>` (1-instruction infinite loop); a PC
  histogram over a trace window shows ~100% of instructions at one packed PC. Looks like a panic.
- **Decompiler signature:** a `while ((*MMIO & bit) == 0) {}` hardware-ack poll becomes `__halt()`
  (= `for(;;)` in `frv_intrinsics.h`), and the decompiler emits `/* Removing unreachable block ... */`
  — it judged the spin un-exitable (it can't see hardware/another-IRQ changing the polled location)
  and **deleted everything after it**, including the loop that consumes the ack and the normal return.
- **Detection:** histogram cand PCs (`FRN_FT` → `awk 'match($0,/PC=0x[0-9a-f]+/)…'`); a single
  dominant PC ⇒ disasm it. If it is `bra <self>`, find the containing function in the link map, then
  **disassemble the STOCK original at its origVA** — a genuine panic halt stays a tight loop in stock
  too, but a poll-wait shows a `lduh/ld <MMIO>; and <bit>; beq <back>` that *exits* and continues.
- **Fix:** rewrite the C to the real poll-wait with a `volatile` MMIO pointer so fcc emits the load
  each iteration, and restore the dropped continuation. `__halt()` is used by ~20 functions here —
  **audit them**: some are real `halt_baddata()`/`halt_unimplemented()` panics (leave those), but any
  on the boot/steady path whose stock original *exits* the loop is this bug.
- **Instances (all 4 fixed — triage by the `Removing unreachable block` warning; the genuine
  halts `idle_task`/`ready_list_insert_spin`/`kernel_panic`/`task_exit_stub` start with `bra <self>`
  in stock and were left alone):**
  - `set_error_flag_and_halt` (0x100f0a1e, unit 001): mailbox handshake — `0x80d`→`*0x48`,
    `0x813`→`*0x4e`, wait `param_1`× for `*0x4e & 4` (vec31-IRQ ack), clear each, clear `*0x4e`.
    This was the first hang after the B-6b fix (spun at packed `bra 0x107f07b0`).
  - `set_flag_and_halt` (0x100f1c5e, unit 001): sibling handshake — `0x80e`→`*0x58`, `0x813`→`*0x5e`,
    wait `param_1`× for `*0x5e & 4`, clear, clear `*0x5e`.
  - `infinite_loop_100f1cb0` (0x100f1cb0, unit 001): single-ack handshake — `0x672`→`*0x58`,
    `0x213`→`*0x5e`, wait once for `*0x5e & 4`, clear `*0x5e`.
  - `halt_loop_infinite` (0x10439594, unit 126) and `infinite_loop_100f031c` (0x100f031c, unit 001,
    byte-identical): companion/rear-LCD-controller init at `0x40070000` — program ~13 registers,
    start (bit7 of `+0x0e`), **poll `*(0x4007000c) & 0x80` until ready**, return. The decompiler
    dropped the *entire* body (claimed "no side effects").
- **QEMU confirmation:** `hw/frn/k10d.c:688` documents that `0x4007000c` "is POLLED by app-main
  (pc 0x10439600) and must read ready" — i.e. the emulator was built to ack exactly this poll, and
  `set_error_flag_and_halt`'s mailbox ack already completed in-emulator (cand advanced past it), so
  these reconstructions complete rather than hang. A B-7 fix is only correct if the emulator (or
  real hardware) actually drives the awaited bit — verify that before assuming the poll exits.

---

## B-8 · non-returning tail-jump inlined into a returning function (spurious ret/frame)
- **Symptom:** a function runs an enormous amount of correct-looking work (millions of
  instructions, boot reaches deep) and then crashes at its own epilogue — `ret` pops a poison
  value (e.g. `0x1f1f1f1f`) → wild PC that slides through empty memory. The ".c" is far larger
  than the original (e.g. 514-line C / 12 KB object for a 152-byte original) and carries
  decompiler warnings like "This function may have set the stack pointer" / "Removing unreachable
  block" / "Globals starting with '_' overlap".
- **Cause:** the original ends with a **non-returning tail-jump** (`ldi #addr,r0; jmp @r0`), and is
  entered by a **jump, not a call** (so no return address is ever pushed). Ghidra treats the
  tail-jump target as a fall-through continuation and **inlines the jumped-to function** (and
  whatever *it* tail-jumps to) into the body, then — because C functions return — invents an
  `ENTER` frame and a `leave; ld @r15+,rp; ldm1; ret` epilogue the original never had. fcc faithfully
  compiles that epilogue; at runtime the `ret` reads an uninitialized/poison stack slot → runaway.
  The tail-jumped function also gets compiled a **second time** standalone (duplicate work).
- **Instance (ROOT FOUND, fix applied):** `initialize_rtos_kernel` @ 0x10008000 (kernel entry).
  152-byte boot trampoline — 7 peripheral-init calls, SDRAM clear/copy loops, set SP(`r15=0x8800`)
  / `stilm #0x10` / TBR(`sr0=0x10003c00`), then `jmp @0x1000ea00`; crt0 **jumps** into it. Ghidra
  inlined `initialize_rtos_kernel_state_1000ea00`. Emulator trace: ~5.9M insns of inlined init
  (reaching ~fn 23260), then PC slides `0x1075fe64→fe6a` (the spurious epilogue) → `ret` →
  `0x1f1f1f1f` → runaway to `0x20a7xxxx`.
- **Fix:** such a function cannot be faithfully recompiled from C (no frame, sets SP, never returns,
  reads incoming boot registers). Hand-write it as byte-faithful assembler under `cpu/gen/`, with
  call/jump targets emitted as **symbols** (so the recompiled callee tree stays in the execution
  path and the differential emulator still sees divergences inside them), everything else as
  `.DATA.B`. Exclude the decompiled `.c` from the build (rename `*.c` → `*.c.handasm`) so it stops
  emitting a duplicate symbol; add the asm basename to `cpu/build.sh`'s step-[2] gen list. See
  `cpu/gen/initialize_rtos_kernel.asm`. (Mirrors the existing `crt0.asm` hand-asm pattern.)
- **Detection rule:** when a function's `.c` dwarfs its original byte-size, or carries the
  "set the stack pointer"/"unreachable block" warnings, disassemble the **original** VA first. If it
  ends in `jmp @rN` (not `ret`) and is reached by a jump, it is a boot/trampoline — hand-asm it;
  do not trust the inlined decompilation. Distinct from B-4 (which is pure FP-codegen on a normally
  returning function); B-8 is a control-flow *structure* mismatch (fabricated return).
- **Lesson (verify-don't-infer):** "ran far" does **not** mean "this early function is fine" — it can
  mean the crash is the *last* thing a wrongly-inlined early function does. Confirm the crash PC
  against the firmware.map packed range before attributing it; the earlier session misread this as a
  hw_init_runner r14-clobber, which the raw trace disproved.

## B-9 · pointer-arithmetic scaling (`&field + idx` where `(int)&field + idx` was meant) ← **widespread; 17 sightings**
- **Symptom:** a constructor/clear/copy loop (or a one-shot select) overruns its object by a factor of
  the field size, corrupting *adjacent* objects' fields — classically zeroing a neighbour's vtable
  slot, which later surfaces as a B-6-style null-vtable `call @0` crash **far** from the writer.
- **Cause:** Ghidra emits a byte-offset store as `*(T *)(&P->field + idx)`. Because `&P->field` has
  the field's pointer type, C scales `idx` by `sizeof(*&P->field)` — so a loop index that steps by a
  **byte** amount (e.g. `idx += 0x14` for five `uint32_t` words) is multiplied **again** by 4,
  turning a contiguous 0x14 stride into a 0x50 stride that walks off the end of the object. The
  original is uniform byte arithmetic. The tell is **inconsistency**: within one loop Ghidra writes
  some stores as `*(T *)((int)&P->field + idx)` (byte, correct) and its siblings as
  `*(T *)(&P->field + idx)` (scaled, wrong) — the author cannot have meant both strides for one `idx`.
  A field typed `uint8_t` is byte-correct by accident (`sizeof==1`), which is why a parallel pair like
  `&field_0x67c`(u32, scaled) / `&field_0x686`(u8, byte) diverges.
- **Instance (ROOT of the boot blocker, confirmed by emulator + asm):** `cls_1059e430_new`
  @ 0x10427d7a (`cpu/src/107_settings_manager/`). Six of eight clear-loop stores lacked the `(int)`
  cast; `idx` stepped 0x10 but scaled to a 0x40 stride, overrunning the 0x104 object and zeroing
  `P+8` (0x805527d8) — the secondary-base vtable slot of the adjacent multiply-derived
  `cls_105a0828` object `P` at 0x805527d0. `deactivate_dual_object_pair` then reads `*(P+8)=0` as a
  vtable, dispatches slot [3] → `call @0` → reset (the ~55-70×/25s boot-loop). FRN_NO_REBOOT single-
  cycle trace: P+8 correctly built to 0x105a08b8, then zeroed at PC 0x1067fe54 (the clear loop).
  Fixed loop asm (`cpu/out/obj/cls_1059e430_new.asm`): all 8 stores `param_1 + fieldoff + iVar1`,
  no `LSL #2` — clears exactly 0x4..0x100.
- **Class fix (grep the class, not the instance):** `scratchpad/classify_scaling.py` finds every
  `*(T *)(&ptr->field + idx)` without an `(int)`/byte cast, then classifies by the loop increment —
  a **byte-stride** increment (>=4) or a **mixed** `(int)&`/bare-`&` sibling => bug; a genuine unit
  step (`idx++`) would be an intended typed-array walk (none found here). 17 functions confirmed
  (constructors `cls_105b2e98/105b3ae4/105b9400/1062112c/105d6d90/105f9ab0/105a1a84/105b4dac/
  1059e4d0_new`, `init_object_with_three_refs_1049a906/104a2d04`, `init_object_with_vtable_and_data/
  _and_dispatch`, `init_object_and_dispatch_state_10392166`, `dispatch_event_queue_items`,
  `initialize_apex_mode_state`). Each verified by a stride/sibling/field-type argument or the struct
  layout (e.g. apex's scaled 0x110/0x190 land past the struct end; byte 0x44/0x64 are real fields).
- **Fix form:** cast each unguarded `&field` to `(int)` before the add (matching Ghidra's own
  faithful sibling stores), leaving already-byte offsets (`(int)puVar2 + k`) alone. Distinct from
  B-1/B-6b (which are wrong *base*, not wrong *scale*).
- **Detection rule:** DON'T blanket-add `(int)` to every `&sym + idx` — `&DAT_*`/`&stack0*` are
  byte-typed and already correct, and a true `idx++` array walk needs the scale. Gate on: the index
  is a byte-stride loop variable (or a byte-offset select), the pointee is multi-byte, and (ideally)
  a sibling store or the source/dest stride proves byte arithmetic was intended.

## TOOL-1 · trace reducer drops relocated functions (measurement bug, not firmware)
- **Symptom:** co-run fdiff shows the candidate "skipping" functions it actually executes; inflated
  "missing function" counts; phantom divergences that send you chasing the wrong place.
- **Cause:** the SOFTUNE linker map abbreviates/truncates long symbol names at the column width,
  dropping the origVA-disambiguating suffix; the reducer maps packed→origVA by name, so truncated
  names fail the lookup and those functions vanish from the candidate trace.
- **Fix:** link with `-dt -pw 1023` (full names). `cpu/build.sh` (commit 11fc2283).
- **Lesson:** when a trace-based conclusion feels off, verify against a **raw packed-PC trace**
  (`grep FRN_FT for the packed addr from firmware.map`) or direct device state before acting on it.

## TOOL-2 · disassembling the candidate at the origVA reads the WRONG code (reads stock)
- **Symptom:** every executed function looks "byte-identical to stock", so the recompile appears
  perfect and the divergence seems to come from nowhere (data/state only). A whole investigation
  can be built on this and be completely wrong.
- **Cause:** the candidate image is the original 1.31 firmware with the recompiled CODE **packed at
  0x10622400+** and overlaid on top; the original code bytes at the origVA (e.g. 0x1045cd9e) are
  **left in place** (the overlay base). A disassembler that reads `image[origVA - 0x10000000]`
  (as the old `/tmp/frdis_cand.py` does) therefore reads the untouched **original** bytes, i.e.
  stock — not the recompiled code that actually executes. Execution reaches the packed copy via the
  relocated call targets / vtables; the trace reducer maps packed-PC → origVA, so the trace is of
  the packed code even though the names print as origVAs.
- **Detection:** the recompile is equivalent-but-not-byte-identical (fcc reorders prologues, picks
  different scratch registers), so a *true* candidate disasm should differ from stock in register
  allocation / instruction order. If it matches byte-for-byte, you are reading the wrong copy.
- **Fix:** map origVA → symbol (source `@k10d <name> @ 0x<origVA>`) → packed addr (link map
  `<PACKED>(ABS) ... _<name>`), then disassemble the candidate at the **packed** addr.
  `scratchpad/map_packed.py <origVA> [nbytes]` does this.
- **Lesson:** register-residue differences in the rseq trace (e.g. an incidental `r5` left as the
  pre-shift value) are EXPECTED from the different-but-equivalent codegen and are usually benign —
  only differences in a register the callee actually consumes matter.
