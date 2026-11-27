# Next steps — open investigation (handoff)

## ⚠️ SELF-CORRECTION (d329, late) — the re-frame below is PARTLY WRONG; read this first:
## method2 (reset_sixteen_module_objects, packed 0x107db274) DOES run in the candidate — at ic 4.27M (I
## earlier checked only the 0-3.3M windows and wrongly concluded 0 hits; it is just LATE: 4.27M vs stock
## 2.14M). So the 16 modules DO initialize, at 4.27M, which is BEFORE the companion poll (5.6M) and the B-6
## crash (7.27M). Therefore the companion Cmd:80 failure is NOT simply "modules never init." TWO separate
## true facts remain: (a) the candidate's app_main_task1 init is ~2M LATER than stock (4.27M vs 2.14M), and
## (b) the candidate sends the WRONG companion command (Cmd:80 vs stock's Cmd:04 POST) — established via
## FRN_DSP_LOG. (b) is the proximate menu blocker and is NOT downstream of init completeness. The 6688x
## settings_refresh "runaway" was a RESET-LOOP artifact (151 resets re-run init), not a single hot loop.
## RE-FOCUS: trace where ui_task6's mailbox message (whose command byte becomes 0x80) is PRODUCED, and why
## its command is 0x80 not 0x04. In stock the first companion command is 0x04 (POST) at 35.7M; in the
## candidate it is 0x80 at 5.6M. Either the message producer builds 0x80 (a wrong command constant/field —
## a concrete, greppable bug), OR the companion POST sequence that should run first is skipped/reordered.
## Trace the mbx_send that posts ui_task6's first message (mbx id *(ui_task6_ctx+0x18)) and read its command
## byte; compare to stock. THIS (not the init slowness) is the direct path to the menu. The init-timing
## analysis below is real but its causal link to the companion was my error — treat it as secondary.
## PRODUCER FOUND (d329): ui_task6's first message (ic 5.55M) is posted by reg_framework_send (0x10459864,
## THE message bus the standing order flags) <- init_struct_with_flag_and_param (0x167 settings_manager):
## alloc a struct, *(s+8)=param_2, *(s+4)=0x20000, reg_framework_send(ctx+4, s, code=0x1) -> mbx_send_message.
## The message CODE is 0x1 (r6), payload = the struct. The companion command 0x80 is how cpucom_poll_driver/
## cpucom_spi_xfer interpret this payload (cmd byte = @(r14+24) in cpucom_spi_xfer). NEXT: read the payload
## struct fields vs what cpucom_spi_xfer reads as the command — find where 0x80 comes from (a payload field,
## or a wrong code/flag). Compare the SAME message in stock (which yields Cmd:04 POST). The reg_framework_send
## "85-caller B-3 sweep" the standing order mentions is this exact bus — re-verify that sweep covered this
## init_struct_with_flag_and_param/settings path and that the code/payload is built right.
##
## ★★★★★ (PARTLY SUPERSEDED — see self-correction above) TRUE ROOT RE-FRAME (d329, trace_diff) — READ FIRST:
## The menu failure is NOT primarily a companion bug — the companion failure is DOWNSTREAM. The real root:
## app_main_task1 (the main app INIT task, orig 0x10439674) does not COMPLETE its initialization in the
## candidate. It runs appmain_init_method1 (vtbl slot 2) which contains the LENS-FIRMWARE-UPDATE loop
## (get_lens_fw_update_status -> alloc_and_init_lens_fw_buffer + alloc_and_zero_small_struct_1041a71a,
## unit 294 runtime_lib_fatfs_lens_update). STOCK runs this loop ic 496849->2101611 (82 iters, ~1.6M instrs)
## then reaches appmain_init_method2 at ic 2137209. CANDIDATE is still in the loop at ic 4.19M+ (slower/
## preempted, ~57 iters by the 7.27M crash) and NEVER reaches appmain_init_method2 (0 hits) -> reset_sixteen_
## module_objects NEVER runs -> the 16 module singletons (sensor, camera, companion, sr_driver, etc.) are
## NEVER INITIALIZED. ui_task6 then polls the companion against uninitialized modules -> Cmd:80 -> B-6 crash
## -> reset loop. So EVERYTHING I chased (companion-ready alarm at 5.58M, +0x28, +0x10c, Cmd:80, the B-6)
## is DOWNSTREAM of app_main_task1 not finishing init. Early boot is identical UP TO app_main_task1.
## IT IS A RACE: stock finishes app_main_task1 init FAST (by ~2.5M) and ui_task6's companion poll is LATE
## (35.7M) so init wins; candidate's app_main_task1 is SLOW/preempted and ui_task6's companion poll is early
## (5.6M) so the poll loses. Likely causes to check (in order):
##   (1) Is app_main_task1 PREEMPTED (other tasks run between its lens_fw iters) = a TASK PRIORITY bug?
##       Check cre_tsk priorities for app_main_task1 vs ui_task6 (a descriptor/priority miscompile). The
##       task table at 0x10011c4c holds the ORIGINAL app_main_task1 entry (0x10439674) un-redirected to
##       packed (0x10632200) — fix/examine the whole task table for wrong entries/priorities/stack.
##   (2) Is each lens_fw iteration SLOWER (extra work)? candidate loop body = alloc_and_init_lens_fw_buffer
##       + alloc_and_zero_small_struct_1041a71a; stock = just alloc_and_init_lens_fw_buffer. Diff the
##       recompiled alloc_and_init_lens_fw_buffer (0x10546eea) for extra allocs / a wrong loop count.
##   (3) Does get_lens_fw_update_status return a different count (more entries) in the candidate?
## TOOLS: trace_diff.py (clean traces, no FLASH_SAVE) found this; FRN_DSP_LOG for the downstream companion
## oracle. This supersedes all the companion-timing analysis below (which is correct but downstream).
## REFINED (d329): the candidate's app_main_task1 init is SLOWER — it does FEWER operations per unit time
## (fill_byte_array 97 calls by ic 2.5M vs stock's 341; stock finishes the lens_fw loop + reaches method2 by
## 2.1M, candidate is still in init at 4.2M+). NOT a single huge memset: the 0xea24 (59940-byte) fill in
## cls_105aa5ec_new is FAITHFUL (orig heap_alloc(0xea54) then fill 0xea24 — a legit 60KB settings object;
## do NOT flag it). The candidate yields/blocks MORE during init (rtos_dispatch_entry heavy in the gap), so
## app_main_task1 makes slower progress. WHY: app_main_task1 appears to BLOCK between init ops (on a
## semaphore/flag/resource) that stock doesn't, OR a lower effective priority lets the scheduler idle. The
## 1.3M-instr gap between app_main_task1's 1st lens_fw call (ic 534488) and the main loop (1849066) is the
## slowdown — it is REAL init work (60KB alloc + object ctors) but spread out by yielding. NEXT: find what
## app_main_task1 BLOCKS on in that gap (trace the rtos_dispatch_entry/yield points — a wai_sem/wai_flg with
## a timeout that is satisfied slowly, or a resource the uninitialized companion would provide). This may
## still be circular with the companion, OR an independent init-ordering/priority bug. Compare the task
## PRIORITIES (cre_tsk) of app_main_task1 vs the tasks the scheduler runs during the gap.
## SHARPEST LOCALIZATION (d329): compared fill_byte_array SIZE distributions in the init window (fullregs):
##   STOCK (490K-2.15M): 160x 0x50, 80x 0x400, 40x 0x344, 40x 0x40, +small, +1x 0xea24 (the 60KB obj).
##   CANDIDATE (534K-1850K gap): 4x 0x200, 4x 0x10, 3x 0x1000, 2x 0x4, 1x 0xea24, 1x 0x8 — NONE of the
##   160x0x50 / 80x0x400 / 40x0x344 / 40x0x40. The candidate SKIPS ~320 small object inits stock does.
## Both reach appmain_init_method1 (vtbl[2] correct) and both construct the 60KB cls_105aa5ec_new at the
## SAME ic (~0.87M) — so WITHIN method1 the candidate takes a DIFFERENT PATH, skipping ~320 small object
## inits (the 0x50/0x400/0x344/0x40 structs). appmain_init_method1 likely has CONDITIONAL inits (a loop or
## branch over a config/table) that the candidate skips because a count/flag/condition differs. NEXT:
## read appmain_init_method1 (vtbl slot 2 of app_main_task1's singleton) — find the loop/branch that does
## the 0x50/0x400/0x344 object inits, and why the candidate's condition skips them (a dropped count, a
## config read, or a wrong branch). The 0x344 (836-byte) and 0x400 (1KB) objects x40-80 are the specific
## targets. This is the precise divergence inside method1 that leaves the modules uninitialized.
## CORRECTION + FINAL LOCALIZATION (d329): the "cpucom init reordered early" and "321 extra calls" from
## trace_diff were ALIGNMENT DRIFT again (register_cpucom_command_table / get_cpucom_default_context run at
## the SAME ic ~0.8M in both; cls_105aa5ec_new 60KB alloc at the same ~0.87M). trace_diff's trap-wrapper
## STRUCT noise keeps drifting difflib here — VERIFY every lead with direct per-function IC/count checks.
## THE DURABLE FACT: appmain_init_method2 = 0 hits in the candidate (never reached, all addresses). So
## app_main_task1's method1 (appmain_init_method1, the lens-firmware-update init) NEVER RETURNS before the
## companion crash at 7.27M. method1's lens_fw loop runs ~2x SLOWER per iteration in the candidate: ~40000
## instrs BETWEEN iters vs stock's ~19500 (the iters themselves are tight ~400 instrs; the gap is extra
## per-entry processing). 50 iters by 2.5M (cand) vs 82 by 2.1M (stock). So method1 is ~2x too slow -> does
## not finish -> method2 never runs -> 16 modules uninit -> companion fails. NEXT (cleanest): single-step /
## FT_FULLREGS one lens_fw iteration in candidate vs stock and diff the per-iteration work — find the extra
## ~20000 instrs the candidate does per entry (a redundant alloc/parse/copy, or a retry loop). The lens-fw
## update reads FAT/SD (unit 294 runtime_lib_fatfs_lens_update); check get_lens_fw_update_status + the
## per-entry body (alloc_and_init_lens_fw_buffer 0x10546eea) for extra work vs the original.
## (trace_diff is powerful for FINDING divergences but its alignment drifts on this recompile's trap-wrapper
## structure — always confirm a lead with a direct per-function count/IC before acting on it.)

