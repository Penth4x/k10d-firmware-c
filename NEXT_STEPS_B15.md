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
