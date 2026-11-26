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
- [ ] Sweep the rest: `detect_reg_unset.py` ranks 476 thin FORWARDERS first. Generalize per-caller value
      recovery (fix_check_kernel_timeout.py pattern) into a reusable tool. On-path (cpucom/menu) first.

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
- [ ] call_helper_with_two_word_struct (127) — 2-word INPUT. NOT on early boot path (dispatch_kernel_
      service_10010b10 unhit in 25s) → correctness, not a menu blocker. Verify kernel reads +4, then fix.
- [ ] query_two_word_result (127) — 2-word OUTPUT; 2nd result word lost (trap writes base+4, fn reads
      uStack_8 @ base-4). Verify + fix.
- [ ] wait_sem_obj (127) — returns uStack_8 (never written by trap) → always 0. Verify + fix.
  NOTE: a general detector/lint for this class (stack locals forming a descriptor, non-contiguous, &base
  to a kernel trap) would be worth building — likely more instances exist beyond the sweep's grep.

## No-original-jumps campaign (FRN_INPLACE detector is the gate; op_helper.c, uncommitted)
- [~] FRN_INPLACE re-run on build10 candidate (d328): 4 leaks found (old 3 gone). FIXED 3 cpucom-path
      vtable-slot leaks via confirmed_fnptrs.txt (build11): invoke_virtual_slot_3_on_member_10466604 ->
      mode_ctrl_on_event (slots 0x1059f0bc/0x1059f104, VT_1059f088 truncated at 8 slots);
      invoke_virtual_slot_3_on_member_10466ffa -> dispatch_event_to_subobject (0x105d5140/60);
      dispatch_context_virtual_op -> toggle_byte_and_call_helper (0x105a0894) [INSIDE cpucom_execute_transaction].
- [~] FRN_INPLACE re-run on the d329 menu-fix build (3214832c): 3 leaks. FIXED 2 function-entry leaks via
      confirmed_fnptrs.txt — slot 0x105a05ec -> dispatch_event_if_below_threshold (was orig 0x1043c430, in
      invoke_virtual_transfer_on_context); slot 0x105a05f4 -> forward_bool_to_helper (was orig 0x1043c496,
      in spi_poll_complete — SPI-path). Both adjacent fn slots of one vtable. Pending rebuild to confirm gone.
- [ ] Leak #1 (0x1048222c via slot 0x105ab64c = query_object_via_virtual_call_10480050) is a MID-FUNCTION
      target (cls_105ab600_delete+0x5a), NOT a function entry -> can't relocate to a symbol; it's a
      computed-jump/switch leak needing a different fix (fix the jump table or the function).
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