## ★★★★ BREAKTHROUGH (d329, FRN_DSP_LOG companion dialog) — the concrete, actionable menu root:
## The qemu companion model (target/frn/k10d_cpucom.c) LOGS the command dialog. Diffed candidate vs stock:
##   STOCK:     Cmd:04 (POST handshake, 5 bytes: 01 1f 00 13 04) -> status 'X' -> Cmd:05 (61 bytes) ->
##              status 'A','A','H','B'. A clean companion bootstrap.
##   CANDIDATE: sends ONLY Cmd:80 (out_size=0) -> firmware prints "CPUCOM ERROR Out/In" -> B-6 crash.
## => The candidate NEVER sends the Cmd:04 POST handshake. Its companion bootstrap is replaced by a single
## wrong command (0x80). So stock's whole init sequence (04->05->01 polls) does not happen in the candidate.
## This is WHY the companion never properly initializes and everything downstream (poll, +0x28, alarm,
## reset loop) diverges. THE BUG IS: the candidate's companion-init sends the wrong command / skips POST.
## FIND NEXT (concrete): where is Cmd:04 (POST) built+sent in stock? (cpucom_execute_transaction only POLLS
## + dispatch_context_virtual_op; the POST is sent by a separate companion-init path.) Does the candidate
## reach that code? If it reaches it but sends 0x80, the command byte is miscompiled (a wrong constant /
## dropped arg — find the 0x04 literal). If it never reaches it, the companion-init task/function is skipped
## (scheduler — the 15x-less-active finding). Trace the cpucom_spi_xfer command buffer (param_2[0]) back to
## where 0x04 vs 0x80 is set. TOOLS: FRN_DSP_LOG=1 (dialog), fresh flash + no FLASH_SAVE.
## TRACED (d329): the command byte is written to companion data reg 0x5c004043 by spi_read_byte (0x104404f8),
## called from cpucom_spi_xfer. Stock sends 0x04 from cpucom_spi_xfer+0x84 (the POST-init context). Candidate
## sends 0x80 from cpucom_spi_xfer+0x90 (rp 0x106c61e0) — the command byte is @(r14+24), a STACK ARG from the
## CALLER. The candidate only calls cpucom_spi_xfer from the MESSAGE LOOP (cpucom_poll_driver); it NEVER
## calls it from the POST-init context with 0x04. So THE CANDIDATE NEVER RUNS THE COMPANION POST-INIT PATH.
## SO THE SHARPEST ROOT STATEMENT: find the stock code path that calls cpucom_spi_xfer to send Cmd:04 (POST)
## — it is a companion bringup that runs BEFORE/separate from ui_task6's message loop — and find why the
## candidate doesn't run it (a skipped init call, a task that never dispatches, or a branch that's inverted/
## dropped so the candidate jumps straight to the message loop). Stock: trace back from the 0x04 write
## (spi_read_byte caller cpucom_spi_xfer+0x84, its caller, ...) to the companion-bringup entry; then check
## the candidate reaches it. That bringup running (or not) is the binary that decides the whole menu.
## REFINED (d329): STOCK also sends the first command (0x04 POST) from cpucom_poll_driver's MESSAGE LOOP
## (not a separate init) — same path as the candidate. The difference is the FIRST MESSAGE's command byte:
## stock 0x04 (POST) at ic 35.7M, candidate 0x80 at ic 5.6M. => MESSAGE CONTENT/ORDERING: the candidate's
## loop runs early (premature companion-ready) and processes a wrong/out-of-order message (0x80) before the
## POST (0x04) exists. This ALL collapses to the ONE root: the companion-ready signal (+0x28 / the
## call_two_initializers alarm) fires ~500 ticks early (5.58M vs 35.7M), so ui_task6's loop runs before the
## real POST message is produced. FRN_DSP_LOG is the crisp oracle (stock=04/05/01 vs cand=80). THE FIX
## TARGET is singular: make the companion-ready signal wait for the real companion handshake (as stock does)
## instead of firing early — i.e., why call_two_initializers dispatches at 5.58M not 35.7M (REALOS
## scheduler/companion-gating core). Use FRN_DSP_LOG as pass/fail for any fix.
## EARLY BOOT RULED OUT (d329, trace_diff.py on clean 0-2.5M traces): the candidate and stock are IDENTICAL
## in early boot — object registration (store_value_if_valid/register_entry_in_table) has byte-identical
## (object, index) pairs at the SAME heap addresses (e.g. obj 0x8055505c @ index 0x11 in both). So NO
## upstream bug, NO off-by-one (an apparent off-by-one in trace_diff ARG output was ALIGNMENT DRIFT from the
## trap-wrapper STRUCT divergences — the documented caveat; verify ARG divergences directly). The companion
## OBJECT itself is fine (same addr, same table index). => the divergence is PURELY the companion-ready
## TIMING (when call_two_initializers dispatches: 5.58M cand vs 35.7M stock), not object content or early
## state. This narrows the root to the companion-ready DISPATCH GATE only. Also: write_initial_config_values
## is NET-CORRECT (decompiler simplified 0x471d&0xbfff->0x71d and orh/andh->&0xff7e; only a harmless reset-
## path 32-bit-store width quirk on 0x50000008) — do NOT "fix" it.

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
## ======================================================================================================
## CORRECTED CLEAN ROOT (d329, late) — read THIS first; it supersedes the +0x10c analysis below it:
## The menu blocker is the SAME as the prior-instance ALARM FIRE-TIME bug. With CLEAN methodology (fresh
## candidate copy, NO FRN_FLASH_SAVE — matching how stock is tested), the poll ENTERS its loop (the +0x10c
## guard is fine) but EXITS AFTER 1 ITERATION because the companion-ready byte *(ctx+0x28) reads 1 after
## just 1 tick. *(ctx+0x28) is set by set_flag_at_offset_0x28_10467264 (0x107f4f4a), called by
## call_two_initializers_10466f6e (the kernel TIMEOUT-QUEUE handler). In stock that handler fires at tick
## ~393 (ic ~35.7M) so the poll blocks ui_task6 until the companion is ready; in the candidate it fires at
## tick ~1, so cpucom_execute_transaction returns immediately -> ui_task6 polls the companion before it is
## ready -> cpucom error -> B-6 null crash -> reset loop. => ROOT = the fire-time/registration of the
## call_two_initializers timeout-queue entry (create_kernel_object {0,exinf,handler} is faithful; the
## relative timeout is set by a sta_cyc/sta_alm-like call — find IT and diff the timeout value / the
## create-to-start tick gap candidate-vs-stock).
## TWO METHODOLOGY TRAPS that sent me down a +0x10c dead-end (avoid them):
##   (1) FRN_FLASH_SAVE pollutes behavior: flash writes persist and CHANGE heap/object state between runs,
##       so a candidate run WITH flash-save diverges from stock (tested WITHOUT). Test BOTH the same way —
##       fresh bios copy, NO FLASH_SAVE — or results are not comparable. (The +0x10c=0 / poll-SKIP was a
##       flash-save artifact; with a clean flash +0x10c=0x80554594 and the poll ENTERS the loop.)
##   (2) TWO similarly-named setters exist: set_flag_at_offset_0x28_10466fde (0 hits) vs
##       set_flag_at_offset_0x28_10467264 (the real one). Grepping the wrong one gave a false "never fires".
## QUANTIFIED (clean, no FLASH_SAVE): call_two_initializers first fires at ic 5,576,421 in the candidate
## vs 35,706,039 in stock — ~30M instrs (~500 ticks at ~58k instrs/tick) TOO EARLY. packed 0x106670aa.
## NEXT: find where call_two_initializers' timeout-queue node is STARTED and why its fire is ~500 ticks
## early. It is reached via the timeout queue -> vtable[2] (create_kernel_object registers handler =
## call_virtual_slot_2_on_nested_object, descriptor {0,exinf,handler}, attr=0 — faithful, no explicit
## timeout). So a sta_cyc/sta_alm-like call sets the relative delay. Trace: (a) IC when the node is inserted
## (insert_into_timeout_queue / find_free_queue_slot 0x1000d66c) in candidate vs stock; (b) the node's time
## field value; (c) the current kernel tick at insertion. Either the relative timeout VALUE is wrong
## (dropped/garbled arg -> ~0, a B-3 class fit) or the tick base is wrong. Use object-identity tracing,
## fresh flash, no FLASH_SAVE.
## CREATION PATH FOUND (d329): populate_context_from_global_state (0x10466b4c, cpucom vtable slot 2) sets
## ctx+0x20 = read_table_entry_field(sram,8) then create_kernel_object(&ctx+0xc). create_kernel_object
## (orig 0x104593c8) builds EXACTLY a 3-word descriptor {0(attr), exinf, handler=call_virtual_slot_2_on_nested_object}
## — NO timeout/cyctim word (verified in the original asm; desc[0]=0 in BOTH stock and candidate). So the
## handler fire is NOT a simple relative-timeout you can grep for — it is driven by the kernel timeout-queue
## / scheduler (prior note: "runs via vtable[2] during a terminate_task scheduler pass"). The fire happens
## ~500 ticks early in the candidate DESPITE a faithful create. => the divergence is in the KERNEL
## TIMEOUT-QUEUE / SCHEDULER timing, or in WHEN the triggering event (a task terminate / dispatch) occurs.
## DEEP NEXT (hard, REALOS internals): with a clean trace (fresh flash, no FLASH_SAVE), instrument the
## timeout-queue: when is this handler's node inserted (find_free_queue_slot 0x1000d66c via int#0x40) and
## with what node time; what increments the kernel tick; and what triggers the dispatch pass that runs the
## handler at ic 5.58M (cand) vs 35.7M (stock). Compare the TRIGGERING task-terminate/dispatch timing. This
## is the long-standing companion-bootstrap/alarm-fire-time root; it is now pinned to the kernel timeout-queue
## dispatch of the call_two_initializers handler created by populate_context_from_global_state.
## RULED OUT (d329): kernel TICK RATE is NOT the bug — candidate ~58k instrs/tick (from the poll's 1-tick
## check_kernel_call_success yields) vs stock ~66k; similar. So the handler is SCHEDULED ~1 tick after the
## poll in the candidate vs ~500 in stock — the scheduled DELAY (the timeout-queue node's time field) is
## wrong, not the rate. create_kernel_object's descriptor desc[0]=0 is the same in both and is NOT the
## timeout (else stock would also fire at tick 1). So the node time is computed by the kernel service
## (find_free_queue_slot/insert_timeout_queue_node via int#0x40) from kernel state, OR a separate
## start-timer call sets it. DECISIVE NEXT: add a qemu-frn instrumentation that logs every timeout-queue
## node INSERT with (handler, time field, current tick) and every DISPATCH, then diff the node time for the
## call_two_initializers handler candidate-vs-stock on a clean run. That single number (its scheduled delay)
## is the bug. (Tooling-forward, per Andrew — like FRN_BADPC.)
## FURTHER PINNED (d329, clean runs): call_two_initializers is a ONE-SHOT alarm (fires exactly once in
## both). It is CREATED at ~1M in both (populate_context_from_global_state: cand 1.67M, stock 1.06M) but
## FIRES at 5.58M (cand) vs 35.7M (stock) — create-to-fire delay ~65 vs ~577 ticks, ~8.9x TOO SHORT in the
## candidate. So the alarm's TIMEOUT value (or whatever sets its fire delay) is ~8.9x too small. Creation
## path: populate_context_from_global_state -> create_kernel_object(&ctx+0xc) -> __trap_find_free_queue_slot
## (int#0x40 service @ 0x1000d66c). The service reads desc[0] (lduh @r10) as attr then hands the descriptor
## (mov r10,r5) to a register-indirect sub-handler (call:d @r12 @ 0x1000d6d4) — the alarm timeout is set in
## THAT REALOS sub-handler / from a value populate_context supplies, NOT in the 3-word create descriptor.
## DECODE NEXT: (a) in a clean candidate int#0x40 trace (FRN_INT40_SVC=all, already works), find the service
## call for this alarm (r12=1000d66c, rp in populate_context 0x1079e8xx) and read its args; (b) decode the
## sub-handler at the call:d @r12 target in find_free_queue_slot to see where the fire-delay comes from;
## (c) the delay likely traces to a value populate_context reads (get_or_init_sram_buffer /
## read_table_entry_field) — if the candidate reads it ~8.9x small, that read is the recompile bug. The
## alarm models the companion's expected ready time; it being too short = the companion is declared ready
## ~8.9x too early = the whole premature-cpucom cascade. THIS is the single number to find.
## MECHANISM RESOLVED (d329): find_free_queue_slot (0x1000d66c) calls insert_timeout_queue_node (0x1000f668)
## which inserts the node with NO time/countdown field (just self-ptr, id, flags|8, exinf, handler). So the
## handler does NOT fire on a timer — it fires when the timeout queue is PROCESSED by a SCHEDULER PASS
## (prior note: "during a terminate_task pass"). Inserted at ~1M, it fires when that pass runs: 5.58M (cand)
## vs 35.7M (stock). => ROOT RESTATED: a SCHEDULER EVENT (a task terminate/dispatch) happens ~500 ticks
## early in the candidate, which drains the timeout queue and runs the companion-ready handler early. So the
## real question is TASK-LIFECYCLE timing: WHICH task terminates/dispatches at 5.58M (cand) vs 35.7M (stock),
## and why ~500 ticks early. FINAL NEXT: trace task exit (ext_tsk/exd_tsk/the dispatch) right before the
## handler fires (ic 5.58M cand) on a clean run; identify the terminating task; compare its lifetime vs
## stock. This is circular with the companion bootstrap (the companion-init task's duration), so the task's
## early termination likely traces back to the companion dialog completing fast — but now it is a concrete,
## nameable task whose lifetime can be diffed. (Alternatively PIVOT per TODO: the menu root is at a hard
## REALOS scheduler-timing frontier; the descriptor-split sweep / MMIO sweep / remaining leaks are tractable
## concrete progress while this gets a fresh focused pass.)
## TRIGGER IDENTIFIED (d329, correctly-resolved kernel syms): the handler fires inside an act_tsk
## (activate-task) syscall pass — sequence just before the fire: rtos_dispatch_entry -> act_tsk_syscall_dispatcher
## -> increment_timeout_counter (0x1000d498) -> insert_into_timeout_queue_10011644 -> act_tsk_syscall_dispatcher
## -> call_virtual_slot_2_on_nested_object -> call_two_initializers. A nearby task is lens_fw_update_stub
## (0x105370cc). So an act_tsk at ic 5.58M (cand) vs 35.7M (stock) drains the timeout queue and runs the
## companion-ready handler. SURPRISING RATE DATA: the candidate calls increment_timeout_counter ~15x LESS
## than stock (190 vs 3015 over ~equal 90-100M-instr spans) — the candidate's SCHEDULER IS FAR LESS ACTIVE
## (tasks blocked / not running normally), consistent with a degraded companion-bootstrap state. So the
## handler is NOT firing early because the counter races; it fires early because the specific act_tsk pass
## that drains its queue slot happens early (or the queue is drained by a different, early act_tsk). FINAL
## NEXT: identify the task that act_tsk activates at ic ~5.58M (cand) and why that activation is early vs
## stock; and separately, WHY the candidate's overall scheduler is 15x less active (likely the same root —
## most tasks are stuck waiting on the companion that never truly initializes). The degraded scheduler is
## itself a strong signal: diff which tasks RUN (act_tsk targets) candidate-vs-stock to find the stuck one.
## QUEUE MECHANISM (d329, final): the timeout queue is a µITRON RELATIVE-DELTA queue — increment_timeout_counter
## (0x1000d498) advances a 64-bit tick counter; insert_into_timeout_queue_10011644 (0x10011644) adjusts node
## deltas (node+8 += param_1[2]). The companion-ready handler's node has a relative-time DELTA; it fires when
## the counter passes it. That DELTA is ~8.9x TOO SMALL in the candidate (fire delay ~65 vs ~577 ticks). The
## delta is NOT in the faithful create descriptor, so it is set by the kernel service during create/insert OR
## by a separate start — buried in REALOS internals. SINGLE NUMBER TO FIND: the handler node's time-delta.
## DECODE: FRN_WRWATCH the handler's timeout-queue node's +8 (delta) field (resolve the node addr via a clean
## FT at insert_timeout_queue_node when it inserts THIS handler) and read the delta in candidate vs stock; or
## decode the create service's delta source. This is a fresh kernel-RE task. (Deferred this session — see the
## B-13 descriptor-split detector work for concrete parallel progress.)
## FINAL CONCLUSION (d329): the handler's node is inserted at ~1.67M (cand)/1.06M (stock) via
## insert_timeout_queue_node (descriptor at 0x6a004b50, r4=idx 1) with NO explicit time, and is DISPATCHED
## at 5.58M (cand) vs 35.7M (stock). Stock waits ~34.6M to dispatch it; candidate ~4M. So the handler is not
## on a fixed timer — it is effectively GATED ON THE COMPANION SIGNALING READY, and the candidate's companion
## signals ~8.9x too early. => THE CORE IS THE COMPANION-SPI DIALOG TIMING (the long-standing companion
## bootstrap). The whole poll/alarm/+0x28 machinery is downstream of WHEN the companion reports ready.
## TRUE NEXT (fresh focused session): (1) read the qemu-frn companion/cpucom SPI device model — does it have
## realistic timing, or does it respond purely to firmware polling? (2) trace the SPI command+response dialog
## (companion registers 0x50000106/107/10e + the SPI engine) candidate-vs-stock — does the candidate send
## fewer/different commands so the companion reports ready early? (3) if the emulated companion responds
## identically to both, the divergence is in HOW the candidate drives the SPI (a recompile bug in the
## companion-SPI command sequence / cpucom_execute_transaction's setup). This is where the firmware-vs-
## emulation question finally resolves. Everything above (poll, +0x10c, alarm, timeout-queue) is downstream.
## ======================================================================================================
##
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
## PINNED (d329): the poll's object is a PERSISTENT TABLE ENTRY, not a fresh alloc —
## populate_context_from_global_state (orig 0x10466b4c, runs once in both) sets
## ctx+0x20 = read_table_entry_field(r9) (0x107c11ca). So +0x10c lives on a global companion table
## entry, initialized during COMPANION-TABLE BOOTSTRAP — stock completes it before ic 2.65M, candidate
## not by 5.55M. NEXT: find where the companion table entries' +0x10c is populated and why the candidate
## is behind (skipped/late init, or a dropped store in that enumerator). Companion-bootstrap root, now
## pinned to the table-entry +0x10c init.
## DEEPER (d329): the object IS a cls_105a0828 (vtable 0x105a0828 @ obj+0x4) and cls_105a0828_new RUNS in
## both (12x each). The constructor DOES write +0x10c at the correct offset (packed 0x10683946:
## ldi #0x10c,r13; st r0,@(r13,r8)) — NOT a struct-layout bug. It does field_0x10c=0 then
## field_0x10c=*param_2. So +0x10c ends 0 iff param_2[0]==0. STOCK's cls_105a0828_new wrote
## +0x10c=0x80554594 (from *param_2); so the candidate's param_2[0] is 0 (or a different, zeroed param_2).
## => ROOT is UPSTREAM: what builds the param_2 descriptor passed to cls_105a0828_new (its [0] = the
## +0x10c sub-object ptr). Find the caller of cls_105a0828_new for this object and diff how param_2[0] is
## populated candidate-vs-stock (likely a dropped store / B-1 descriptor-split in the descriptor builder).
## METHODOLOGY CAVEAT (important): heap addresses appear NONDETERMINISTIC across candidate runs (a watch on
## obj+0x10c (0x80552b34) caught NO write in one run but the vtable write at obj+0x4 (0x80552a2c) DID in
## another — same address, different run). So FIXED-ADDRESS WRWATCH across runs is unreliable here; the
## deterministic facts are the crash ic (7272166) and the poll-skip (read_byte_at_offset_0x28 0 hits). Use
## OBJECT-IDENTITY-aware tracing (FT_PC at the constructor, read param_2/*param_2 from the full-reg line
## for the invocation whose r4/result is the poll object) rather than hardcoded heap addresses.
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

