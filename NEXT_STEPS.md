# Next steps — open investigation (handoff)

## Where boot is now (d327: vec41 lead DEBUNKED; REAL crash = full chain traced to a null menu-item render object)
Deadlock cleared (B-3c mbx timeout, 6c4036c2). Candidate reaches ~47k fn-entries vs stock ~159k, then
DERAILS to PC=0 at ic=5,585,789 (FRN_NO_REBOOT=1 FRN_DERAIL=1). Without NO_REBOOT it reboot-loops.

### vec41/RTC lead was WRONG (measured, not guessed).
FRN_TRACE_IRQ (added this session): candidate DOES receive vec41 (intc_init unmasks ICR25@0x459=0x14
in BOTH; 250 deliveries cand / 895 stock). Prior NEXT_STEPS built on a stale codiff. Refuted.

## THE CRASH CHAIN (fully traced, each level measured via FRN_PCLOG + FRN derail reg dump)
Derail = `call:d @r0` with r0=0 (image bytes 9f10 @ packed 0x10721a2a). Chain, innermost first:

1. `grow_dynamic_buffer_1045cb38` (+0x50): virtual call `vtbl[2].fn` (vector allocator slot) with a
   garbage vector `param_1 = 0x18` -> vtable deref yields fn=0 -> call 0 -> PC=0. (std::vector growth,
   unit 130.) iVar2=1 => growing an EMPTY vector.
2. `forward_struct_and_second_field` (0x1045cb1c): thin wrapper, passes param_1 through.
3. `glyph_draw` (0x10492fde, "render_char_sequence", unit 196): calls
   `forward_struct_and_second_field(param_1 + 0x18, glyph)`. param_1+0x18 = 0x18 => **glyph_draw's
   param_1 = NULL**. It renders a real string (0x801daaed) into a NULL target.
4. `register_menu_item_with_status_104cf4e6` (0x104cf4e6, unit 240): does
   `pvVar3 = menu_item_register(*(param_1+0x38)); glyph_draw(pvVar3, buf);` -> **pvVar3 = NULL**.
5. `menu_item_register` (0x10491efc, unit 194): `obj=*(param_1+0x10); vt=*(obj+0xc);
   return vt[25].fn(obj+adj);` -> the slot-25 virtual getter **returns NULL** (the render target).

### KEY: levels 4 & 5 are CANDIDATE-ONLY (stock=0, cand=1 in the 90s codiff window).
register_menu_item_with_status (104cf4e6) and menu_item_register (10491efc): stock NEVER runs them in
159k entries; candidate runs each once -> crash. glyph_draw: stock=2 cand=3 (the 3rd = fatal). So like
the init4 chain, this is a CONTROL-FLOW / ORDERING divergence: the candidate enters menu-item
registration (reached via a woken task: trace context = rtos_sched_start_gate / kernel_wai_flg_svc /
clear_task_flag_bits -> empty_lens_update_stub_10537076 -> register_menu_item_with_status) while the
target object's slot-25 getter still returns NULL (object not yet constructed, or wrong branch taken).

## NEXT (two candidate roots — disambiguate):
A. ORDERING/premature: candidate reaches menu registration before the render object graph is built.
   Find why the candidate's task is dispatched here but stock's isn't (eventflag/scheduler timing or a
   decompiler branch bug in the task that leads into 104cf4e6). This matches the session's pattern
   (init4 chain at irq_dispatch was also candidate-only).
B. CONSTRUCTION: menu_item_register's slot-25 getter genuinely returns null due to a mis-built object.
   Capture the object graph at the fatal call: PCLOG 0x10491efc (packed) for param_1(r4), then read
   SDRAM *(param_1+0x10), *(+0xc)=vtable, vtable[25] (offset 0xcc). If vtable valid but slot-25 fn is a
   real function returning 0 -> trace that getter; if vtable/obj null -> construction bug (B-1/B-2/B-9).
   (No SDRAM-dump tool yet; add a one-shot mem dump to the derail handler or use QMP pmemsave.)

Recommended: do B first (one measurement decides object-valid-vs-null); if object is valid, pivot to A.

## Tooling added this session (qemu-frn op_helper.c, NOT committed):
- FRN_TRACE_IRQ: also logs ICR25 unmask transitions + vec41 ILM/handler-range drops.
- FRN_PCLOG=<hex>: prints ic + r4..r7 + rp each time PC hits <hex> (function-entry/arg logger). The
  last line before a derail = the fatal invocation's args+caller. THE tool that traced this chain.
- derail handler now dumps all 16 regs + rp + tbr at the fault.

