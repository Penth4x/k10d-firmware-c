# K10D firmware-c — outstanding TODOs

Living checklist of known-but-unfixed work. Add here the moment something is deferred; check off when
a link confirms it. (Detail/rationale lives in NEXT_STEPS.md.)

## Menu blocker (active) — boots to idle, BLACK SCREEN
- [ ] Confirm the descriptor-split create fixes clear the `act_tsk` derail (populate_context_from_global_state
      @ ic~5.58M) and boot advances toward the menu idle (0x1000f530). — link `belelev3l` in flight.

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
- [ ] 3 remaining packed→original leaks surfaced after boot went deeper (re-run FRN_INPLACE to refresh):
      0x10493dc4 (a THIRD ref — a vtable slot, not the 2 fixed call-sites), 0x103a5688, 0x10491c22.
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