## ======================================================================================================
## MENU-ROOT TRACE PLAN (d329, after harvest60 build) — the companion-ready handler is EVENT-dispatched:
## call_two_initializers_10466f6e (sets companion-ready +0x28 via set_flag_at_offset_0x28_10467264, then
## forwards event 0x40002) is registered in a FN-PTR TABLE (cpu/gen/rodata_fnptrs.asm:237,247), NOT via a
## sta_alm/sta_cyc timeout (no such trap in src). So the "fires at tick 1 vs 393" is NOT a miscompiled alarm
## timeout value — it is WHEN event 0x40002 gets DISPATCHED to this handler. The fire-time is downstream of
## whatever posts/dispatches 0x40002. DO NOT keep static-grepping (this NEXT_STEPS zone is dense with
## red-herring/superseded markers — measure first). CONCRETE NEXT PASS (emulator, clean = fresh bios, NO
## FLASH_SAVE): (1) FRN_FT both candidate+stock to disk; (2) find the ic where set_flag_at_offset_0x28_
## 10467264 (packed 0x107f4f4a) first executes in each — candidate ~tick1/ic5.58M, stock ~tick393/ic35.7M;
## (3) trace the CALLER chain that dispatched event 0x40002 in the candidate at that ic (who posts it, from
## which task) and diff vs the stock caller at ITS ic. The divergence = the premature dispatch source. This
## supersedes the sta_alm framing in the CLEAN ROOT block above (there is no alarm; it's event-dispatch).
## Two setters: _10467264 is the real one (fires); _10466fde is called by call_two_initializers_10466f6e's
## decompile but shows 0 trace hits — verify whether _10466fde tail-calls _10467264 or is dead (naming trap).
## VTABLE CONFIRMED (d329): call_two_initializers_10466f6e is a VIRTUAL METHOD of companion obj cls_105a7df8
## (vtable slots 0x105a7e3c + 0x105a7e7c; sibling methods ui_task6_body, dispatch_event_if_type_14,
## dispatch_command_0xb0007, cls_105a7df8_delete). So the handler slot is CORRECT — the 5.58M-vs-35.7M
## divergence is purely WHEN the companion object gets its event dispatched (runtime scheduling/ordering),
## not a miscompiled vtable. firetime.sh's first-fire rp (the invoker) is the datum that resolves it.

