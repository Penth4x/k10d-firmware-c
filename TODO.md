# K10D firmware-c — outstanding TODOs

Living checklist of known-but-unfixed work. Add here the moment something is deferred; check off when
a link confirms it. (Detail/rationale lives in NEXT_STEPS.md.)

## B-3d / `__frv_reg_unset` elimination (Andrew d329: "we should really not tolerate that unresolved register thing in the codebase at all")
Each `__frv_reg_unset(N)` = an incoming register the decompiler couldn't trace to a param; the stub
returns 0 AND clobbers r4-r7, so every implicitly-register-passed argument is stomped to 0. STANDING GOAL:
drive the count to 0. **Debt baseline (d329): 2145 uses / 860 files (2140 as call args).**
- [x] `check_kernel_call_success_10459fea` — timed-wait wrapper, 153 call sites, each a different dropped
      timeout → all became 0. Signature now `uint32_t timeout`; all 92 caller files updated (84 auto via
      `fix_check_kernel_timeout.py`, 8 manual incl. computed/param args). (A poll-only sub-fix verified the
      mechanism but did NOT fix the menu — menu blocker is a separate kernel-handler-activation timing;
      testing whether the full 153-fix shifts it.)
- [~] Sweep the rest: `detect_reg_unset.py` ranks 464 thin FORWARDERS. Done (d329): 11 TRIVIALLY-fixable
      ones where the sig ALREADY declared param_x0.. but the body used __frv_reg_unset(N) — replaced with
      the forwarded param (param_x(N-4)); each VERIFIED flow-through vs original asm (the forwarder doesn't
      write rN before the call). Files: call_single_helper_{1046cadc,10395e3e,10395f4e,1043ed1e,1047f97e,
      10485dd8,104e4ffa}, call_single_argument_helper_1036bd60, call_two_unnamed_helpers_104b3dc4,
      call_helper_and_return_one_104d84c0, lens_fw_update_slot3. CAVEAT for the rest: the `(void)`-sig
      forwarders (~9+ more, verified flow-through) CANNOT be fixed by just adding a param — their CALLERS
      were decompiled assuming void and don't pass the arg, so adding a param CHAINS (breaks callers). Those
      need harvest_asm (asm forwards registers regardless of C sig) OR a caller-chain pass. On-path first.
