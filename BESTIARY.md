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
  - `reg_framework_send` (0x10459abe, unit 127) — **THE message-bus root; 85 callers / 97 sites.**
    Typed 1-arg `(int param_1)`, reads `r5_in`/`r6_in` as uninit locals. Original only remaps
    r4→param_1+0x14; **r5 (payload) and r6 (code) pass THROUGH unchanged** to `mbx_send_message`
    (verified static decode). Every caller was emitted single-arg, so the whole register-framework
    command bus dropped its payload+code. **Measured:** stock sends 35 of its 43 `mbx_send_message`
    calls via this path; candidate sent **1 total → deadlock at idle, black screen**. **Fix:** sig
    `(int, void*, uint32_t)` forwarding param_2/param_3; swept all 85 callers. r6=code is a
    delay-slot constant (0x1/0x2/0x3). r5=payload recovered by category via `scripts/resolve_rfs.py`
    (validated symbolic tracer) + the structural tell that the packet SENT = the packet freed by the
    following `virtual_destructor_free_10428222(&X,…)`: ALLOC (`(void*)allocvar`), STACKPKT
    (`&_cfg.iStack`), P2PLUS (`(void*)((uintptr_t)param_2+8)`), plus embedded-object/param cases.
    Tools: `frdis.py`, `resolve_rfs.py`, `rfs_table.py`, `patch_rfs.py`. **DONE (d327)** — 3 off-path
    callers (`iterate_and_check_queue_items`, `dispatch_lens_comm_command`, `initialize_mode_context`)
    best-effort (branchy/mangled decompile), flagged for Ghidra re-verify.
  - `set_flg_obj` (0x104596cc, unit 127) — **the eventflag-signal root; 213 callers / 240 sites.**
    Typed 1-arg; original forwards incoming **r5 (the flag pattern)** unchanged to
    `__trap_set_event_flag_bits`. Every caller emitted single-arg → `set_flg(id, 0)` = no-op, so
    waiters on `wai_flg` never wake (terminal int40 trace: `set_flg(flag 0x2e)=pattern 0` vs
    `wai_flg(0x2e)=0x2`). Sig `(uint32_t*, uint32_t)` forwarding param_2. Swept via
    `patch_setflg.py` (184 single-call constants) + `patch_setflg2.py` (24 multi-call, per-site
    r5) + 5 by hand. **DONE (ba9096d8).**
  - `set_flag_on_object_at_offset_0x70_104ded7a` (0x104ded7a, unit 248) — a **latent** B-3 leaf the
    set_flg_obj sweep surfaced: typed 1-arg `(int param_1)` but forwards incoming **r5** to
    set_flg_obj. `patch_setflg.py`'s blind 2nd-arg append wrote `param_2` into a sig that lacked it
    → **CC FAIL (undefined `param_2`)**, aborting the build. Fix: add `uint32_t param_2` to sig+proto;
    caller `call_single_helper_104dec7a` sets r5=`*(param_1+0x68)` in the delay slot; caller
    `call_single_helper_104df450` is **itself** a B-3 forwarder (forwards its own `param_x1`). **DONE.**
    **Lesson:** a blind arg-appender turns latent under-arity forwarders into *compile errors* —
    treat such a CC FAIL as a B-3 signal; resolve the register at the call site via disasm, never
    just delete the arg.
- **Tooling note:** `scripts/resolve_rfs.py` is a reusable linear symbolic FR tracer (params→regs,
  callee-saved r8-r11/r14, call clobbers, delay slots, one level of stack-spill following). It
  mis-reads branch-dependent values — always cross-check branchy callers against disasm (`frdis.py`).
- **Status:** reg_framework_send + set_flg_obj classes swept. Remaining open: lookup_table_entry_by_index.

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

## B-9 · pointer-arithmetic scaling (`&field + idx` where `(int)&field + idx` was meant) ← **widespread; 18 sightings**
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

