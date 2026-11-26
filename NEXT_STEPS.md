# Next steps — open investigation (handoff)

## ★★★ CURRENT (d329): MODE-PUMP DEADLOCK CLEARED — new blocker is the companion-cpucom bootstrap reset
## The onion-peel reached the MODE PUMP. B-3v vtable-dropped-arg (invoke_virtual_slot_3_on_member_10466604)
## was THE mode-pump blocker: the helper forwards the caller's ambient r5 (the mode EVENT) to
## mode_ctrl_on_event, but Ghidra emitted a 1-arg call so fcc clobbered r5 -> garbage event -> no
## set_flg(flag 0x37) -> wai_flg(obj+0x7c, TMO_FEVR) deadlock. FIXED + VERIFIED (commit 661e0b86):
## in qemu-frn mode_ctrl_on_event now gets event 0x10003, set_flg_obj(obj+0x7c,0x4) fires at ic 5611020,
## the OR-wait (eventflag_wai_flg mask 6) wakes+clears at 5611924, boot advances from ~5.6M to ~92M instrs.
##
## NEW BLOCKER (ROOT TRACED d329): after the mode pump advances, the candidate CRASHES then RESET-LOOPS.
## FULL CHAIN: menu fix unblocks ui_task6_body's message loop -> mbx_receive -> cpucom_poll_driver(param_1,
## msg). At cpucom_poll_driver +0xae (packed 0x106c5962) it does the C `(((vtbl_entry*)iVar2)[2].fn)(...)`
## where iVar2 = *read_struct_field_at_offset_0x14(param_2) is the message object's VTABLE. The slot-2 fn
## pointer *(iVar2+0x14) is NULL -> `call:d @r0` with r0=0 -> PC=0x00000000 at ic 7272166 (B-6 null-vtable
## jump-to-0). That faults into the FR EIT vector table (low mem 0x3xx-0x5xx), the exception handler jumps
## to the boot/reset vector 0x100f0000 (NOT a HW reset — crt0 0x10008000 runs only once), which re-runs
## initialize_four_config_blocks + write_initial_config_values + init_subsystem_and_enter_loop ->
## companion handshake (check_bit6_after_call/set_error_flag_and_halt, the 0x48/0x4e coprocessor +
## 0x50000107) -> faults again -> loops 151x, exactly 569916 instrs apart. STOCK never faults (0 reset-vector
## hits). VERIFIED same ic (7275808 reset / 7272166 jump-to-0) on the 3214832c build (B-15/0x10466ffa
## didn't move it — unrelated upstream).
## NOTE: write_initial_config_values IS miscompiled (st-vs-sth width, 0x71d-vs-0x471d, dropped orh #1 /
## andh #0xbfff / conditional bit-0 clear) BUT it is a RED HERRING for the loop — stock never calls it
## (reset-path only); it only runs AFTER the crash. Fix it for correctness, not to stop the loop.
## ROOT CHAIN (fully traced d329 via FRN_BADPC + FRN_FT_FULLREGS at ic 7272159-7272164):
##   cpucom_poll_driver(param_1, param_2=message): piVar3 = read_struct_field_at_offset_0x14(param_2)
##   = *(message+0x14) = 0 (NULL). The code then does `ld @r0,r0` on NULL and calls vtable slot 2 -> call 0.
##   Both candidate AND original dereference piVar3 with NO null-check, so stock's message MUST have a
##   valid +0x14 object pointer. STOCK reaches cpucom_poll_driver TWICE and calls slot-2 fine; CANDIDATE
##   reaches it ONCE and crashes. Difference = the MESSAGE: candidate's message has +0x14 = 0.
##   WHY: the candidate prints "CPUCOM ERROR" — cpucom_spi_xfer (0x10465958) FAILS in the candidate
##   (bVar5 = xfer_result != _DAT_105a7ce8), so the message is an ERROR response whose +0x14 was never
##   populated. STOCK's 2 cpucom_spi_xfer calls SUCCEED (no CPUCOM ERROR, no crash).
## => cpucom_spi_xfer code is STRUCTURALLY FAITHFUL (diffed packed-vs-orig: same kernel call, same
##    *(ctx+0x24)/*(ctx+0x14) loads + vtable index). So NOT a code bug — a TIMING/ORDERING root:
##    candidate reaches cpucom_poll_driver at ic 5.6M (right after the mode-pump wake) vs STOCK at 35.7M.
##    ~30M too early -> companion not ready -> xfer error.
##
## REFINED ROOT (traced d329, iteration counts): ui_task6_body runs cpucom_execute_transaction, which
##    calls poll_context_flag_until_status_set (orig 0x10466eb4). That poll's GUARD is
##    test_flag_clear_if_active(*(ctx+0x20)) which returns false iff *(*(ctx+0x20) + 0x10c) == 0.
##    STOCK: guard TRUE -> loops ~500x (read_byte_at_offset_0x28 501 hits) until set_flag_at_offset_0x28
##    fires at ic 35.7M (via the call_two_initializers timeout handler) -> poll returns 1.
##    CANDIDATE: guard FALSE at entry -> loop NEVER runs (read_byte_at_offset_0x28 = 0 hits,
##    set_flag_at_offset_0x28 = 0 hits) -> poll returns 0 IMMEDIATELY -> cpucom_execute_transaction
##    completes early -> ui_task6 proceeds to its msg loop ~30M early -> premature cpucom_poll_driver.
##    WHY guard false: the companion object's +0x10c sub-object pointer (*(*(ctx+0x20)+0x10c)) is NULL
##    in the candidate when the poll runs. Either (a) a DROPPED construction store of +0x10c (B-2) or
##    (b) +0x10c is constructed LATER than the poll (the companion sub-object is built around ic 35M in
##    stock, after which the poll's guard passes) and the candidate's ui_task6 simply runs before it.
## NEXT: find the writer of companion +0x10c (unit 126 companion_spi_driver, the cls_105a0*_new
##    constructors / call_helper_on_struct_offset_0x10c family). Does the candidate EVER write +0x10c
##    (grep the trace for the store), and if so WHEN vs the poll? If never -> dropped store (fix the
##    constructor). If later -> an ordering bug: what schedules/gates ui_task6's first run so late in
##    stock (a task priority, a wai on a semaphore/flag, or a dependency on the companion-init task)?
##    The poll RETURNING 0 (vs 1) may also be semantically wrong downstream — check the original intends
##    the poll to BLOCK here, not skip.
##
## CAUSALITY (sharpened): the poll is SUPPOSED to BLOCK ui_task6 inside cpucom_execute_transaction until
## the companion is ready. In STOCK the guard is true so it loops ~500x and blocks ui_task6 from early
## boot until ic ~35.7M (when set_flag_at_offset_0x28 fires) — THAT is why stock's cpucom_poll_driver is
## at 35.7M. So ui_task6 is scheduled EARLY in both; the poll is the gate. In the candidate the guard is
## false (*(obj+0x10c)==0) so the poll does NOT block -> ui_task6 runs straight through at 5.6M. Net: the
## candidate FAILS TO CONSTRUCT the companion object's +0x10c sub-object before the poll runs, whereas
## stock has it set very early. So this is NOT "ui_task6 scheduled too early" — it is a MISSING/LATE
## +0x10c construction (dropped store B-2, or an init function that runs late/not at all in the candidate).
## FIND: identify the poll's object (*(ctx+0x20), ctx = cpucom_execute_transaction param) at runtime via
## FRN_FT_FULLREGS at poll_context_flag_until_status_set (packed 0x107989f4); then FRN_WRWATCH that
## object's +0x10c to see if/when the candidate writes it vs stock. The writer is a companion-init
## constructor (unit 126 cls_105a0*_new / initialize_subsystem_object_array).
## ARGS RULED OUT (d329): the poll runs with IDENTICAL args in both — ctx=r4=0x80532e30, param_2=r5=0x3e8
## — and at the SAME ctx address. STOCK poll at ic 2.65M (guard TRUE -> blocks ~500 iters until +0x28 at
## 35.7M); CANDIDATE poll at ic 5.55M (guard FALSE -> skips). So *(ctx+0x20)'s +0x10c is set BEFORE ic
## 2.65M in stock but still NULL at 5.55M in the candidate. => a MISSING/DROPPED early +0x10c construction
## (NOT a poll-timing or arg bug). The guard object = *(0x80532e50) (= *(ctx+0x20)).
## DONE (d329): resolved the object = *(ctx+0x20) = 0x80552a28 (WRWATCH 0x80532e50 caught the ptr write;
## SAME address in stock and candidate). BUT WRWATCH on object+0x10c (0x80552b34) caught NO write in
## EITHER stock or candidate across 70s — yet stock's guard reads it non-zero and the candidate's reads 0.
## So +0x10c is NOT set by a plain word store to that address (or the object at 0x80552a28 is freed+realloc'd
## so the live object differs by poll time, defeating a fixed-address watch). NEXT: do NOT trust the fixed
## address — instead (a) at the poll (FT_PC 0x107989f4, ic ~5.55M) read the ACTUAL live *(ctx+0x20) and its
## +0x10c from the full-reg trace / a read-watch, and in stock at its poll (ic ~2.65M) do the same; (b) if
## the live object differs, watch ctx+0x20 for ALL writes through poll time (it may be rewritten); (c) or
## watch the WHOLE companion object's construction (the cls_105a0*_new that allocs it) and diff the +0x10c
## store candidate-vs-stock. The field-value divergence with no direct write points at an alloc-time init
## (memset/ctor loop) or a different live object — resolve WHICH first before assuming a dropped store.
##
## TOOLING NOW STANDARD (run every boot WITH these — Andrew: "a jump to null should be glaring",
## "run the emulator with a lot of these modes on"):
##   FRN_BADPC  = ON BY DEFAULT (qemu-frn frn-publish 4d543a23) — halts GLARINGLY at any call/jmp/ret/reti
##               to < 0x10000000 (null/wild ptr). Caught this B-6 at pc=0x106c5966 in one run instead of a
##               7M-instruction hand-trace. FRN_BADPC_NOHALT=1 to log-and-continue; FRN_BADPC_OFF=1 off.
##   FRN_INPLACE=1 catches packed->original control-flow leaks (un-redirected fnptrs/vtable slots).
##   FRN_FT_FULLREGS=1 + FRN_FT_FROM/TO=<ic range>  for a full-16-reg window at a known crash ic.
##   FRN_DUMP_SPI / FRN_DUMP_CMDH for the companion dialog (needed for the cpucom_spi_xfer root above).
##   (FRN_CODECHECK=<file of valid entry+return addrs> catches subtler derails but needs the set generated.)
##
## ALSO (d329, committed/in-flight): B-3v class is REAL and swept — detect_vtable_dropped_arg.py finds
## vtable helpers that drop a forwarded reg. invoke_virtual_slot_3_on_member_10466ffa (same slot-3 shape,
## member +0x2c, 3 callers pass DISTINCT constants 0x40001/2/3) fixed. B-15 merged-case in
## mode_ctrl_on_event fixed (orig 0x10002->set_flg bit 0x2, 0x10003->bit 0x4; decompile collapsed both to
## 0x4). ~23 more B-3v strong candidates in the detector report (distinct-constant ones are incontrovertible).

