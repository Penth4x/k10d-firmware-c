# d328 — B-15 merged-case class + menu deadlock analysis (handoff)

## B-15 (NEW, nasty): decompiler MERGES switch arms with different constants, keeps ONE
Found by scripts/detect_merged_cases.py (22 -> 17 suspects after fixes). Each is an event
dispatcher that raises a DIFFERENT event-flag bit per event code; the decompiler folded cases
and kept one arm's constant. verify_setflg.py (linear) is BLIND to it (false OK). Use
scripts/extract_flag_map.py (disasm cmp-cascade -> code->pattern, COND flagged MANUAL) +
cross-check stock int40 runtime patterns.
FIXED (committed bd0c6a65, e2871ffd): handle_event_flags_and_signal, set_flag_if_event_id_matches_1040b88c,
startup_completion_to_flag, set_flag_on_event_code, check_id_and_set_flag, validate_id_and_set_flag_104c2c56.
REMAINING suspects (17): dispatch_timer_event_handler, set_flag_if_param_in_range, dispatch_event_by_id_1050b652,
set_status_flag_by_code, dispatch_event_by_type_104bcec8 (C=[], computed), dispatch_event_by_id_104130aa,
mode_nav_request, poll_input_and_update_state (off-path, input loop), dispatch_event_by_id_10514056,
check_and_activate_object, dispatch_event_to_object_1039e58c (042_debug=B-14), ui_request_dispatch,
store_exposure_value_from_params, validate_and_store_event_params, validate_event_id_and_set_flag (255_debug),
gate_1039ed32, validate_and_set_flag_on_event. (The "empty extractor map" ones dispatch on something other
than r5=param_2 — need manual per-site analysis, e.g. poll_input's call@10413818 = (iVar3==0)?0x4000000:0xc000000.)

## d329 CORRECTION — the "+0x28 / call_two_initializers premature" deadlock root (commit bcebf548) is a FALSE LEAD
FRN_WRWATCH on cpucom status byte 0x80532e58, run on BOTH binaries, shows STOCK and CANDIDATE each do the
IDENTICAL 3 writes: =0 (construct, cls_105a7df8_new), =0 (clear), =1 (set via
set_flag_at_offset_0x28_10466fde+8 <- call_two_initializers_10466f6e). The claim "stock reaches
call_two_initializers 0 times" was WRONG. The whole cpucom construction chain is FAITHFUL
(populate_context_from_global_state 0x10466b4c; create_kernel_object descriptor {0,B+0xc,0x10459448};
ROM vtable VT_105a7e68 slot2=0x10466f6e genuine, adj -12 -> writes B+0x28). The +0x28 path is NOT the
deadlock. NOTE the project pattern: reg_framework_send -> set_flg_obj pattern-drop -> cpucom-poll -> +0x28
were each declared "the root" then disproven. Trust only a FRESH signal_diff on the current build, below.

## MENU DEADLOCK — the real blocker is NOT B-15 (first-divergence != cause, AGAIN)
- handle_event_flags fix VERIFIED (flag 0x34 now 0x1, signal cascade matches stock thru #6) but candidate
  STILL deadlocks at the IDENTICAL 2162 syscalls. So the B-15 signal-pattern bugs are real but not what
  gates the deadlock.
- Diagnostic: scripts/signal_diff.py compares the ordered kernel SIGNAL sequence (set_flg id+pattern,
  sig_sem/snd_mbx id) cand vs stock. Candidate produces 7 signals then STOPS; stock produces 200.
- Deadlock shape: all pump tasks block on rcv_mbx(TMO_FEVR) (mbx 2,3,4,...) + wai_flg (0x2d,0x33,0x35).
  Candidate snd_mbx=1 (mbx 2), stock=43. The message cascade does not propagate past the first send.
- cpucom RULED OUT: candidate DOES reach ui_task6_body (0x1080db48) and cpucom_execute_transaction
  (0x106c580a); poll_context_flag_until_status_set exits after 1 poll (status byte reads nonzero
  immediately — emulated cpucom responds fast) vs stock 501. ui_task6 then just joins the blocked pumps.
- Signal #7 (first thing stock does that cand doesn't) = set_flg(flag 0x37, 0x4) from mode_ctrl_on_event
  (0x104305ce, unit 115) when event 0x10002/0x10003 reaches the mode controller. Candidate never gets
  that event -> blocker is UPSTREAM in the message flow (who SENDS event 0x10002/0x10003?).
- NEXT: trace the init-path task that drives the cascade from signal #6 -> #7. Find who sends the event
  that triggers mode_ctrl_on_event, and why the candidate's sender doesn't. Likely a B-3/B-15/other bug
  in an INIT-path message handler (NOT the event-loop/input functions, which run after the menu is up).

## Tools built (committed): detect_merged_cases.py, extract_flag_map.py, signal_diff.py, verify_setflg.py
## Reliable: FRN_INT40_SVC=all + stdbuf (scripts/syscall_trace.sh); signal_diff; packed-addr resolver
##   (firmware.map, tr -d '\r', ABS lines). Map extraction MUST strip CRLF (fixed in 72c21068).

## ★★★ COMPLETE DEADLOCK CHAIN (d328, fully traced) ★★★
The menu black-screen is a CIRCULAR-ish event-cascade stall, NOT a single decompiler bug (yet):

1. Mode-event-manager task body = loop_receive_and_dispatch_message (unit 116, packed 0x1078be96,
   task-body ptr overlay at CONFIRMED_TABLE 0x1059f11c = correct). It runs, calls
   process_mode_transition_sequence (unit 117, packed 0x107b0006) ONCE at startup BEFORE its msg loop.
2. process_mode_transition_sequence HANGS at check_bit2_of_field_at_offset_0x7c (0x10431dee, packed
   0x1066ad3c): eventflag_wai_flg(flag 0x37, pattern 6 = bits1,2, TWF_ORW, TMO_FEVR).
   (Confirmed: FRN_DISAS of 0x107b0006 stops at +0x4e, the call to 0x1066ad3c never returns.)
3. Flag 0x37 is created with iflgptn=0 (wait_flg_obj(mode_ctrl+0x7c,0) -> alloc_or_acquire_heap_block
   (..,0,0)). So BOTH stock and candidate block at check_bit2 initially.
4. STOCK unblocks: set_flg(flag 0x37, 0x4) fires at stock line 3717 (= signal #7 in signal_diff),
   from mode_ctrl_on_event(unit 115, event 0x10002||0x10003 -> set_flg_obj(mode_ctrl+0x7c, 0x4)).
   bit2=0x4 satisfies check_bit2's ORW pattern 6 -> returns -> POST proceeds -> companion 'A'/'H' ->
   flag 0x37 fully set -> menu.
5. CANDIDATE never produces signal #7: event 0x10002/0x10003 never reaches mode_ctrl_on_event, so
   flag 0x37 bit2 is never set, check_bit2 waits forever, no POST (execute_cpucom_transaction 0x1070e326
   reached 0x), companion silent (FRN_DSP_LOG=1 shows 0 exchanges vs stock POST/X/A/A/H/B).
6. Event 0x10002/0x10003 senders/handlers (grep 0x10002): dispatch_mode_change_event_1047cdb8 (unit 168,
   sends 0x10002 when mode-state *(field_0x40+4)==1), call_helper_with_flag_0x10002/3 (unit 169),
   mode_ctrl_on_event (115, handler), AND THREE B-15 MERGED-CASE SUSPECTS: dispatch_event_by_type_104bcec8
   (224), set_status_flag_by_code (269), mode_nav_request (097).
   => NEXT: trace WHO should send event 0x10002 at boot and why candidate doesn't. Likely a B-15
   merged-case or a mode-state computation bug in one of units 168/169/224/269/097. Fix THAT (on-path),
   not the 6 already-fixed B-15s (off deadlock path).

## Why B-15 campaign didn't unblock: the 6 fixed B-15s (handle_event_flags, set_flag_on_event_code,
## etc.) are real bugs but OFF the deadlock path. The ON-path bug is in the 0x10002-event generation.
## signal_diff #7 (set_flg 0x37) is the exact unblock; chase its producer chain.

## CORRECTION (d328): clear_flag_at_offset_0x28 is NOT the bug — it correctly does
## `*(param_1+0x28)=0` (the ret:d delay-slot store IS present). An earlier grep with `^\s*\*`
## filtered the C pointer-deref line as if a comment — FALSE LEAD. Lesson: never use `grep -v '^\s*\*'`
## to strip comments from C; it eats `*ptr = ...` statements. Use Read, not grep, to inspect bodies.

## REFINED cpucom divergence (verified facts): candidate poll_context_flag loop runs ~0 iterations
## (service 1000e4e0 from poll = 0; stock = 501). poll_context_flag only loops if
## test_flag_clear_if_active(*(ctx+0x20)) is true, which needs *(*(ctx+0x20)+0x10c) != 0 (a transfer
## object). BUT the poll is NOT the SPI handshake — the SPI is cpucom_spi_xfer <- cpucom_poll_driver
## <- ui_task6 (on a mbx-4 message). ui_task6 blocks on mbx 4; the POST command is queued by
## execute_cpucom_transaction <- init_object_and_check_field <- process_mode_transition_sequence
## (BLOCKED at check_bit2). So the circular dep stands. STOCK also blocks process_mode_transition_sequence
## at check_bit2 (line 2171, scheduler switches away) yet still bootstraps the POST -> there is an
## INDEPENDENT first sender to ui_task6's mbx 4 (or an IRQ-driven SPI). THE KEY UNRESOLVED QUESTION:
## who sends the FIRST mbx-4 message to ui_task6 in stock, before/independent of
## process_mode_transition_sequence? Find it with FRN_FT (log mbx_send_message + ui_task6 + cpucom_* from
## boot) -> that sender is what the candidate fails to run. That is the deadlock root, not B-15.

## ★ CORRECTED deadlock understanding (d328, after the cpucom/B-16 detour) ★
- B-16 harvest of check_kernel_call_success REGRESSED (7->0 signals) and was REVERTED (cc46cfc9):
  harvest_asm turns a kernel-service call into a DIRECT call to the recompiled service, but services
  must go via int#0x40 traps -> ORIGINAL handlers (vector table still original). NEVER harvest a
  function that calls a kernel service. Also the candidate made its 7 signals WITH the r4=0 bug, so
  check_kernel_call_success / the cpucom poll is NOT the deadlock root.
- The deadlock is an intertwined CIRCULAR bootstrap, pieces mapped:
  check_bit2 waits flag 0x37 (bits1,2 ORW) -> flag 0x37 bit2(0x4) set ONLY by mode_ctrl_on_event
  (unit115) on event 0x10002||0x10003 -> event 0x10002 produced by dispatch_mode_change_event_1047cdb8
  (unit168, vtable-dispatched, no C callers) when mode-state *(field_0x40+4)==1, via vtable[2] on
  *(field_0x40+8) -> that's mode_ctrl_on_event. Companion status events are 0xa00xx (NOT 0x10002), so
  0x10002 is a MODE/POWER event, but the mode-state may itself be updated by the cpucom response ->
  still circular.
- The candidate produces 7 signals then never produces signal #7 (set_flg 0x37). It never sends event
  0x10002 (mode-state != 1, or dispatch_mode_change_event's vtable chain never runs).
- TOOLING GAP: FRN_FT_FUNCS mode logs 0 entries for vtable-dispatched targets (mode_ctrl_on_event,
  dispatch_mode_change_event) — unreliable. FRN_FT_PC (trigger) mode DID work (handle_event_flags).
  Need a reliable way to capture the call stack at stock's set_flg(0x37) to find the 0x10002 source.
- RECOMMENDED NEXT: (1) fix FRN_FT to log vtable-jump targets, OR use FRN_FT_PC=0x10430532 (mode_ctrl_
  on_event) + read the window for the caller; (2) determine the candidate's mode-state value and where
  it is read (likely a B-12 MMIO or B-15 bug in the settings/mode object construction); (3) the cpucom
  handshake is real but DOWNSTREAM — defer. B-15 cleanup (10 real merged-case instances) is safe,
  committed-value work to continue meanwhile.
## CORRECTION: dispatch_mode_change_event_1047cdb8 is NOT the event-0x10002 source (stock reaches it 0 times). The 0x10002 sender is still unknown — other candidates: call_helper_with_flag_0x10002 (unit169, invoke_virtual_slot_two_1047d840(.,.,0x10002)), or a vtable dispatch to mode_ctrl_on_event. DEADLOCK HANDED OFF — needs fresh analysis of what dispatches event 0x10002 to the mode controller at boot.

## ★★★ ACCURATE deadlock root (d328 final) — the cpucom poll IS the critical path ★★★
STOCK (int40 lines ~3697-3717): poll_context_flag runs 501 iters (allocate_kernel_object_1000e4e0
r4=1 rp=poll_context_flag+0x24); WHEN IT COMPLETES, cpucom_execute_transaction cleanup runs
(release_context_two_fields) and set_flg(flag 0x37, 0x4) fires from mode_ctrl_on_event+0x9c, then
ui_task6 returns to rcv_mbx(mbx 4). So: poll completes -> cpucom dispatch_context_virtual_op ->
mode_ctrl_on_event(event 0x10002) -> set_flg(0x37) = SIGNAL #7 -> check_bit2 unblocks -> boot proceeds.
CANDIDATE: poll_context_flag runs only 1 iteration (service 1000e4e0 called once) then exits ->
dispatch never fires event 0x10002 -> flag 0x37 never set -> deadlock.
- The r4=0 __frv_reg_unset bug is NOT the cause: service 1000e4e0 treats r4=0 and r4=1 identically
  (both < 0x7fffffff, same branch). The harvest fix regressed (direct-call-to-recompiled-kernel) and
  was reverted. B-16 is real but off THIS path.
- WHY the poll exits after 1 iter: poll_context_flag's loop breaks when read_byte_at_offset_0x28
  (cpucom status byte at ctx+0x28) != 0. initialize_object_with_optional_param clears it to 0, so
  something sets it non-zero after iter 1. The op_helper (k10d_cpucom.c) says the ATTENTION IRQ
  (vector 31, raw 0x1049109e, src 0xf) POSTS obj+0x28 "ONLY if its transfer object is active". So
  the candidate's attention ISR likely posts +0x28 PREMATURELY (false "status ready") -> poll exits
  before the real companion handshake -> no event 0x10002. OR test_flag_clear_if_active(*(ctx+0x20))
  goes false after iter 1 (transfer object +0x10c deactivated early).
- RECOMMENDED NEXT: trace, in the candidate, poll_context_flag's loop exit (which branch: the
  read_byte_0x28!=0 break or the test_flag_clear_if_active false) and WHAT writes ctx+0x28 (FRN_WRWATCH
  on the cpucom ctx +0x28) between iter 1's start and the read. Compare to stock. The bug is in the
  cpucom transfer-object/attention-ISR setup (unit 142/126/143), or the ISR vector still-original
  (TODO) misfiring. This is the ONE thing that unblocks the whole menu.

## ★★★★ DEEPEST deadlock locus (d328, the pin) ★★★★
Candidate's cpucom poll exits after 1 iter because ctx+0x28 (status byte) reads 1. set_flag_at_offset_0x28_10466fde
(sets +0x28=1) is reached ONCE in BOTH stock and candidate — BUT via DIFFERENT callers/timing:
  - STOCK: set_flag_at_offset_0x28 reached 1x, call_two_initializers_10466f6e reached 0x. So stock sets
    +0x28 via a different path, NOT during the poll (so the poll's initialize_object_with_optional_param
    clear holds, +0x28 stays 0 for 501 iters).
  - CANDIDATE: set_flag_at_offset_0x28 reached 1x VIA call_two_initializers_10466f6e, which runs DURING
    the poll's yield -> +0x28=1 after the clear -> poll reads 1 -> exits after 1 iter.
call_two_initializers is dispatched via call_virtual_slot_2_on_nested_object -> vtable[2].fn. The candidate
reaches that vtable[2] call when stock does NOT. The vtable slot likely points to the same function in both
(CONFIRMED_TABLE), so the DIVERGENCE is the UPSTREAM CONTROL FLOW reaching call_virtual_slot_2_on_nested_object.
  => NEXT: find who calls call_virtual_slot_2_on_nested_object and why the candidate's path reaches it during
     the poll but stock's doesn't. Likely another B-3/B-10b/vtable bug that mis-routes the cpucom object's
     event handling so it runs the "status ready" initializer prematurely.
ALSO FOUND (real B-3, fix separately): invoke_virtual_slot_3_on_member_10466ffa (0x10466ffa) is typed
(void*) but the original forwards r5=0x40002 (an event code) + r6=0 to vtbl[3].fn; the C drops both. Callers:
call_two_initializers_10466f6e (0x40002), dispatch_event_if_type_14, dispatch_command_0xb0007 (unit 142).

## ★★★★★ DEFINITIVE deadlock root (d328, FRN_WRWATCH-proven) ★★★★★
FRN_WRWATCH on the cpucom status byte (0x80532e58 = cpucom-obj 0x80532e30 + 0x28) in the candidate shows 3 writes:
  1. =0 from cls_105a7df8_new+0x8c          (object construction clears it)
  2. =0 from clear_flag_at_offset(.)+0 rp initialize_object_with_optional_param+0x12  (the POLL's clear)
  3. =1 from set_flag_at_offset_0x28 rp call_two_initializers_10466f6e+0xe             (PREMATURE SET, after #2)
Write #3 (the premature +0x28=1) happens AFTER the poll's clear, so poll_context_flag reads 1 on its
FIRST iteration and exits (stock runs 501 iters with +0x28 staying 0). Call chain of write #3 (candidate FT):
  act_tsk_syscall_dispatcher+0x16a (kernel `call @r9`, r9=task-body/callback ptr, r4=0x80532e3c)
    -> call_virtual_slot_2_on_nested_object(0x80532e3c)  [a vtable[2] dispatch on obj *(.+4)]
    -> call_two_initializers_10466f6e(0x80532e30)        [the cpucom obj]
    -> set_flag_at_offset_0x28 => cpucom-obj+0x28 = 1
STOCK reaches call_two_initializers 0 times — it NEVER runs this. So the candidate uniquely activates a
task/callback (body = call_virtual_slot_2, arg 0x80532e3c) that prematurely marks the cpucom status ready.
  => ROOT is at the TASK-ACTIVATION / object-vtable level: either (a) the task's body/arg fnptr in its TCB
     or creation table is wrong (points at call_virtual_slot_2 or obj 0x80532e3c when it shouldn't), or
     (b) obj 0x80532e3c's vtable[2] is a mis-relocated/truncated slot pointing at call_two_initializers, or
     (c) this task is activated with wrong priority/timing so it preempts the poll.
  => NEXT: identify which task (task id) has body=call_virtual_slot_2 / arg 0x80532e3c; check its TCB
     body+arg vs stock; check obj 0x80532e3c's vtable[2] slot for a relocation/truncation bug (cf VT_1059f088
     truncation); and whether act_tsk activates it wrongly. This is the ONE thing blocking the menu.