## Prior fixes (committed, NOT pushed): B-11 297af7dd; B-9 a464c6fa; build-integrity 20fe8572;
tooling 3fe48a77; harvest eb28636c/5956f240; B-3c mbx 6c4036c2; B-3c sweep 5619ca69.

## Tools: codiff.sh (FIRST=1 trips on benign timer-ISR interleave block 100080d2/10537118/1000d268/
1053706c/1000fa2c/1000d498 — filter it). FRN_NO_REBOOT=1 FRN_DERAIL=1 = first-crash halt + last-64-PC
ring (stderr). Packed->origVA: map `AAAAAAAA(ABS) Addr. OM/LM _name`, addr>=0x10622000 = packed.

## ROOT TRACED (d327 cont.): display task's eventflag returns a CORRUPT pattern
Full chain crash is downstream of ONE divergence. Both stock & cand enter the display task
`poll_display_state_and_dispatch` (0x104cf27e, unit 240) ONCE. It does
`eventflag_wai_flg(&obj->field_0x18, 0xffffffff, &uStack_c, TMO_FEVR); branch on uStack_c & 0xff`.
- STOCK: wai_flg BLOCKS (task parked; no display flag posted yet) — correct. (136 clr_flg calls, none
  from poll.)
- CAND: wai_flg RETURNS with **uStack_c = 0x6a004b24** (a pointer-like garbage value from the kernel
  eventflag CB region 0x6a00xxxx, NOT a clean bitmask). Low byte 0x24 => bit 2 set => takes the
  `register_menu_item_with_status(param_1, 0)` branch => the whole null chain => derail to PC=0.

MEASURED: the wai_flg ARGS are CORRECT in cand (r4=0x804a7b18 flagobj, r5=0xffffffff pattern,
r6=&uStack_c, r7=0xffffffff=TMO_FEVR). `eventflag_wai_flg` (0x10459708) decompile is fine. So the
wrapper is NOT the bug (unlike B-3c mbx, where the arg was wrong). The corruption is DEEPER: the
eventflag's current-pattern = 0x6a004b24 (a pointer into the kernel CB region = self/list pointer),
so __trap_kernel_wai_flg_svc returns it as "matched bits".

### NEXT (the actual root): find why this eventflag's pattern = 0x6a004b24.
Candidates:
1. A bad `set_flg` posts garbage bits to this flag (find the poster: FRN_WRWATCH the eventflag CB's
   pattern field, or trace set_flg calls targeting flag id = (short)*0x804a7b18).
2. The eventflag CB itself is mis-initialized / wrong layout, so wai_flg reads the wrong word as the
   pattern. The CBs live at 0x6a00xxxx, built by `initialize_rtos_kernel` (0x10008000, HARVESTED ASM
   cpu/gen/initialize_rtos_kernel.asm — verify the eventflag-CB init loops; the .c is SUPERSEDED). The
   value 0x6a004b24 looks like a CB internal pointer leaking into the pattern slot.
3. The recompiled kernel wai_flg service returns the wrong field. Trace __trap_kernel_wai_flg_svc ->
   the kernel wai_flg handler; compare the pattern-field offset it reads vs stock.
Recommended: FRN_WRWATCH the 4 bytes of this flag's pattern field (find it: the CB for flag
id=(short)*0x804a7b18) in stock vs cand — see who writes 0x6a004b24.

## NEW TOOLING THIS SESSION (qemu-frn op_helper.c, UNCOMMITTED):
FRN_TRACE_IRQ (ICR25/vec41 diag), FRN_PCLOG=<hex> (+FRN_PCLOG_MEM=off,.. / FRN_PCLOG_ABS=addr,..):
function-entry arg+memory logger; derail handler dumps all 16 regs. These traced the whole chain.

## d327 — ARCHITECTURAL DIRECTIVE (Andrew): zero jumps back into original code
Any control transfer FROM recompiled (packed, >=0x10622400) code INTO the original in-place code
region (<0x10622400) is a DEFECT — either a missing decompile (callee never cataloged/recompiled) or
an undetected function pointer (a vtable/table slot still holding the ORIGINAL address because the
fnptr scanner missed it). We do not tolerate any.

### NEW TOOL: FRN_INPLACE (qemu-frn op_helper.c, frn_inplace_check, UNCOMMITTED)
Hooked into jmp/jmp:d/call/call:d @ri. Logs each distinct packed->original target (src PC + kind);
FRN_INPLACE_HALT=1 stops at the first. Whitelists crt0 (0x100f0000-0x100f1800). This IS the
"packed code dispatches through an original fn-ptr" proof that gen_rodata_fnptrs.py asks for before
adding a CONFIRMED_TABLE. (Trap-dispatched kernel services are a SEPARATE category — reached via the
INT vector table, not call @ri — not yet covered by this detector.)