## ★★ BLACK-SCREEN ONION-PEEL CHAIN (d327-latest) — each decompiler-bug fix lets cand reach the next:
##   1. mbx_send_message B-10b (priority >>16 -> 0): the first mbx-2 snd FAILED (E_PAR -17). FIXED
##      (3ce836a1). VERIFIED: snd now returns 0 (success). But send count stayed 1 (next bug downstream).
##   2. B-10b SWEEP (16 menu-build/driver funcs, spurious >>16 on params): FIXED (218d59b9). cand now
##      reaches the signaling phase (sig_sem, set_flg). Send count still 1 (next bug).
##   3. set_flg_obj B-3 (213 callers drop the eventflag PATTERN -> set_flg(id,0)=no-op; waiters
##      wai_flg(0x2e)=0x2 never wake): FIXED (ba9096d8). Build in flight. ← CURRENT: verify send
##      count jumps. (The FRN_FIX_SETFLG crude all-bits causal test was inconclusive — too crude;
##      the set_flg(0)<->wai_flg(0x2) mismatch is unambiguous, so the proper per-pattern fix is right.)
##   NEXT after the build: validate_mbx send count; if it climbs, check construct_object_with_vtable
##   (packed 0x106B5CC8, unit 206) reach + LCD base 0x40040308 (write_three_config_values 0x108222B8).
##   If still blocked: int40 snd-result trace + fnseq_countdiff find the next onion layer. Keep peeling.
##   VALIDATE-TOOL BUG: validate_full.sh pk() returns empty for some symbols; use `grep -iE "_SYM$"
##   firmware.map | awk '{print $1}' | sed 's/(.*//'` directly (works).