## ======================================================================================================
## ★★★★★ MENU ROOT RE-GROUNDED (d329, VALIDATED MEASUREMENT) — supersedes ALL companion-ready-setter
## analysis above (which was MISATTRIBUTED). The tool (FRN_FT_PC) was validated with a known-answer test:
## spi_read_byte (0x104404f8) fires in STOCK at ic 35,746,241 with r5=0x04 (the Cmd:04 POST). So the
## "35.7M" figure is REAL but it is the POST-SEND time (spi_read_byte), NOT set_flag_at_offset_0x28_10467264
## — that setter AND its caller cpucom_poll_on_irq15 (0x10467210) NEVER FIRE in qemu (stock OR candidate);
## the companion-ready-via-IRQ15 path is DEAD in the qemu companion model. Do not chase it.
## THE REAL, MEASURED DIVERGENCE (oracle = first spi_read_byte fire, its ic + r5 command byte):
##   STOCK:     first companion SPI xfer at ic 35,746,241, r5=0x04 (POST), obj r4=0x80551920, reg 0x5c004043.
##   CANDIDATE: first companion SPI xfer at ic  5,616,298, r5=0x00,        obj r4=0x80551920, reg 0x5c004043.
## => The candidate initiates companion comms 6.4x TOO EARLY (5.6M vs 35.7M), same object/reg. Stock runs
## ~30M instrs of init BEFORE the first companion transfer; the candidate jumps to it early, so the companion
## (and the 16 modules) are not ready -> wrong/zero command -> Cmd:80 -> CPUCOM ERROR -> B-6 null crash -> reset.
## This confirms the RACE framing with a clean number, not the dead IRQ15-setter theory.
## NEXT (concrete): what GATES the first companion transfer in stock until 35.7M? Trace backward from stock's
## spi_read_byte@35.7M (its caller cpucom_spi_xfer, that caller's wait/flag) to find the wait that holds
## ui_task6/the poll until init completes; then check why the candidate's equivalent wait returns early (a
## dropped wait, a flag that reads ready too soon, or a task that runs out of order). TOOL: firetime.sh /
## FRN_FT_PC on spi_read_byte (packed addr from map) with FRN_BADPC_NOHALT=1 for the candidate (it crashes
## at Cmd:80 so halt-mode stops the trace early). Oracle = first-fire ic + r5.