### The 6 leaks found (d327), classified:
UNDETECTED FNPTRS (cataloged target; caller holds original addr via a ROM vtable slot) — FIXED by
adding tight per-word CONFIRMED_TABLES ranges in scripts/gen_rodata_fnptrs.py + relink:
  1. 0x105f923c -> store_value_to_pointer_10527820   (initialize_seven_subobject_container vtbl)
  2. 0x105f924c -> fill_struct_from_lookup_table 10527828
  3. 0x105f92cc -> store_value_to_pointer_10527aee
  4. 0x105f92dc -> fill_struct_from_lookup_table 10527828 (2nd slot)
  5. 0x10564ef4 -> dispatch_object_teardown_103a5702  (dispatch_state_transition_1039ed80)
MISSING DECOMPILES (uncataloged fn called via a hardcoded `(*(code*)0xADDR)()` literal in the C) —
need the Ghidra/decompile pipeline to catalog+emit, then reference by symbol:
  6. 0x10493dc4  — literal in iterate_and_call_virtual_method.c + dispatch_virtual_if_flag_clear.c
  7. 0x1039f06e  — literal in dispatch_event_flags_loop.c (x2)
  (neither is in catalog.sqlite; 0x10493dc4 lands past the end of write_field_at_offset_four_10493da0.)

### NEXT:
- After relink: re-run FRN_INPLACE=1 -> expect 6 -> 2 leaks (only the 2 missing decompiles remain).
- Decompile 0x10493dc4 and 0x1039f06e (Ghidra MCP), add .c, replace the literals with the symbols.
- Extend the detector to the trap/INT path so the in-place KERNEL (uITRON services at 0x1000xxxx,
  currently running original bytes) is also surfaced as missing redirects.
- SEPARATELY, the ic=5.58M crash root (flag 0x35 T_CFLG stack clobber) is still open — see above. It is
  NOT one of these 6 leaks (running original code is correct behavior; the crash is a stack/lifetime
  bug in recompiled code).

## d327 — DESCRIPTOR-SPLIT bug class (the menu blocker chain)
Decompiler emits a multi-word kernel descriptor/result as NON-ADJACENT, descending stack locals
(e.g. uStack_c@sp+0xc as the base, uStack_8@sp+8 = base-4), then passes &uStack_c. The kernel reads
ASCENDING (base+0, base+4, base+8), so the 2nd/3rd words land on uninitialized slots (base+4 = sp+0x10)
instead of the intended locals -> created objects get garbage fields; output wrappers lose the 2nd word.
FIX: lay the fields out as a contiguous array (uint32_t desc[N] / uint16_t desc[N]) in ascending order
matching the kernel's read, passing `desc`. Verify order against stock (PCLOG the kernel trap, dump
*param @ +0/+4/+8) — confirmed for alloc_or_acquire & create_kernel_object.

Instances (6 found by sweep; execute_two_phase_state_transition/execute_capture_sequence are NOT this
bug — single &sStack_a output):
- [FIXED] alloc_or_acquire_heap_block (127) — {attr0x20000, iflgptn=param_3}; was THE flag-0x35 garbage
  root (eventflag iflgptn garbage -> display task crash). Stock-verified iflgptn=0.
- [FIXED] create_kernel_object (127) — {attr0, exinf=param_1, handler=call_virtual_slot_2_on_nested_object
  0x10459448}; cyclic-handler create; garbage handler -> act_tsk SP-corruption derail. Stock-verified.
- [FIXED] create_or_open_kernel_object (127) — {attr(hw), param_4(hw)}; find_free_queue_slot_1000d978
  reads param_1[1] when attr==3.
- [PENDING-verify] call_helper_with_two_word_struct (127) — 2-word INPUT {*param_2, param_2[2]} ->
  __trap_dispatch_kernel_service_10010b10. Verify kernel reads +4.
- [PENDING-verify] query_two_word_result (127) — 2-word OUTPUT; *(param_2+2)=uStack_8 but trap writes
  base+4 (sp+0x10), uStack_8@sp+8 never written -> 2nd result always 0. Verify trap writes +4.
- [PENDING-verify] wait_sem_obj (127) — returns uStack_8 (sp+8); trap writes result @base+4 -> returns 0.
  Verify.

Current link (belelev3l) has the 2 create fixes; test act_tsk crash (populate_context_from_global_state
derail @ic~5.58M) clears. Then batch the 3 pending (after per-instance kernel verification) into one link.