## ★ ROOT FOUND (d327-latest): mbx_send_message B-10b spurious-shift. mbx_send_message (0x10459864)
## stored the message PRIORITY (msg+4) as `(uint16_t)((uint64_t)param_3 >> 16)` — a decompiler
## spurious shift; the ORIGINAL stores `(uint16_t)param_3` directly (disasm 0x104598b0 `sth r11`).
## So the recompile wrote priority 0 (param_3 is a small code like 2). mbx 2 is a PRIORITY mailbox
## (attr TA_MPRI=2, maxpri=3); the kernel snd (insert_into_timeout_queue 0x10010c18) rejects
## priority 0 with E_PAR(-17). EVERY send to a priority mailbox FAILS -> no cascade -> black.
## MEASURED: cand snd result (0x10790480) r4=0xffffffef(-17) vs stock 0×43. FIX APPLIED (drop >>16),
## link in flight. This COMPLETES the reg_framework_send fix (which passes param_3=the code): both
## are needed. BESTIARY B-10b added.
##
## ALSO FIXED (same B-10b class, verified via MULH/extsh disasm; staged for NEXT link, NOT in the
## mbx-send link): remove_node_from_queue (0x1000dcf4) and remove_task_from_timeout_queue_100115c4
## (0x100115c4) — both did `(param>>16)*0x44/0xe` (TCB/queue stride) where the original uses
## `(int16)param` (low 16 = task id). Wrong index corrupts the RTOS timeout queue / ready list.
## OTHER B-10b candidates (21 files, `grep -rE '\(uint16_t\)\(\(uint64_t\)' cpu/src`): mostly legit
## (32-bit->two-16-bit splits, high-half extraction) — verify each vs original disasm before fixing.
##
## VALIDATION PLAN (when link done): scripts/validate_mbx.sh (cand send count 1 -> should climb);
## if sends flow, scripts/check_display.sh + screenshot. Then find the NEXT divergence (re-run the
## int40 snd-result trace / fnseq_countdiff; the menu-build is unit 206/207 settings_registry).