## MENU ROOT NARROWED (d329, measured): the divergent WAIT is poll_context_flag_until_status_set
## (0x10466eb4, in cpucom_execute_transaction, at the TOP of ui_task6_body). BOTH stock and candidate
## ENTER ui_task6_body early (stock ic 2.65M, cand ic 5.55M) and enter this poll. The loop RUNS in both
## (check_kernel_call_success_10459fea 1-tick yield fires; read_byte_at_offset_0x28 is INLINED so a pc-watch
## on it shows 0 — do NOT conclude the loop is skipped from that). The loop breaks when the status byte at
## *(ctx+0x28) goes non-zero. STOCK spins here ~33M instrs (2.65M->35.7M) until the companion is ready, THEN
## sends Cmd:04. CANDIDATE breaks after only ~65k instrs (5.551M->5.616M) and sends its transfer immediately
## -> companion not ready -> Cmd:80 -> B-6. So the candidate's *(ctx+0x28) status byte goes non-zero ~500x
## too early. NEXT: FRN_WRWATCH the ctx+0x28 address (ctx = *(ui_task6 param_1 +0x20); from the trace the
## poll's param_1 r4=0x80532e30, so watch 0x80532e30+0x28=0x80532e58 in the candidate) to find WHAT WRITES it
## early, and diff vs stock. set_byte_at_offset_0x29(ctx,1) + clear_flag_at_offset_0x28(ctx) run at poll start;
## the companion-done path (SPI complete / the qemu cpucom model) sets +0x28. Candidate sets it prematurely.

## SETTER REATTRIBUTION (d329): the status byte *(ctx+0x28) that the poll waits on is written by TWO
## candidate setters: set_flag_at_offset_0x28_10467264 (via cpucom_poll_on_irq15 — PROVEN never fires in
## qemu) and set_flag_at_offset_0x28_10466fde (via call_two_initializers_10466f6e, a vtable method of the
## companion obj cls_105a7df8, dispatched on an EVENT). Since IRQ15 is dead in qemu, the live setter is
## _10466fde via call_two_initializers_10466f6e. NEXT_STEPS earlier had these two swapped (the "real one is
## _10467264" note is WRONG for qemu). So the premature +0x28 in the candidate is an EARLY EVENT DISPATCH to
## call_two_initializers_10466f6e. DECISIVE post-build traces: (1) FRN_WRWATCH the candidate ctx+0x28 (watch
## 0x80532e58 if the ctx addr 0x80532e30 is stable) -> the FROM pc names the setter + the ic; (2) fire-time
## of set_flag_at_offset_0x28_10466fde and call_two_initializers_10466f6e in candidate (expect ~5.6M) vs stock
## (expect ~35.7M); (3) then trace what dispatches the event to call_two_initializers_10466f6e early.