## d327 — POST-CRASH STATE: boots to idle, but BLACK SCREEN (menu not rendered)
Descriptor-split fixes (B-13) cleared the ic-5.58M crash; candidate now boots to the RTOS idle loop
(0x1000f530 ~3300×, no derail, stable 120s) with a hot-fn profile matching stock. BUT the rear-LCD is
BLACK (stock shows the Language-select menu). Verified via run.sh shot + instrumented display:
- **LCD framebuffer base regs are NEVER programmed in cand:** 0x40040308=0, 0x40040328=0, 0x40040334=0
  (stock: 308=0x0fcad400, 328=0x0fb10c00, 334=0x0fb81400). So the OSDC/display controller has no
  framebuffer → black. Added FRN_LCD_DBG to qemu-frn/hw/frn/k10d_display.c to dump these.
- **Periodic/UI tasks activate once then don't re-arm:** act_tsk (0x1000e6ac) stock=502 cand=1;
  remove_task_from_timeout_queue stock=504 cand=1; ready_list_insert stock=536 cand=33. The timer
  ticks (increment_timeout_counter ~2971× both) but task TIMEOUTS never EXPIRE in cand.
- **Peripheral handshakes never run in cand:** cpucom_handshake_ok / spi_poll_complete /
  gpio_dsp_ack_check / write_watch_counter_register (RTC ISR work) all stock>0, cand=0.
- Candidate IS alive at end-of-trace (processing SDHC/event-flag IRQs, hits rearui_draw_flags) — not
  frozen; it's that the periodic driver (cyclic timers / timeout-driven task wakeups) doesn't fire.

### Hypothesis (NEXT): the cyclic/periodic timer that drives the UI doesn't re-arm.
create_kernel_object creates a CYCLIC handler on the timeout queue (find_free_queue_slot_1000d66c →
insert_timeout_queue_node; handler=call_virtual_slot_2_on_nested_object slot2). Its timeout isn't
expiring/re-arming in cand (remove_task_from_timeout_queue=1). Either (a) the cyclic is created but
never STARTed/re-armed (a sta_cyc-equivalent bug — another timeout-arg / descriptor bug), or (b) the
display/UI task sleeps with TMO_FEVR instead of a tick period (B-3c/descriptor timeout bug, same family
as mbx). Find the periodic sleeper / cyclic-start and compare its timeout value stock-vs-cand. The LCD
never being programmed is a SYMPTOM — the display task (unit 126 OSDC) that writes 0x40040308 never
runs / never completes because it isn't driven.
NOTE: /tmp/k10d-run binary boots but is BLACK — NOT menu-ready (corrected an earlier over-claim: the
idle-loop profile match is NOT a rendered menu).

## d327 — STATE after RTC width fix + 28-reg MMIO width batch (MEASURED, not guessed)
VERIFIED FIXES: B-13 descriptor-split (boot crash cleared, boots to idle), B-12-MMIO RTC 0x40090004/06
(clock ISR path now runs: write_watch_counter_register cand 362), B-12-MMIO 28-reg width batch
(scripts/mmio_width_check.py; globals.h, deterministic vs original access width).
STILL BLACK (LCD base regs 0x40040308/328/334 = 0). The 28-reg batch did NOT fix the periodic clock.

FIRST REAL TRACE DIVERGENCE (co-run fdiff, interrupts filtered): after the first `isig_tim`
(allocate_kernel_object_1000e4e0, the periodic system-clock tick; stock 501x cand 1x), a UI task does a
FINITE-timeout wait (`insert_into_timeout_queue_10010c18`) then:
  STOCK: check_bit2_of_field_at_offset_0x7c -> eventflag_wai_flg (continues the loop)
  CAND:  heap_free -> mempool_release_block -> process_task_timeout_queue (TEARS DOWN / exits)
So the candidate's finite-timeout event-wait TIMES OUT (its event never arrives) and the task exits
instead of looping -> the periodic clock tick stops -> task timeouts never advance (act_tsk 1x vs 502x,
subtract_timeout_from_queue 1x vs 503x) -> display task never programs the LCD -> black.
The task is dispatched by `ui_task_body_common`(0x1045a16a) via vtbl[2] of the object at param_1+0x10;
the divergence/teardown is inside that vtbl[2] task body. (NOT a timeout-width bug: stock passes
r7=0xffffffff TMO_FEVR for the 0x40 wait too; the diverging wait is a separate FINITE one whose event
is missing.) Downstream, the cpucom/SPI/DSP handshakes (cpucom_handshake_ok/spi_poll_complete/
gpio_dsp_ack_check) never run (cand=0) — they're past the divergence.

### NEXT (concrete): capture the object at the ui_task_body_common(0x1045a16a) divergence — its
vtbl[2] = the task body; read that body, find the finite-timeout wait and the event/flag it waits on,
then find the producer that posts that event in stock but not cand (likely a peripheral ISR / cpucom
task upstream that itself is blocked). This is an un-posted-event chain, not a width bug.