## (older framing) CURRENT STATE (d327): BLACK SCREEN = message-bus/event-dispatch deadlock. Several B-3
## bugs found+ruled out by CAUSAL test; real root narrowed to "mbx-2 send does not wake its pump".
##
## THE reliable diagnostic tools (use these, NOT codiff/fnseq which drown in timer-IRQ jitter):
##   FRN_INT40_SVC=all  (or hex,hex)  + wrap qemu in `stdbuf -oL -eL`  (SIGTERM loses buffered
##     stderr otherwise). Logs every int#0x40 REALOS syscall: r12=service r4-r7 pc rp. NOT gated on
##     FRN_TRACE_IRQ (the distinct [int40] logger IS gated on it). scripts/syscall_trace.sh wraps it.
##   Blocking services: realos_rcv_mbx 0x100111b0, kernel_wai_flg_svc 0x100112a4, kernel_twai_sem
##     0x100113dc, set_event_flag_bits 0x10010984, snd_mbx(insert) 0x10010c18, alloc 0x10010138.
##   FRN_FIX_SETFLG=1 (committed to qemu op_helper.c): causality test — forces non-zero set_flg
##     pattern. scripts/fnseq_countdiff.py: per-function count diff (cand-never-run functions).
##
## DIAGNOSIS CHAIN (measured): cand sends exactly 1 mbx message (snd_mbx 0x10010c18, mbx=2, code
## r6=0x801d9a2c — SAME as stock's first send) then all tasks idle. The mbx-2 pump
## (app_task_generic_waitloop, packed 0x10632a12) stays BLOCKED in rcv_mbx(2,FEVR) [rcv count=1,
## never loops] -> never calls vtbl[3].fn -> the event-dispatch cluster (dispatch_event_handler
## 0x1047b2be + sig_sem_obj + handle_event_flags_and_signal + the whole 0x104a8xxx settings-registry
## construction, unit 206) NEVER runs -> no menu objects -> LCD base regs stay 0 -> black.
## => The mbx-2 message cand sends does NOT wake its pump. ROOT = WHY (open): mailbox-object/id
##    mismatch between sender and pump, or the send inserts into the wrong queue, or the first
##    message's content mis-routes. NEXT: dump the sender's mbx-id-ptr object vs the pump's
##    field_0x14 object; verify both resolve to kernel mailbox 2; check the message packet the
##    pump would extract. Trace 0x10632a3a (pump dispatch after a successful recv) — if 0 hits the
##    pump never received (delivery bug); if >0 the processing (vtbl[3].fn) is the bug.
##
## B-3 bugs found this session (register-forwarding wrappers drop args; same class as
## reg_framework_send). Status:
##   - reg_framework_send (0x10459abe): FIXED+COMMITTED (cea35227), 85 callers swept. NOT the
##     blocker (cand deadlocks before the send-heavy phase) — verified by re-measuring send count=1.
##   - mbx_receive_message_104598e8 (0x104598e8): timeout-drop -> busy-poll handover deadlock.
##     ALREADY FIXED+COMMITTED (6c4036c2), verified correct in the candidate binary. (So the pump's
##     RECEIVE is correct; the blocker is delivery/dispatch, not this.)
##   - set_flg_obj (0x104596cc): drops the eventflag PATTERN r5 -> set_flg(id,0)=no-op. REAL on-path
##     bug (cand calls it 3x, all pattern 0; stock passes real patterns). BUT causal test
##     (FRN_FIX_SETFLG=1 forcing non-zero patterns) did NOT raise cand's send count past 1 -> NOT the
##     load-bearing blocker. Fix is UNCOMMITTED (set_flg_obj.c sig + funcs.h changed) and needs a
##     213-caller sweep (scripts/patch_setflg.py: 184 auto + 29 manual, patterns recovered). DEFERRED
##     until the real blocker is cleared — do NOT link with the sig change until the 213 callers are
##     swept (else build breaks). twai_sem_obj (0x104596.. 0x10459f06) same class (drops timeout),
##     OFF-PATH (callers use -1=FEVR), body fix applied+uncommitted, self-contained.
##   LESSON (Ferro d329, heeded): the first divergence != the load-bearing cause; VERIFY causality
##     with a controlled poke before a big sweep. set_flg_obj looked causal but failed the test.