- [~] HARVEST_ASM BATCH 1 (d329, build in flight): harvested 60 thin FORWARD-only forwarders to byte-faithful
      asm via `scripts/harvest_asm.py $(detect_reg_unset.py thin list)`. All 60 clean (ZERO branch-outside-body
      / ldi:32-as-data warnings); each emits prologue + `LDI:32 #_callee,R12` (symbolic, correctly rewritten) +
      `call @r12` + epilogue — r4-r7 untouched so the incoming regs flow through (the whole point; the C decompile
      broke it to reg_unset=0). .c renamed .c.handasm (stops the broken dup symbol); cpu/gen/*.asm auto-assembled
      by build.sh. VALIDATED the mechanism first on one (call_single_helper_103d0358, reverted). Commit ONLY after
      checksums VALID + dsp no-regression. detect_reg_unset caps its printout at 60 — re-run after each batch for
      the next 60 (harvested funcs become .c.handasm, excluded from the *.c scan). ~400 forwarders remain.
      B-16-SAFETY CLEARED (per BESTIARY B-16 CORRECTION: harvest is WRONG for forwarders that call a KERNEL
      SERVICE — it redirects `ldi #0x1000xxxx` to a buggy recompiled copy instead of the trapped original;
      harvesting check_kernel_call_success_10459fea regressed 7->0 signals, reverted cc46cfc9). Verified ALL 60:
      the 9 distinct LDI:32 call targets are ALL app region (0x103c..0x104e), ZERO kernel (0x1000xxxx), ZERO
      int#0x40. Harvest here only fixes the ARGS (forwards the real reg vs reg_unset=0); the call target is the
      SAME function the C version already called. So the B-16 regression class does NOT apply to this batch.
      PRE-HARVEST CHECK FOR FUTURE BATCHES: grep each gen asm's LDI:32 targets; any whose origVA is 0x1000xxxx
      (kernel) must be EXCLUDED from harvest and fixed the B-3c way (thread reg as C param, keep __trap_).

## Menu blocker (active) — boots to idle, BLACK SCREEN
- [x] descriptor-split creates cleared the `act_tsk` derail (ic~5.58M) → boots to stable idle (9aa78ec3).
- [x] **B-3 reg_framework_send MESSAGE-BUS** — THE black-screen deadlock root. Candidate sent only 1
      mbx_send_message (stock 43); all mailbox-pump tasks blocked TMO_FEVR at idle. Swept all 85 callers
      (committed cea35227). Forwarder verified correct in the relinked candidate (forwards r5/r6 unchanged).
- [ ] **VALIDATE** (in flight, `bqcys6vh0`): candidate mbx_send_message count should jump 1 → ~35+.
      Then `scripts/check_display.sh`: does it reach display-init (write_three_config_values packed
      0x10822322) and program LCD base 0x40040308? Then screenshot / run.sh gui for the menu.
      NOTE: display-init is deep (stock ~ic107M); a 200s wall may not reach it — use a longer WALL or
      run.sh gui if the send count recovers but display-init is unhit.
- [ ] NEXT divergence after the bus (re-measure, don't assume): candidate may now reach the menu-item
      render / appobj+0x44 navigation (older framings in NEXT_STEPS). Use DIRECT traces, not codiff
      (codiff/fnseq unreliable — d324 methodology memory).
- [ ] 3 reg_framework_send callers were best-effort (branchy/mangled decompile): iterate_and_check_
      queue_items, dispatch_lens_comm_command, initialize_mode_context — Ghidra re-verify (off menu path).

## Descriptor-split bug class (decompiler emits a multi-word kernel descriptor/result as non-adjacent
## descending stack locals; kernel reads ascending → 2nd/3rd word is garbage). Fix = contiguous array.
- [x] alloc_or_acquire_heap_block (127) — eventflag iflgptn garbage (flag-0x35 root). Stock-verified.
- [x] create_kernel_object (127) — cyclic-handler create; garbage handler → act_tsk SP corruption.
- [x] create_or_open_kernel_object (127) — {attr, param_4} halfword descriptor.
- [x] call_helper_with_two_word_struct (154) — 2-word INPUT. VERIFIED vs orig asm 0x1046d13e (contiguous
      desc at sp-8) and FIXED (d329): the trap read word1 from base+4 (garbage) not uStack_8 (base-4);
      now a contiguous uint32_t desc[2]. Used by display_sync_driver (unit 153) — relevant to display out.
- [x] query_two_word_result (154) — 2-word OUTPUT. VERIFIED vs orig asm 0x1046d166 and FIXED (d329): 2nd
      result word (base+4) was lost (read from uStack_8 @ base-4, always 0); now contiguous desc[2], read
      desc[1]. Used by display_sync_driver (unit 153).
- [x] B-13 descriptor-split class SWEPT (d329): a generalized detector (pass &..Stack_N to a __trap_ with a
      ..Stack_(N-4) pair) finds NO remaining instances beyond the 3 fixed this session + create_kernel_object.
- [x] wait_sem_obj (127) — returned uStack_8 (sp+8, base-4) which the trap never writes → ALWAYS 0; the
  real result (base+4) was lost. VERIFIED vs original asm (0x10459f36: contiguous desc at sp-8, returns
  *(sp-4)) and FIXED (d329): contiguous uint32_t desc[2], return desc[1]. Behavioral impact: caller
  check_two_conditions_on_object (unit 117) tests `wait_sem_obj()==2` — a DEAD branch with the always-0 bug,
  now reachable. Build checksums VALID. A firmware-wide scan for this exact pattern (pass &localA to a
  __trap, return a different all-zero localB) found NO other instances — wait_sem_obj was the only one.

## No-original-jumps campaign (FRN_INPLACE detector is the gate; op_helper.c, uncommitted)
- [~] FRN_INPLACE re-run on build10 candidate (d328): 4 leaks found (old 3 gone). FIXED 3 cpucom-path
      vtable-slot leaks via confirmed_fnptrs.txt (build11): invoke_virtual_slot_3_on_member_10466604 ->
      mode_ctrl_on_event (slots 0x1059f0bc/0x1059f104, VT_1059f088 truncated at 8 slots);
      invoke_virtual_slot_3_on_member_10466ffa -> dispatch_event_to_subobject (0x105d5140/60);
      dispatch_context_virtual_op -> toggle_byte_and_call_helper (0x105a0894) [INSIDE cpucom_execute_transaction].
- [x] FRN_INPLACE on the d329 menu-fix build: 3 leaks. FIXED 2 function-entry leaks via confirmed_fnptrs.txt
      — slot 0x105a05ec -> dispatch_event_if_below_threshold (was orig 0x1043c430, in
      invoke_virtual_transfer_on_context); slot 0x105a05f4 -> forward_bool_to_helper (was orig 0x1043c496,
      in spi_poll_complete). VERIFIED GONE after fixing a build-hygiene bug: build.sh did NOT run
      gen_rodata_fnptrs.py, so confirmed_fnptrs.txt edits silently no-op'd (first rebuild still showed them).
      Wired the regen into build.sh. Remaining: leak #1 (mid-function, below) + a NEW kernel leak
      0x10760f12 -> 0x1000d100 (packed->original kernel call; triage whether it is a real leak or a trap).
- [ ] Leak #1 (0x1048222c via slot 0x105ab64c = query_object_via_virtual_call_10480050) is a MID-FUNCTION
      target (cls_105ab600_delete+0x5a), NOT a function entry -> can't relocate to a symbol; it's a
      computed-jump/switch leak needing a different fix (fix the jump table or the function).
- [ ] Kernel leak 0x10760f12 -> 0x1000d100 (validate_and_store_task_params) TRIAGED (d329): the target IS
      recompiled (packed 0x10815f0c) but is a KERNEL task-param fn called via a fn-ptr table during act_tsk
      (runs 151x = once per reset-loop iter). This is likely a KERNEL-INTERNAL dispatch that SHOULD stay
      original (the kernel runs original code; redirecting its internal table to a packed copy risks
      breaking act_tsk). Do NOT blindly add to confirmed_fnptrs.txt — needs judgment on whether the kernel
      table should point packed or original. Leave as-is until the act_tsk/scheduler path is understood
      (it is on the menu-root critical path — see NEXT_STEPS).
- [ ] LINKER-NATIVE vtables (Andrew): emit vtables/dispatch-tables as real linker sections
      (`.DATA.L _sym` per slot) instead of per-word CONFIRMED_TABLES overlay patches — kills the whole
      undetected-fnptr class at once (no guessing fnptr-vs-data, no whack-a-mole). Start with the
      display-alloc vtable (0x105f91c0, full {adj,fn} layout already dumped). "Fix the linking" — do
      AFTER the menu works.
- [ ] Interrupt/trap VECTOR TABLE (0x10003c00): all 256 vectors still point to ORIGINAL handlers
      (byte-identical to stock) → the whole IRQ/trap-driven kernel runs original bytes. Redirect to the
      packed recompiled handlers. Needs: (a) decompile the ~40 uncataloged per-vector stubs
      (0x10490e46..0x104914xx), (b) verify recompiled ISRs are faithful under the trap (RETI/context).
      DEFERRED (kernel work) per Andrew — tackle after the menu.

## Tooling (qemu-frn op_helper.c — UNCOMMITTED, needs commit on frn-publish once stable)
- [ ] FRN_INPLACE / FRN_PCLOG(+_MEM/_ABS) / FRN_TRACE_IRQ diags + derail full-reg dump.
- [ ] Extend FRN_INPLACE to the trap/INT path (currently only call/jmp @ri) so vector-dispatched
      original handlers are surfaced too.

## B-12-MMIO class sweep (16-bit MMIO status reg typed uint32_t → 32-bit read breaks bit-15 test)
- [x] 0x40090004 / 0x40090006 (RTC watch-counter) — THE black-screen root. Fixed (globals.h uint16_t).
- [ ] Sweep candidates (bit-test above low byte on a DAT_4xxxxxxx typed uint32_t; VERIFY each reg's HW
      width before retyping — some are genuinely 32-bit): 0x40000006/0x40004006/0x40008006 (&0xfc00),
      0x40030402 (&0xbc00), 0x40100002/0x40100d00/0x40100e00 (&0x8000), 0x400f1ffc/ffe, 0x400e0014/0016,
      0x400d0004/0006, 0x400a0030/0032/0x400a0020, 0x4007000c, 0x40128108/0x40128202. Only fix the ones
      that (a) are 16-bit HW and (b) are on a path that misbehaves — confirm empirically (emulator reg
      model + the failing bit-test) like the RTC pair, don't blanket-change.

## B-14 · computed register value flattened to a single constant at the use site (NEW, d328)
Decompiler drops a switch/if-chain that computes a register, then hardcodes ONE of the branch
constants at the consuming call. Found by scripts/verify_setflg.py (disasm r5 != C literal).
- [ ] dispatch_event_to_object_1039e58c (0x1039e58c, unit 042_debug_menu_state): final
      `set_flg_obj(&field_0xcc, 0x8000000)` — real r5 = r9, a switch-computed event-flag bit set
      per param_2 (0x40000/0x80000/0x10000/0x100000/0x200000/0x400000/0x800000/0x1000000/0x2000000/
      0x4000000/0x8000000/0x20000/0x80000...; default 0) in the big param_2 dispatch at the top.
      The whole r9 bit-selection was LOST in the decompile. Needs the param_2->bit table rebuilt
      from disasm (1039e59a..1039e950). VERIFY on-path first (042_debug_menu — may be off the
      Language-menu path). The 0x400 (line136) and 0x8000 (line200) set_flg_obj calls ARE correct.
- [ ] Sweep: re-run verify_setflg.py after each build; extend it to other kernel-arg forwarders
      (sig_sem/set_flg patterns) to catch the same flatten-to-constant class elsewhere.
      NOTE (d329): some "thin forwarders" are actually LARGER multi-path functions the decompiler
      UNDER-captured (only saw the first forwarder block); harvest_asm emits the full byte-faithful
      extent (stops exactly at the next @k10d VA), so it FIXES the under-capture — strictly more faithful
      than the incomplete .c. Verified 103d0dda (56 bytes, ends at set_mode_and_update_timeout 0x103d0e12).
