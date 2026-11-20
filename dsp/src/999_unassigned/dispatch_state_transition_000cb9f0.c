/* @k10d dispatch_state_transition_000cb9f0 @ 0x000cb9f0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates a status flag and calls a state handler based on the result of a check
 *   function.
 * summary:
 *   The function checks bit 7 of DAT_0003ce00 and the return value of
 *   evaluate_state_flag_condition. If the condition is met, it calls
 *   poll_four_word_sequence. Otherwise, it calls run_state_machine_loop; if that returns 0,
 *   it calls update_status_flag_bits_000cba34 and check_and_clear_state_flags_000ce88c.
 *   Finally, if a local state variable is non-zero, it calls
 *   poll_event_and_dispatch_000cbe84 with that state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_000cb9f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (((DAT_0003ce00 & 0x80) == 0) || (iVar1 = evaluate_state_flag_condition(), iVar1 != 0)) {
    poll_four_word_sequence();
  }
  else {
    iVar2 = run_state_machine_loop();
    if (iVar2 == 0) {
      update_status_flag_bits_000cba34();
      iVar2 = 2;
      check_and_clear_state_flags_000ce88c();
    }
    else {
      iVar2 = 0;
    }
  }
  if (iVar2 != 0) {
    poll_event_and_dispatch_000cbe84(1,iVar2);
  }
  return;
}