## B-10 · 64-bit shift ≥32 compiled as a masked no-op (`CONCAT44(hi,lo) >> 0x20` miscompiled)
- **Symptom:** a value that should be a clean 32-bit pointer/field comes out as `hi | lo` (two 32-bit
  halves OR'd together) → a wild pointer → a null-vtable / wild-jump crash far from the arithmetic.
- **Cause:** **FR masks the shift COUNT to 5 bits.** `lsl #0x20` / `lsr #0x20` (shift by 32) become
  shift-by-0 — a **no-op**. Ghidra, when it can't settle types (watch for the "Type propagation
  algorithm not settling" header warning), models a function that returns two 32-bit values in
  `r4`/`r5` as a single 64-bit return and emits `uVar = CONCAT44(hi, lo); x = (T)(uVar >> 0x20)` to
  pick `hi`. fcc keeps `uVar` in ONE 32-bit register and compiles the 64-bit shuffle with
  `lsl/lsr #0x20`; with the count masked to 0 the `<<32` and `>>32` vanish, so `x = hi | lo` instead
  of `hi`. fcc flags every such shift with **`W1063B: shift count is too large`** — the reliable
  detector (grep the build log).
- **NOT every W1063B is a bug.** When Ghidra spuriously wraps a plain **32-bit** return in
  `(ulonglong)v >> 0x20`, the masked no-op cancels the spurious shift and yields `v` — *accidentally
  correct*. The bug bites only when `lo` is a real, possibly-nonzero value that gets OR'd into `hi`
  (the `CONCAT44(hi, lo)` form). Classify each W1063B: `CONCAT44(hi, lo) >> 0x20` with nonzero `lo`
  ⇒ bug; `(ulonglong)<32-bit> >> 0x20` ⇒ accidentally-correct (still clean it to drop the shift, so
  it's correct by construction, but behaviour is unchanged).
- **Instance (ROOT, confirmed by stock disasm + emulator):** `app_obj_factory`
  (origVA 0x104957de) — a switch-factory that builds one of ~0x18 object kinds. Each case's object is
  the helper/alloc **r4 return**; Ghidra modelled it as `uVar14 = CONCAT44(uVar4, pbStack_44)` and
  `pvVar7 = (void*)(uVar14 >> 0x20)`. Candidate (masked): `pvVar7 = object | lowword` =
  `0x804a48d8 | 0x6a000300 = 0xea4a4bd8` (wild) → `*(pvVar7+0xc)=0` vtable → slot[27]@`0xd8` →
  `call @0` → reset (the post-B-9 boot blocker at packed 0x1063274c). **Stock has no `lsl/lsr #0x20`
  at all** — the original just does `mov r4,r8` (object = r8) and dispatches; the 64-bit dance is pure
  decompiler fiction.
- **Fix:** eliminate the 64-bit intermediate. Give the object a plain `void *objResult`, set it in
  each case to the real 32-bit object (the helper/alloc return = Ghidra's CONCAT high word), and use
  `pvVar7 = objResult` at the convergence. The low word is decompiler fiction (only reached the
  error-path `console_printf`). `cpu/src/199_settings_menu_manager/app_obj_factory.c`.

### B-10b · SPURIOUS `(uint16_t)((uint64_t)x >> 16)` — a shift the original never had (not a ≥32 no-op)
- **Symptom:** a small value that must be written whole (a code / message priority / id) is instead
  written as `x >> 16` = 0 (for a small x), silently corrupting it.
- **Cause:** Ghidra wraps a plain value in `(uint64_t)x >> 16` where the ORIGINAL just stored `x`
  (e.g. a 16-bit `sth`). Unlike B-10's `>>0x20`, this is NOT masked away — `>>16` executes and
  zeroes a small value. fcc does NOT warn (the count is < 32), so W1063B does NOT catch it — the
  detector is a disasm cross-check against the original store/arg.
- **Instance (ROOT of the d327 black screen, confirmed):** `mbx_send_message` (0x10459864) — the
  message PRIORITY at msg+4. Original `sth r11,@(r8+4)` = `(uint16_t)param_3`, NO shift
  (0x104598b0). The C had `(uint16_t)((uint64_t)param_3 >> 16)`, so the recompile wrote priority 0.
  Priority mailbox (mbx 2, attr TA_MPRI) rejects priority 0 with E_PAR(-17) at the kernel snd
  (insert_into_timeout_queue 0x10010c18, checks `1<=pri<=maxpri`): the send FAILS, the message
  never reaches its pump (app_task_generic_waitloop 0x10632a12 blocks rcv_mbx FEVR), the whole
  event-dispatch cascade stalls → black screen. **Fix:** `msg+4 = (uint16_t)param_3` (drop the
  shift). Self-contained. Found via: snd result trace (cand -17 vs stock 0×43) + kernel disasm.
- **Sweep candidates (24 files, `grep -rE '\(uint16_t\)\(\(uint64_t\)' cpu/src`):** NOT all bugs —
  legit cases extract a real high-16 or split a 32-bit value into two 16-bit halves (`>>0`/`>>16`
  pairs). Verify each against the original disasm (does the original shift?) before fixing. OPEN.
- **Detection rule:** build and grep for `W1063B`. For each, read the shifted value's producer: a
  two-register/CONCAT44 source ⇒ rewrite to extract the real half without a 64-bit shift; a plain
  32-bit source ⇒ drop the spurious `>> 0x20`. Distinct from B-2 (short-split STORE of a 32-bit value
  as two 16-bit halves); B-10 is a 64-bit *shift* collapsing.
- **Header helpers caveat (`cpu/include/stdint.h`):** fcc911s models **every** shift count against
  32-bit width — a `uint64_t` shift by ≥32 (`x>>32`, `x>>63`) both emits `W1063B` **and** silently
  masks the count to 5 bits, i.e. miscompiles. The compat helpers `__frv_clzll`/`__frv_popcountll`
  (exposed as `__builtin_clzll`/`__builtin_popcountll`) originally used `x>>63` → broken (currently
  **unused**, so harmless, but "accidentally-wrong dead code"). Rewritten to walk the two 32-bit
  halves via big-endian word access (`((uint32_t*)&x)[0]`=hi, `[1]`=lo), all shifts ≤31. **Rule:**
  never write a `>=32` shift on a 64-bit value in C compiled by fcc — split into word halves.

## B-3b · dropped SYSCALL arg (r5+ not passed to an int #0x40 trap) ← B-3 at an ABI boundary
- **Symptom:** a kernel syscall gets a garbage second arg — e.g. a task created with a bogus
  start-arg that later crashes the task body (`ui_task_body_common(param=-3)` → null-vtable).
- **Cause:** the `int #0x40` trap routines take register args the decompiler didn't model. The kernel
  routine reads the extra arg as an **incoming** `extraout_rN` (a read with no preceding call that
  could have set rN), and the trap wrapper's generated declaration (cloned from the routine's
  `funcs.h` prototype) is too short, so the recompiled caller never loads rN — fcc reuses it for a
  local and that garbage becomes the syscall arg.
- **Instance (fixed):** `check_task_state_transition` (ROM 0x1000d540, `int #0x40`) takes
  r4 = `(short)*param_1` AND r5 = the task start-arg (stock: `mov r4,r5`); it stashes r5 as
  `_DAT_6a003aa0`. Declared 1-arg, so `kernel_diag_taskstack` left its `iVar1=-3` temp in r5 → the
  task ran with start-arg -3. Fix: 2-arg prototype in `funcs.h` (the trap-gen clones it) +
  `syscall_traps.h`, pass `param_1` explicitly, and give the (dead, trap-shadowed) recompiled routine
  the honest 2-arg sig (`extraout_r5` → `param_2`).
- **Detection:** an `extraout_rN` / `caller_rN` read in a function reached via a `__trap_` thunk
  (ROM syscall) = a dropped syscall arg. `extraout_rN` elsewhere (after a call) is usually benign
  (secondary return), so the EMULATOR trace (a syscall getting a stale register) is the reliable
  finder, not a blind grep.

## B-11 · un-relocated function pointer in harvested rodata (dispatch table, not a vtable)
- **Symptom:** packed code calls through a rodata table and lands in ORIGINAL firmware code (origVA),
  which runs with un-relocated internal pointers and derails (`jmp 0xffffffff`). The call target's
  origVA is a recompiled function, yet execution is at the origVA, not its packed address.
- **Cause:** the overlay keeps original rodata byte-identical except recognised vtables (emitted
  symbolically with PACKED symbols in `cpu/gen/vtables.asm`). A `{value, handler}` dispatch/state
  table that Ghidra did NOT tag as a vtable stays original → holds original code addresses.
- **Instance (fixed, gated):** the cpucom/ui_task5 table at 0x105a7e24..0x105a7f64 (ui_task5_body,
  cpucom_poll_on_irq15, cls_105a7ea0_delete …). Packed `ui_task5_body` dispatched through it into
  original `cpucom_ctx_resubmit` → derail. `scripts/find_rodata_fnptrs.py` finds all candidates
  (3422 ptrs in 435 tables tree-wide — vtables.asm is incomplete); `scripts/gen_rodata_fnptrs.py`
  emits one CONST word per fn-ptr (packed symbol at the original rodata address; overlay_fr.py
  overlays it).
- **CRITICAL — do NOT blanket-relocate.** Relocating every rodata word that equals a function origVA
  REGRESSES boot: some are DATA that merely equals a function address (keys/constants), and
  relocating them corrupts early boot (crashed `initialize_seven_subobject_container` at ~1.87M
  insns). Gate on `CONFIRMED_TABLES` — ranges the emulator proved reached-and-derailing (a trace
  showing packed code calling an original fn-ptr from the range). A systematic finder for
  *reached-and-called* fn-ptrs (trace: read `@A`=origVA then `PC` becomes that origVA) would batch
  the on-path tables safely; blind origVA-matching does not.

## B-12 · vtable this-adjustment is 16-bit, typed 32-bit (every MI dispatch wrong) ← **one-line, tree-wide**
- **Symptom:** a multiple-inheritance virtual call moves `this` by a wild amount (≈±786 KB) and lands
  on unconstructed memory → null-vtable / wild-jump crash. adj=0 dispatches (the vast majority) look
  fine, so it only bites the few MI sites — far into boot.
- **Cause:** the vtable entry's this-adjustment is a **16-bit halfword**. Stock reads it
  `lduh @r12,r0; extsh r0` = `(short)*(uint16_t*)(vtbl+off)`. The shared `vtbl_entry` type in
  `cpu/include/frv_intrinsics.h` declared it `int32_t adj`, so fcc reads the full 32-bit word: a real
  adjustment stored as `0xfff40000` reads as **-0xC0000** instead of `(short)0xfff4 = -0xC`.
  (`fn` stays at offset 4: 2-byte adj + 2-byte pad; the entry is still 8 bytes.)
- **Instance (ROOT, confirmed by stock disasm):** `ui_task_body_common` (origVA 0x1045a16a)
  dispatches `vtbl[2]` of a `cls_105a7ea0` secondary vtable (0x105a7f28) → `ui_task5_body` with
  adj `0xfff40000`. 32-bit: `this(0x80532c98) - 0xC0000 = 0x80472c98` (unconstructed) → crash.
  16-bit: `this - 0xC = 0x80532c8c` = the actual complete-object base (primary vtable 0x105a7ea0
  written there). Stock reads the halfword; the recompile read the word.
- **Fix:** `typedef struct { int16_t adj; int (*fn)(); } vtbl_entry;` (keep `fn` returning `int` —
  the GCC-strict requirement). One header line fixes every MI dispatch. (build.sh checks `.c` mtime,
  not headers, so force-recompile the vtbl_entry users: `grep -rl vtbl_entry cpu/src --include=*.c |
  xargs touch` — ~2289 files — rather than deleting all objs.)
- **Impact:** boot advanced ~1.8M insns (6.59M → 8.39M) in one change. Distinct from B-2 (short-split
  STORE) and B-10 (64-bit shift): B-12 is a struct-field **width** mistype on a shared type.
- **Instance 2 (MMIO-global width; d327, the BLACK-SCREEN root):** the class isn't only struct fields —
  it's any **16-bit value typed 32-bit** so the recompile reads the WORD where stock read the halfword.
  Here the RTC/watch-counter status regs `_DAT_40090004`/`_DAT_40090006` (globals.h) were `uint32_t`:
  `read_watch_counter_bit15` did a 32-bit MMIO read `0x40090006` → big-endian `0x80000000 & 0x8000 = 0`
  (should be `0x8000`, true), so the watch-counter ISR skipped the whole RTC clock-tick path → task
  timeouts never advanced (`act_tsk` 1× vs stock 502×) → periodic UI/display task never ran → the LCD
  framebuffer base regs (0x40040308/328/334) were never programmed → **black screen** (boots to idle,
  profile matches stock, but nothing renders). `clock_set_check`(`0x40090004`) 32-bit read also wrongly
  caught 0x40090006's byte. **Fix:** type the regs `uint16_t` in globals.h + `touch` the DAT_40090004/06
  users (same header-mtime workflow as the vtable fix). **Detection (deterministic — don't guess per
  reg): `scripts/mmio_width_check.py`.** The ORIGINAL firmware is ground truth for access width: it
  disassembles stock for `ldi:32 #mmio,rR` then the first load/store via `@rR` (`ld`/`lduh`/`ldub` =
  0x04/05/06 = 32/16/8; `st`/`sth`/`stb` = 0x14/15/16), stopping if rR is clobbered, and flags every
  globals.h `DAT_<addr>` typed WIDER than the original ever accesses. Fix = retype to the max observed
  width + touch the users. d327 sweep: 28 regs declared uint32_t that stock only accesses 16-bit
  (0x4006xxxx, 0x4007000c, 0x400a00xx, 0x400d000x, 0x400e001x, 0x40100xxx, 0x40128xxx, 0x401c01xx, …).
  The tool correctly skips the already-fixed RTC pair, validating it. (This replaces the old
  `grep '& 0x8000'` heuristic — compare against the original's real width instead of guessing.)

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

## B-3c · `__frv_reg_unset(N)` where rN IS a declared parameter (one param split in two) ← **boot-unlock: cleared the handover deadlock**
- **Symptom:** a value the caller passes correctly arrives WRONG at an inner call — most dangerously a
  µITRON timeout/flag argument, flipping *block-forever* into *poll* (busy-spin) or vice-versa.
- **Decompiler signature:** the function DECLARES a parameter that maps to register `rN`
  (r4=param1 … r7=param4) but then references `__frv_reg_unset(N)` (a RAW read of `rN`) instead of
  the parameter name — the decompiler split one incoming register into both a named param and an
  "unset" read. fcc keeps the named param (spilled) but freely clobbers the raw register with
  intervening work, so `__frv_reg_unset(N)` reads garbage.
- **Discriminator (high-confidence, low-noise):** the param mapped to `rN` is declared but **never
  used by name** in the body, so `__frv_reg_unset(N)` is its only reference. (Plain `__frv_reg_unset`
  with no corresponding param is the ordinary B-3 dropped-arg, handled there.)
- **Detection:** per `.c`, map each `__frv_reg_unset(N)` to param index `N-3`; flag if that param is
  declared but unreferenced by name. Filter to on-path. (832 raw tree-wide → 59 on-path call-arg →
  8 high-confidence.)
- **Fix:** replace `__frv_reg_unset(N)` with the declared parameter name. (Recovering the real value,
  not guessing: the caller passes it, the function declares it.)
- **Root instance:** `mbx_receive_message_104598e8` forwarded `__frv_reg_unset(6)` as the
  `realos_rcv_mbx` timeout instead of `param_x2`; fcc's `*param_2=0` store clobbered r6 → timeout `0`
  (E_TMOUT) instead of `-1` (TMO_FEVR). The CPUCOM task busy-retried every timer tick → idle task
  never ran → app tasks never produced to its mailbox → **whole-boot handover deadlock**. Fix dropped
  candidate fn-entries 5.33M → 52k.
- **Status:** root + 8 on-path high-confidence instances swept.

## B-3d · register-forwarder trap wrapper: callee uses `__frv_reg_unset(N)`, callers dropped the delay-slot `ldi #k,rN` ← **the menu poll (d329)**
- **Generalization (Andrew, d329):** "the argument gets stomped in favour of a broken implicit register
  pass." A function receives an argument *implicitly via a register* set by the caller (often in the
  call's **delay slot**, `ldi #k,rN; call:d`). The decompiler (a) dropped the caller's `rN` setup — the
  caller's C passes NO arg — and (b) made the callee read `rN` via `__frv_reg_unset(N)` (stub → **0**,
  and it clobbers r4-r7). So EVERY caller's argument becomes 0. Distinct from B-3c (there the callee HAS
  a declared param): here the callee has NO param and is a thin forwarder (often to a µITRON trap).
- **Root instance:** `check_kernel_call_success_10459fea` (0x10459fea) — a **timed-wait** trap wrapper:
  the original traps to `allocate_kernel_object_1000e4e0` (service uses `r4` = a **timeout in ticks**).
  **92 caller files / 153 call sites**, each with a DIFFERENT timeout in its delay slot (0xa×28,
  0x3e8×22, 0x1×21, 0x32, 0x64, 0x7d0, 0x14, 0x1f4, … + a few computed/variable). Decompile dropped all
  of them → every timed wait gets timeout 0. Menu link: `poll_context_flag_until_status_set` passes r4=1
  (1-tick per-iteration yield); with r4=0 the poll never yields, the companion-SPI handshake never spins,
  and the cpucom status byte `+0x28` is read prematurely → the poll breaks after 1 iter → event 0x10002
  / flag 0x37 never fire → black screen.
- **Detection:** `scripts/detect_reg_unset.py` (476 thin forwarders with a FORWARD `__frv_reg_unset`).
  Per forwarder, the caller timeouts are recoverable from the original: `scripts/fix_check_kernel_timeout.py`
  disassembles each caller, reads the delay-slot `ldi #k,r4`, and injects it (88/92 files auto-match on
  call-site count; the rest are loops / computed args → manual).
- **Fix:** give the wrapper a real parameter and pass each caller's recovered value:
  `check_kernel_call_success_10459fea(uint timeout){ return __trap_allocate_kernel_object_1000e4e0(timeout)==0; }`
  then update every call site. (Pure non-trap forwarders may instead use harvest_asm, but harvest's
  trap→direct-call rewrite makes it WRONG for kernel-service wrappers — see B-16 note.)
- **Status (d329):** mechanism verified via a poll-only inline probe; full 153-site sweep in progress.

## B-3v · vtable-dispatch helper drops a FORWARDED register arg ← **the mode-event / menu unblock (d329)**
- **Generalization (Andrew, d329):** "I suspect the vtables suffer from the same dropped argument bug …
  and this might not be the only vtable slot with this problem." A tiny helper loads a member pointer and
  dispatches through a **runtime vtable** (`ld @r0,r12; … call:d @r12`). Between its entry and that
  dispatch it NEVER writes r5/r6/r7, so whatever the CALLER put in those registers flows straight through
  to the vtable target. Ghidra gave the helper a **1-parameter** C signature (just the object), so fcc is
  free to clobber r5 before the dispatch → the forwarded argument arrives as garbage. Same family as
  B-3/B-3d (dropped register arg) but the drop is at a *virtual dispatch* the decompiler can't resolve, so
  it can't see the arg is live past the call.
- **Root instance:** `invoke_virtual_slot_3_on_member_10466604` (0x10466604, member `+0x134`, vtable slot
  3). Callers set r5 = the **mode EVENT** (`ui_task6_body` 0x10002/0x10003 by a branch on the transaction
  result; `cpucom_poll_driver` 0x10001) and the slot-3 target is `mode_ctrl_on_event`, which reads the
  event as `param_2` and, for 0x10002/0x10003, runs `set_flg(flag 0x37, 0x4)` → unblocks the mode pump
  (`wai_flg(flag 0x37, TMO_FEVR)`) → menu renders. Dropped event → no flag → deadlock.
- **Detection:** `scripts/detect_vtable_dropped_arg.py` — STRUCTURAL, reads only FWDC162B.BIN: a helper is
  a dropper iff (a) it leaves r5/r6/r7 unwritten before its `call @rN`/`call:d @rN` dispatch AND (b) a
  caller sets that register just before the call. Sweep of 78 single-C-param `invoke/call_virtual_slot_*`
  helpers: **25 where a caller loads an IMMEDIATE** into a forwarded reg (near-certain), 10 reg-sourced
  (need runtime confirmation). **Incontrovertible** = callers pass DIFFERENT constants to the same reg
  (distinct constants ⇒ it's an argument): `0x10466ffa` r5∈{0x40001,0x40002,0x40003},
  `call_virtual_slot_8_after_init` r5∈{0x2,0xd}, `invoke_virtual_slot_5_on_nested_object` r5∈{0x1,0xffff}.
- **Fix (per helper):** add the forwarded reg as a real parameter, forward it in the dispatch call, update
  the prototype in `funcs.h`, and pass each caller's recovered constant. Exactly the B-3d recipe at a
  virtual call. CAVEAT: `(reg)`-sourced forwards (not an immediate) need trace/stock confirmation that the
  vtable target actually reads the register — the detector flags candidates, runtime confirms consumption.
- **Status (d329):** root instance (0x10466604) fixed (3 files) + building; `0x10466ffa` (same slot-3
  pattern, +0x2c, events 0x40001-3) prepped. Remaining 23 strong candidates in the scripts report.

## B-13 · kernel-descriptor stack-split (multi-word trap descriptor emitted as non-adjacent locals) ← **B-1 variant; the menu-blocker chain**
- **Symptom:** a created kernel object (eventflag, cyclic handler, queue, task) gets a GARBAGE field
  (initial flag pattern, handler ptr, exinf), or a 2-word kernel *result* loses its second word
  (always 0). Downstream: an eventflag whose `iflgptn` is a stray pointer matches a `wai_flg` ORW wait
  that should block → task runs when it shouldn't → crash; a cyclic handler with a garbage entry →
  `act_tsk` jumps to garbage / SP corruption → derail-to-0. Crash is FAR from the builder.
- **Decompiler signature:** a thin kernel-service wrapper builds a multi-word descriptor as **separate,
  non-adjacent, DESCENDING** stack locals (`uStack_c`@sp+0xc as the base, `uStack_8`@sp+8 = base−4, …)
  then passes `&uStack_c` to a `__trap_…`. The kernel reads the descriptor **ascending** (base+0,
  base+4, base+8), so the 2nd/3rd field lands on base+4 = an UNINITIALIZED slot (often the dropped
  `uintptr_t sp;` local), never on `uStack_8`. Output variants: the trap writes base+4 but the wrapper
  reads back `uStack_8` (base−4) → that result word is lost (reads its init value, usually 0).
- **This is B-1 (struct-split) specialised to a stack descriptor at an ABI/trap boundary** — same
  "contiguous record emitted as loose locals" root; distinct tell = the *order/adjacency* is wrong
  (not reading past a declared struct), and it straddles a `__trap_`.
- **Verify the field order against STOCK, don't guess:** PCLOG the kernel service entry on the stock
  image and dump `*param @ +0/+4/+8` — those are the exact values/layout the recompile must reproduce.
- **Fix:** replace the loose locals with ONE contiguous array (`uint32_t desc[N]` / `uint16_t desc[N]`)
  in ascending order matching the kernel read, pass `desc`.
- **Instances (unit 127_rtos_kernel_services):** `alloc_or_acquire_heap_block` — `{attr,iflgptn=param_3}`;
  iflgptn garbage was **the flag-0x35 root** (display task's `wai_flg` returned a stray pointer
  `0x6a004b24` instead of blocking → `grow_dynamic_buffer` null-alloc derail @ic 5.58M; stock
  iflgptn=0). `create_kernel_object` — `{attr,exinf=param_1,handler=call_virtual_slot_2_on_nested_object
  0x10459448}`; garbage handler → `act_tsk`/`populate_context_from_global_state` SP-corruption derail.
  `create_or_open_kernel_object` — `{attr,param_4}` halfwords. **PENDING (not on boot path, correctness):**
  `call_helper_with_two_word_struct` (input), `query_two_word_result` + `wait_sem_obj` (output, 2nd word
  lost). See TODO.md.
- **Sweep rule:** functions passing `&<stacklocal>` to a `__trap_…` with 2+ descriptor locals where the
  trap reads/writes >1 word. `execute_*` with a single `&sStack_a` output is NOT this (one word).

## Notes / refinements (this session)
- **B-9 instance #18 the classifier MISSED — `fill_struct_from_lookup_table` (unit 283).**
  `(uint *)(&param_1->field_0x108 + iVar4)` with `field_0x108` a `uint32_t` → the byte step `iVar4`
  (0,0x40,0x80,0xc0) scaled ×4 → writes at 0x208/0x308/0x408 (should be 0x148/0x188/0x1c8), overrunning
  the object and zeroing an adjacent vtable ptr → null-vtable derail INSIDE
  `initialize_seven_subobject_container`. `scratchpad/classify_scaling.py` missed it because the scaled
  `&field + idx` sits inside an **outer `(uint *)` cast** — re-run the classifier allowing an outer cast.
- **Meta-lesson — closing an original-code jump EXPOSES accidentally-correct recompiles.** Relocating a
  vtable fn-ptr from its ORIGINAL address to the packed recompile (B-11 / no-original-jumps work) made
  boot start *running* the recompiled callee — which then hit the B-9 bug above. The original jump had
  been masking it (the correct original bytes ran). So a "regression" right after closing a leak is the
  signal to find the exposed recompile bug, **not to revert the relocation.** (FRN_INPLACE detector +
  gen_rodata_fnptrs CONFIRMED_TABLES; the detector run IS the proof the relocator wants.)
- **B-11 refinement — never relocate instruction immediates.** The confirmed-fnptr relocator mistook
  `ldi:32 #fn,rN` immediates (CODE) for rodata fn-ptrs (code/rodata interleave in this XIP image; the
  read-then-executed test can't tell `ldi;call` from a dispatch load). A `.DATA.L` at a non-4-aligned
  LOCATE was bumped +2 and overwrote the following `call` (`0x10546f26` in
  `parse_float_string_to_fixed` → null cascade → crash 0x10491cda). Both generators now reject
  misaligned addrs and ldi:32-immediate operands. (`scripts/gen_rodata_fnptrs.py`, `find_called_fnptrs.py`.)
- **B-9 global variant.** `settings_load_from_flash`: `&DAT_8001ded8 + iVar2` scaled ×4 (DAT is
  uint32_t*) — the global/asymmetric form (source side already cast `(char*)`, dest didn't). Smeared
  the 0x344-byte settings copy across adjacent EC objects → ec_configure dispatch through garbage.
- **Harvest / mis-split (B-8 workflow).** Incoming-register kernel fns (context switch, task mgmt)
  need byte-faithful asm (`scripts/harvest_asm.py`). ALWAYS verify the WHOLE-function extent first:
  Ghidra mis-splits these (e.g. the context-restore was ONE function `0x1000d032-0x1000d100` with an
  internal loop, split into 3 — mid-function labels never called, `0x1000d0fe: bra 0x1000d032`).
  Use `harvest_asm.py <name> <start> <end>` (subsumes fragments); the 1-arg auto mode inherits the
  split and places fragments at separate packed addrs, breaking internal control flow.
- **Identify this class statically, not by tracing.** fcc emits `W1549B "used before set"` for every
  incoming-register read; build.sh now surfaces non-W1450B warnings. Sweep from that list, don't
  rediscover one per codiff round.

## B-15 · merged-case / fabricated-constant (decompiler collapses switch arms, keeps ONE constant) ← **the menu-cascade root (d328)**
- **Symptom:** a function that raises a DIFFERENT event-flag bit (or passes a different constant)
  per event code gets its `switch`/`if` arms MERGED by the decompiler into fewer branches, keeping
  only one arm's constant. Compiles clean, passes arity + single-site disasm checks, silently does
  the wrong thing for every dropped case. A downstream waiter that wants the dropped bit never wakes.
- **THE instance (first divergence in the boot signal cascade):** `handle_event_flags_and_signal`
  (0x10498702, unit 200_menu_event_router). Original BEQ cascade: param_2 0x10032→set_flg 0x1 (+sig_sem),
  0x10033→0x2 (+sig_sem), 0x10036→0x4, 0x1000f→(*param_3?0x10:0x8). Decompiler merged 0x10032|0x10033→0x2
  and 0x10036|0x1000f→0x10, and DROPPED param_3 (r6, a B-3). So 0x10032 raised bit 0x2 not 0x1; the
  flag-0x34 waiter waits for 0x1 → stayed asleep → whole signal cascade (set_flg/sig_sem/snd_mbx) died
  at the 6th signal → black screen. **FIXED (d328).** Found by int40 cand-vs-stock signal-sequence diff
  (scripts: the ordered (service,id,pattern) compare — cand matched stock for 5 signals then set flag
  0x34 = 0x2 vs stock 0x1).
- **Detection:** `scripts/detect_merged_cases.py` — builds the intra-function branch graph and flags any
  `call set_flg_obj` reached by >=2 distinct `ldi #k,r5` constants where the C has no ternary / is missing
  constants. **22 suspects** (mostly event dispatchers on the menu path: dispatch_event_by_id/_by_type,
  ui_request_dispatch, mode_nav_request, validate_*_and_set_flag, ...). NOTE: `verify_setflg.py` (linear
  scan) is BLIND to this class — it matched whichever arm's constant the linear scan saw last and reported
  false OK (e.g. poll_input call@10413818 is `cond?0xc000000:0x4000000`, C kept only 0x4000000). Always
  reconstruct a flagged function's full param→pattern map from disasm; do not trust the linear verifier.
- **Fix:** un-merge the arms — one C branch per original case with its real constant (recover from the
  BEQ/cmp cascade: op_b=2 is EQ, op_b=3 is NE per emulator cond(); frdis mislabels bnc/bne). Thread any
  dropped register arg (B-3). Verify each constant against the `ldi #k,r5` that reaches that call site.

## B-16 · __frv_reg_unset(N) STUB breaks register-forwarders ← **THE menu-boot root (d328)**
- **The stub:** `uint32_t __frv_reg_unset(int reg){ return 0; }` (cpu/src/__frv_stub.c) — a sentinel
  for "incoming register N whose value the decompiler couldn't recover." It is a real FUNCTION, so
  `__frv_reg_unset(4)` (a) returns 0 and (b) as a call, CLOBBERS caller-saved r4-r7.
- **Symptom:** a thin forwarder whose job is to pass its AMBIENT incoming registers to a callee/trap
  instead passes 0 (and garbage r5-r7). The original has NO prologue and tail-forwards the live
  registers; the recompile emits `call __frv_reg_unset(4)` then `call trap(result=0)`.
- **THE instance (menu-boot blocker):** `check_kernel_call_success_10459fea` (0x10459fea, ~95 callers) —
  the cpucom poll body. Original: `call allocate_kernel_object_1000e4e0` with ambient r4(=1 from
  poll_context_flag)/r5(=1000)/r6(=3); returns (ret==0). Recompiled C:
  `__trap_allocate_kernel_object_1000e4e0(__frv_reg_unset(4))` -> trap gets r4=0, r5-r7 clobbered.
  Kernel service 1000e4e0 then misbehaves -> poll_context_flag loop exits after 1 iter (stock=501) ->
  **no cpucom companion SPI handshake** (FRN_DSP_LOG: stock POST/A/H/B, candidate 0 exchanges) -> 'H'
  never arrives -> flag 0x37 never set -> process_mode_transition_sequence stuck forever at
  check_bit2's wai_flg(flag 0x37) -> no Cmd:04 POST queued -> **black screen**.
- **Detection:** `grep -rn '__frv_reg_unset' cpu/src` — for each, ask: does the function FORWARD that
  register to a callee/trap (vs use it as a local pointer/value that the stub-0 happens to satisfy)?
  Forwarders are the dangerous ones. On a critical path they deadlock boot.
- **Fix:** such a function reads incoming caller registers = BESTIARY B-8; the faithful implementation
  is the original bytes. `python3 scripts/harvest_asm.py <name>` emits them to cpu/gen/*.asm (ldi:32 of
  recompiled funcs rewritten to symbols) and renames the .c to .c.handasm. Applied to
  check_kernel_call_success_10459fea (d328). Alternative: thread the real register as a C param through
  all callers (a B-3 sweep) — much larger, and still needs the ambient r5-r7 preserved.
- **Status:** check_kernel_call_success harvested; build+retrace+DSP_LOG verification in flight (build9).

## B-16 CORRECTION (d328): harvest_asm is the WRONG fix for functions that call KERNEL SERVICES.
## harvest_asm rewrites `ldi #0x1000xxxx` (a kernel service) to the RECOMPILED symbol -> a DIRECT
## call to the recompiled service body. But kernel services must be reached via the int#0x40 TRAP,
## which the vector table routes to the ORIGINAL handler (vectors still point to original). Calling
## the recompiled service body directly runs it in task context and hits its own bugs -> corrupts
## kernel state. Harvesting check_kernel_call_success_10459fea REGRESSED the candidate from 7 signals
## to 0 (poll 1->0). REVERTED (cc46cfc9). ALSO: the candidate produced its 7 signals WITH the r4=0
## __frv_reg_unset bug present, so check_kernel_call_success is NOT the menu-deadlock root. B-16 (the
## __frv_reg_unset stub returning 0 + clobbering) is a REAL class (475 thin forwarders) but: (a) fix
## trap-calling ones by threading the register as a C param + keeping the __trap_ call (NOT harvest);
## (b) it is off the menu-deadlock critical path. The deadlock remains the cpucom circular bootstrap
## (check_bit2/flag 0x37 <-> companion handshake <-> mbx-4 <-> process_mode_transition_sequence).
