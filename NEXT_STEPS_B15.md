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