## ======================================================================================================
## ★★★★★ MENU ROOT — FULL VALIDATED CHAIN (d329). The candidate's companion-ready fires 6.4x early; every
## link measured on both sides with FRN_FT_PC (tool known-answer-validated). THE CHAIN:
##   populate_context_from_global_state (slot2 of cls_105a7df8; companion init) cand ic 1.67M
##     -> create_kernel_object(&field_0xc) [my B-13 fix; desc 3 words {attr=0,exinf,handler=0x10459448},
##        VERIFIED 3-word via insert_timeout_queue_node reading offsets 0/4/8] -> __trap_find_free_queue_slot
##        -> links a timeout-queue node whose handler = call_virtual_slot_2_on_nested_object
##   [timeout fires] call_virtual_slot_2_on_nested_object -> slot2 -> call_two_initializers_10466f6e
##     -> set_flag_at_offset_0x28_10466fde writes ctx(0x80532e30)+0x28 = 1  :: cand ic 5.576M / STOCK 35.706M
##   -> poll_context_flag_until_status_set (top of ui_task6_body) was spinning on read_byte +0x28; the early
##      =1 breaks it -> first companion SPI xfer (spi_read_byte 0x104404f8) cand ic 5.616M / STOCK 35.746M
##   -> companion not ready -> Cmd:80 (vs stock Cmd:04 POST) -> CPUCOM ERROR -> B-6 null crash -> reset loop.
## MEASURED: ui_task6_body ENTERS early in BOTH (stock 2.65M, cand 5.55M); set_flag_fde fires stock 35.706M vs
## cand 5.576M; spi_read_byte stock 35.746M r5=0x04 vs cand 5.616M r5=0x00. The kernel (unit 000) is byte-stock.
## PENDING BRANCH (trace in flight): stock populate_context_from_global_state (0x10466b4c) first-fire ic.
##   - If ~1.67M (early, == cand): the companion INIT runs at the same time in both, so the timeout DELAY
##     differs -> suspect the descriptor attr (desc[0]; my create_kernel_object fix set 0 — VERIFY stock attr
##     via original 0x104593c8 build; if stock attr != 0 my fix is the regression) or a post-create arm.
##   - If ~31.8M (late): same timeout delay (~43 ticks) in both; the companion INIT itself is GATED ~30M
##     later in stock -> find what holds populate_context/the companion-obj init until ~31.8M (app_main_task1
##     / 16-module init / scheduler release) and why the candidate dispatches it at 1.67M.
## FIX will be at whichever the branch selects. Oracle to confirm any fix: set_flag_fde fire ic -> ~35.7M.

## CORRECTION (d329): stock populate_context fires EARLY too (ic 1.06M; cand 1.67M) — I was misled by FT
## output buffering (the log flushed late). So the companion subsystem is CONSTRUCTED early in BOTH; the
## timeout node is created at ~1M in both. The DIVERGENCE is purely the timeout FIRE time: set_flag_fde fires
## at 35.706M (stock) vs 5.576M (cand) — a fire delay of ~34.6M vs ~3.9M (≈380 vs 43 ticks). Kernel (unit 000)
## is byte-stock, descriptor is 3 words identical-width. So the fire-delay difference must be (a) different
## descriptor VALUES passed by the RECOMPILED create_kernel_object/populate_context (attr/exinf), or (b) a
## different fire TRIGGER (timer tick count vs an event/condition) the node waits on. NEXT: trace what
## triggers the handler (call_virtual_slot_2_on_nested_object rp at fire time) — kernel timer ISR vec56
## (0x1043ce50) => time-based; event-dispatch => condition-based. Then diff the enqueued node / trigger value.

## MENU-ROOT FRONTIER (d329, precise handoff) — resolved to the kernel timeout-queue node fire-time:
## The companion-ready setter chain fires when a KERNEL TIMEOUT-QUEUE NODE is dispatched (handler called from
## kernel 0x1000fb96; r11=0x10011cf4 = DAT_10011cf0 queue). The node is created at ~1M in BOTH via
## create_kernel_object -> find_free_queue_slot_1000d66c -> insert_timeout_queue_node, with NO deadline in the
## create path (node = {attr=0, exinf, handler=0x10459448, id}; find_free_queue_slot requires attr==0, which my
## fix satisfies). Yet it FIRES at tick ~393 (ic 35.706M) in stock vs ~61 (ic 5.576M) in candidate. Since the
## create path carries no deadline and unit 000 is byte-stock, the fire-time must come from EITHER (a) the node
## being a blocked-task WAIT node whose wake condition (a companion event/flag, or a tslp/wai_flg timeout set by
## the BLOCKING call, not by create) is met early in the candidate, OR (b) a separate arm/period call. NEXT
## INVESTIGATION MODE (not static reading): dump the queue node (DAT_10011cf0 + slot*0x18) in stock vs candidate
## right after creation and compare fields; AND trace the kernel timer processor 0x1000fb96 to see what field it
## tests to decide firing; AND find the companion task's blocking wait (the tslp_tsk/wai_flg whose timeout node
## this is). Oracle for any fix: set_flag_at_offset_0x28_10466fde first-fire ic -> must move to ~35.7M.
## Everything else in the chain is MEASURED & SOLID (see the ★★★★★ block above). This is the single open question.

## MECHANISM FULLY RESOLVED (d329) — act_tsk_syscall_dispatcher (0x1000fa2c) is the KERNEL TIMER-TICK
## processor (increment_timeout_counter at top; runs every tick). It walks the timeout list; OUR node is the
## 0x18-stride / flags&8 / DAT_10011cf0 ONE-SHOT branch (lines 61-69). A node has a COUNTDOWN at +8: each tick
## `if *(node+8)!=0 { (*node+8)--; return; }` else fire handler = *(node-8) with exinf *(node-4). So the node
## fires after (node+8) ticks. create_kernel_object sets NO counter -> the countdown +8 is written by a SEPARATE
## ARM op. Stock arms ~393, candidate ~61. THE LAST STEP: find what writes the node+8 countdown (the arm) and
## why the candidate value is ~61 vs stock ~393 — a miscompiled delay/timeout value (likely a dropped/garbled
## arg to a dly/sta_alm/wai_flg or check_kernel_call_success-style timed wrapper on the companion arm path).
## HOW: FRN_WRWATCH the node+8 address (derive node base = DAT_10011cf0 + id*0x18; id from the companion
## create_kernel_object return / the handler-fire trace) and read the FROM pc = the arm function; then diff its
## delay value cand-vs-stock. Fix oracle unchanged: set_flag_fde first-fire ic -> ~35.7M.

## DELTA-QUEUE ARM (d329) — the countdown node+8 is the DELTA in a µITRON delta-queue (insert_into_timeout_
## queue_1000fcd4: param_1[2] = delta, set by CALLER before insert). Our node is the 0x18-stride one-shot
## (DAT_10011cf0, flags&8); the 0x1c cyclic variant is armed by activate_timeout_queue_entry (sta_cyc, via
## manage_kernel_object_handle, unit 127). ALL of this is byte-stock kernel -> the delta VALUE (393 stock / 61
## cand) originates in the companion's APP-level timed arm call. PINPOINT (one trace): FRN_FT_PC on
## insert_into_timeout_queue_1000fcd4 (packed) in candidate, dump r4=node & *(r4+8)=delta & rp; find the fire
## where delta≈61 (0x3d) and node handler=0x10459448 -> the rp chain up to the companion app call that passes
## the delta. Then diff that delay value/computation cand-vs-stock (expect a dropped/garbled arg or a wrong
## constant -> 61 vs 393). That app function is the FIX site. Oracle: set_flag_fde first-fire -> ~35.7M.

## ======================================================================================================
## ★★★★★★ MENU ROOT RESOLVED (d329) — it was a B-3c (__frv_reg_unset) bug, as Andrew predicted.
## The companion-ready timeout node is ARMED by check_heap_alloc_success (0x10459400, unit 127), which the
## poll-setup (initialize_object_with_optional_param, called by poll_context_flag_until_status_set with the
## poll timeout) invokes. Its body: __trap_store_value_in_kernel_table_slot((short)*param_1, __frv_reg_unset(5)).
## arg2 = the DELAY stored into the kernel timeout-queue slot — but the decompiler dropped param_2 to
## __frv_reg_unset(5)=0. VERIFIED vs stock asm: at the trap call r5 is the unchanged incoming param_2
## (measured r5=0x3e8=1000 at entry; only r4 is overwritten). So the candidate armed the companion-ready
## node with delay 0 -> it fired immediately (tick ~61) instead of after the real timeout -> premature
## *(ctx+0x28) -> poll_context_flag_until_status_set broke early -> first companion SPI xfer before the
## companion was ready -> Cmd:80 -> B-6 -> reset loop. FIX: __frv_reg_unset(5) -> param_2 (committed).
## Oracle: set_flag_fde first-fire should move from ic 5.58M toward ~35.7M; dsp dialog should reach Cmd:04.
##
## CLASS SWEEP (Andrew: "eliminate the whole b-3 class"): check_heap_alloc_success was a thin-forwarder-MISS
## because it has logic+a trap call (harvest only hit pure forwarders). scripts/detect_b3c.py + fix_b3c.py
## sweep ALL __frv_reg_unset(N) where the signature declares a param in ABI slot N-4 (r4=1st..r7=4th):
## 491 files / 1479 uses fixed mechanically (ABI-sound: the decompiler emits __frv_reg_unset only for an
## INCOMING register; incoming rN == param N-4). 113 MIXED files remain (some reg maps to an UNDECLARED slot
## -> need a signature change + caller updates; the harder subclass). Building the 491-file sweep now.