## (older, now-superseded framing follows)
## Where boot is now (d327-late: B-13 descriptor-split cleared the ic5.58M derail; now boots to
## STABLE IDLE, BLACK SCREEN. Root of black screen = B-3 MESSAGE-BUS, now fixed — see below.)

### B-3 reg_framework_send message-bus (THE black-screen root, fixed d327; link pending validation)
MEASURED via direct FRN_DISAS (reliable, NOT codiff): over a 200s boot, stock calls mbx_send_message
43 times, candidate only **1** — then all mailbox-pump tasks block (TMO_FEVR) at idle, so screens are
never built/navigated and LCD base regs 0x40040308/328/334 stay 0 (black). `reg_framework_send`
(0x10459abe) carries 35 of stock's 43 sends; it was decompiled 1-arg and DROPPED r5(payload)+r6(code),
which the original forwards through to mbx_send_message. Fixed sig -> (int,void*,uint32_t); swept ALL
85 callers / 97 sites (scripts/{frdis,resolve_rfs,rfs_table,patch_rfs}.py). This is the mechanism
behind the older "menu built but never navigated/rendered" framings — the nav/render MESSAGES weren't
being sent. 3 off-path callers (iterate_and_check_queue_items, dispatch_lens_comm_command,
initialize_mode_context) are best-effort (branchy/mangled decompile) — Ghidra re-verify later.

VALIDATION PLAN (after link): (1) re-read new packed mbx_send_message addr from firmware.map;
(2) FRN_DISAS that addr on new candidate over 200s -> count should jump from 1 toward ~35+;
(3) if sends flow, check LCD base regs get programmed (write_three_config_values 0x10822112 / base_a
0x40040308) and run.sh shot. (4) Then find the NEXT divergence (likely the menu-item render / appobj
+0x44 navigation below).

### SUPERSEDED (kept for history): the ic5.58M NULL-vtable derail chain
Deadlock cleared (B-3c mbx timeout, 6c4036c2). Candidate reaches ~47k fn-entries vs stock ~159k, then
DERAILED to PC=0 at ic=5,585,789 — CLEARED by the B-13 descriptor-split fixes (commit 9aa78ec3). Boot
now advances past it to stable idle. Chain below retained in case a later divergence re-enters it.

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