## ======================================================================================================
## ★★★★★★★ MENU-ROOT FIX CONFIRMED BY ORACLE (d329): the check_heap_alloc_success B-3c fix (__frv_reg_unset(5)
## -> param_2) MOVED the companion-ready setter set_flag_fde first-fire from ic 5,576,426 (5.58M, premature
## = tick 61) to ic 38,607,139 (38.6M, in stock's ~35.7M range = tick ~393). So the companion-ready timeout
## node now arms with the real poll timeout (param_2=1000) instead of 0, and fires at the correct time
## instead of immediately. THE PREMATURE-COMPANION ROOT IS FIXED (pure C, no asm, per Andrew's principle).
## Running the full dsp dialog (WALL 240s) to confirm the companion handshake now completes (Cmd:04/05) at
## the delayed transfer. If a residual Cmd:80 remains it is a SECOND, downstream issue (now exposed because
## the first is fixed) — chase it with the same spi_read_byte/dsp oracle. Pending: no-regression BADPC sweep
## on the 491-file B-3c build, then COMMIT (all C: the clean B-3c class sweep + the menu fix).

## LAYER 1 FIXED, LAYER 2 FOUND (d329): the B-3c check_heap_alloc_success fix moved the FIRST companion SPI
## xfer (spi_read_byte) from ic 5.6M to 38.6M (stock 35.7M range) — PREMATURE TIMING FIXED. But r5 (command
## byte) is still 0 vs stock 0x04 (POST). So LAYER 2: the companion command byte is 0 not 0x04 -> still Cmd:80.
## The command reaches spi_read_byte via cpucom_spi_xfer; the byte is @(caller stack) per earlier trace. NEXT:
## trace spi_read_byte's caller chain / cpucom_spi_xfer command arg on the FIXED candidate (now at 38.6M) and
## find where 0x04 is dropped to 0 (likely ANOTHER B-3c/dropped-arg, or a wrong POST-vs-message-loop path).
## Oracle: spi_read_byte first-fire r5 -> 0x04.

## LAYER 2 (d329, post layer-1-fix): companion command byte 0x80 with out_size=0 (EMPTY/malformed) is
## written to 0x5c004043 by spi_read_byte (pc 0x107f85dc, caller rp 0x106c414a = cpucom_spi_xfer). Stock's
## first is 0x04 with out_size=5 (a real POST: 01 1f 00 13 04). So the candidate's first companion MESSAGE is
## uninitialized/wrong (0-size). Both send via the message loop (cpucom_poll_driver -> cpucom_spi_xfer); the
## divergence is the first MESSAGE's content. The companion units (142/143) have NO __frv_reg_unset left, so
## the drop is in the MESSAGE PRODUCER (whoever mbx_send's the first companion msg) or a different class
## (descriptor/B-13 in the msg object, B-15 constant). NEXT: trace the producer of ui_task6's first mailbox
## message (mbx_send to ctx+0x18) and why its command/size are 0x80/0 vs 0x04/5. Oracle: spi_read_byte r5 /
## the 0x5c004043 write -> 0x04 with out_size 5.
## LAYER 2 LEAD (d329): initialize_cpucom_message sets cmd=0/insize=0 (default empty msg). The real command
## is set later by a send_cpucom_command_sequence_* (unit 139) / send_control_message_sequence (138). Candidate
## first send = 0x80, stock = 0x04 (POST). NEXT: trace which send_* runs first in cand vs stock and its cmd arg
## (watch cpucom_msg_set_cmd 2nd arg). The senders pass (uint8_t)<val> — a wrong/dropped val or wrong send
## ordering. Companion units have no __frv_reg_unset so check 139/138 senders for a B-15 constant / wrong cmd.

## B-3 CLASS ENDGAME (d329): __frv_reg_unset driven from 2145 toward a small tail. Converted to proper C:
## 491 B-3c declared-param + 166 void-forwarders + 32 indirect-mixed + 65 harvested-with-params/direct-B-3c.
## REMAINING: (a) ~87 direct-called .c + 9 harvested that need a NEW param (undeclared slot) AND have direct
## callers -> require CALLER THREADING (add param up the call chain to where the value is computed); the only
## non-mechanical subset. (b) 6 GENUINE can't-be-C functions that CORRECTLY stay as harvested asm per Andrew's
## principle: dispatch_context_switch, rtos_dispatch_tail_restore (REALOS context-switch: set SP, save/restore
## all regs, non-returning), loop_write_seven_pointers, initialize_rtos_kernel (read arbitrary caller regs
## r0_in/caller_r8/r9/r10/r14/r13_in). These are the legitimate asm residue — do NOT convert.

## LAYER 2 FRONTIER (d329, precise): cpucom_spi_xfer writes the companion command = cpucom_resp_get_byte0(
## param_2) = BYTE0 of the mailbox message ui_task6_body received (via mbx_receive at ctx+0x18). Candidate's
## first message byte0=0x80, stock=0x04 (POST). cpucom_msg_set_cmd(msg,0) inits byte0=0; the senders
## (send_cpucom_command_sequence_*, unit 139) set it to ROM constants (0x64/0x78/..). So the candidate's first
## message is either (a) a wrong/early message (ordering) or (b) byte0 set to 0x80 by a specific producer.
## NEXT (focused trace, like layer-1): FRN_WRWATCH byte0 of the message param_2 in cpucom_spi_xfer (get its
## addr from a spi_xfer trace), find WHO writes 0x80 and when; AND trace the mbx_send that queues ui_task6's
## first message (sender of a byte0=0x80 vs stock 0x04 message). Oracle: cpucom_spi_xfer's written byte -> 0x04.

## LAYER 2 REFINED (d329): the companion command 0x80 is byte0 of a message that cpucom_repost_request CLONES
## from a source message (it copies cpucom_resp_get_byte0(src)). The source message is a HEAP object (addr
## reused across allocs, so fixed-address WRWATCH is unreliable here). KEY: 0x04 (the POST) IS written to that
## slot at other times (pc 0x10010ad8) -> the POST command EXISTS in the system; the candidate's FIRST repost
## just picks up a byte0=0x80 message instead of the 0x04 POST. So layer-2 = MESSAGE CONTENT/ORDERING in the
## companion queue: the candidate queues/reposts a 0x80 message before the 0x04 POST. NEXT (allocation-aware,
## not fixed-addr): instrument the qemu heap allocator or trace cpucom_msg_set_cmd(msg,0x80) vs (msg,0x04)
## first-fire ic + the mbx_send ordering; find why the 0x80 message is first. This is a scheduling/ordering
## layer below the (now-fixed) companion-ready timing. Layer-1 (timing) fix stands and is oracle-verified.

## LAYER 2 ROOT (d329, sharp): candidate cpucom_msg_set_cmd is called only 4x up to ic 40M, commands =
## {0, 0, 0x80, 0x80} -- NEVER 0x04. So the candidate NEVER PRODUCES the POST (Cmd:04) companion message.
## The only non-zero command (0x80) is set by cpucom_repost_request (rp 0x106c3a5c) -- a repost of a
## response/feedback message, not the POST. Stock produces the 0x04 POST (a separate producer). So layer-2
## = the POST-message PRODUCER never runs (or is skipped) in the candidate. NEXT: find who produces the 0x04
## POST message in stock (trace stock cpucom_msg_set_cmd for the 0x04 call + its rp), then check why the
## candidate's equivalent producer doesn't run / produces 0x80 instead. Likely a skipped init task or a
## dropped/wrong command constant in the POST producer (unit 139 send_cpucom_command_sequence_* or the
## companion-init path). Oracle: cpucom_msg_set_cmd should be called with r5=0x04 before the first xfer.

## ★★★★★★★ MENU LAYER-2 ROOT FOUND + FIXED (d329) — B-12 wrong-width global:
## The companion POST command (0x04) is read from uRam105a7b44 (a BYTE at ROM 0x105a7b44 = 0x04; the next
## byte 0x105a7b45 = bRam105a7b45 = 0x05 = the POST insize). globals.h declared it `uint32_t`, so
## execute_cpucom_transaction read the big-endian WORD 0x04050000 and, passing it to cpucom_msg_set_cmd(uint8_t),
## truncated to the LOW byte = 0x00. So the candidate produced the POST message with command 0 (-> Cmd:80/empty)
## instead of 0x04. The original does a byte load (0x04). FIX: `extern uint8_t uRam105a7b44;` (only use is
## execute_cpucom_transaction). MEASURED: execute_cpucom_transaction DOES run (ic 38.6M) after the layer-1
## timing fix; it just sent cmd=0. With both layers fixed the candidate should send Cmd:04 POST. Oracle: dsp
## dialog -> Cmd:04/05 like stock. B-12 class = same as the RTC watch-counter width bug (globals.h type width).

## BUILD HYGIENE BUG (d329): cpu/build.sh does NOT recompile when a HEADER (globals.h/funcs.h) changes --
## it keys recompilation off each .c's own mtime vs its .obj, so a header-only edit leaves ALL .obj stale.
## This silently defeated the layer-2 fix (uRam105a7b44 uint32_t->uint8_t in globals.h): execute_cpucom_
## transaction.obj stayed stale (old uint32_t read -> cmd still truncated to 0) until I touched the .c +
## removed its one .obj. FIX build.sh to also recompile any .c whose .obj is older than globals.h/funcs.h
## (cheap: compare against the two header mtimes). WORKAROUND meanwhile: after any header edit, `touch` the
## affected .c files (or rm just their .obj -- do NOT rm all .obj, a full rebuild is very slow).
## LAYER 3 (d329): stock cpucom_msg_set_cmd sequence has NO 0x80 (0, 0x04 POST, 0x04, 0x01x3, 0x58). The
## candidate sends a SPURIOUS 0x80 (cpucom_repost_request via ui_task5_body, rp 0x106c3a5c) that stock never
## does. So the candidate reposts an extra 0x80 message before/instead of the POST. Check AFTER the layer-2
## rebuild: if the valid POST (0x04) now goes first the spurious repost may be moot; else trace why ui_task5
## reposts 0x80 (its wait-flag/condition at *(ctx+0x30)+0x60, and the source message byte0=0x80 = a companion
## response code reposted as a command). Oracle: candidate command sequence should match stock (0x04 first).

## LAYER 3 LOCATED (d329): the spurious 0x80 repost happens because ui_task5_body reposts (vs resubmits)
## when *(obj+0x60)==0 (obj = *(ui_task5_param+0x30)). +0x60 is set to 1 by call_helper_on_flag_match ONLY
## on event param_2==0x1090001 && param_3!=0; also touched by copy_reply_into_context / update_byte_at_offset_
## with_mask (the companion reply path). So in the candidate +0x60 stays 0 -> repost 0x80 (stock never does
## this; stock's cmd sequence has no 0x80). NEXT: trace whether event 0x1090001 is dispatched (with param_3!=0)
## in the candidate, OR whether the companion reply that sets +0x60 is mishandled. Likely another dropped
## dispatch arg (B-3v) or a B-12/descriptor bug on the reply path. MENU STATUS: layer-1 (timing) + layer-2
## (POST cmd B-12 width) FIXED & committed; layer-3 (this 0x80 repost / +0x60) is the current blocker; there
## may be further layers in the Cmd:05->status handshake after that.
## LAYER 3 SYNTHESIS (d329): the dsp shows ONE Cmd:80 then CPUCOM ERROR -> B-6 crash -> the POST (0x04, now
## correct) is NEVER sent (crash first). So the spurious 0x80 repost is the gate. Stock: POST 0x04 -> ack ->
## resubmit 0x01 (x3). Candidate: reposts 0x80 BEFORE the POST. The 0x80 = a companion response code; since
## the model is silent until the POST, there is no real reply, so the 0x80 is likely a PREMATURE read of the
## companion data reg (default ~0xff/0x80) treated as a reply and reposted by ui_task5. FIX DIRECTION: stop
## ui_task5 reposting before the POST ack (ordering/scheduling), or fix obj+0x60 so it resubmits-after-POST
## like stock. Trace: ui_task5_body first-fire ic vs the POST send ic (cand vs stock); + what writes the
## reply-source byte0=0x80 (allocation-aware, the field is heap-reused so fixed-addr WRWATCH is unreliable).

## ★★★ MAJOR: SECOND FORWARDER-DROP PATTERN (d329) — caller_rN / rN_in. The decompiler drops an incoming
## caller register in TWO forms: (1) __frv_reg_unset(N) [the stub — swept ~88%]; (2) an UNASSIGNED LOCAL named
## caller_rN or rN_in (e.g. `uint8_t *r5_in;` read without assignment = the incoming rN). Form (2) is in 258
## .c files, 38 of which FORWARD it to a callee — the SAME B-3/B-8 bug, but my whole __frv_reg_unset sweep
## MISSED them (different regex). MENU LAYER-3: invoke_context_handler(param_1) reposts `r5_in` (the message
## in the incoming r5) via cpucom_repost_request -> get_registered_reply_code calls it; the dropped r5 = the
## reply message to repost. If r5_in reads garbage (not the caller's r5), it reposts a wrong/0x80 message ->
## the spurious companion command. FIX like B-3c: declare the param (invoke_context_handler(param_1, uint8_t
## *param_2), replace r5_in with param_2) + thread the 1 caller (get_registered_reply_code). SWEEP the whole
## 258-file class the same way (detect: unassigned local matching caller_r[4-9]/r[4-9]_in, forwarded). Verify
## each vs original asm (B-8 register-read behavior depends on compiler alloc -- may read rN or garbage).

## caller_rN / rN_in CLASS + IMPROPER-SPLIT INSIGHT (d329, Andrew): when a function reads a NON-C-PASSED
## register (caller_rN / rN_in unassigned local = incoming register N), FIRST check for an IMPROPER FUNCTION
## SPLIT -- the decompiler often split a function so a value the ENCLOSING context already holds looks like a
## fresh dropped register. The fix is then to RECONSTRUCT the value in C from what the caller DOES have, NOT to
## thread the register through N callers. MENU LAYER-3 was exactly this: invoke_context_handler read r5_in (the
## message to repost); its 1 caller get_registered_reply_code (45 callers of ITS own) already holds the ctx
## param_1, and the message is just param_1[6] (every sender builds it via cpucom_msg_set_cmd(param_1[6],..)).
## So the 2-line fix = get_registered_reply_code passes param_1[6]; NO 45-caller thread. scripts/detect_caller_
## reg.py: 344 arg-register drops (r4..r7) [1 substitute + 343 add], 126 B-8 (r8..r15, harvest). scripts/fix_
## caller_reg.py sweeps the 20 indirect add-param ones; the 157 direct-caller ones each need the split check
## (often reconstructible like layer-3, not a real thread). Verify each vs stock (the value IS reconstructible).
