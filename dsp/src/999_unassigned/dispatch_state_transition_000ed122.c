/* @k10d dispatch_state_transition_000ed122 @ 0x000ed122
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Performs a state transition based on param_1, executing a timed sequence of operations
 *   when param_1 is 0.
 * summary:
 *   The function branches on param_1. If 0, it calls compute_signed_delta_from_flag and
 *   write_masked_field_and_call_two_routines, then checks two bit flags in DAT_0003c396 and
 *   DAT_0003f3e1. If both are clear, it executes a sequence involving
 *   busy_wait_on_mode_flag, set_three_byte_flags_000ecde4, a 1000-unit delay
 *   (update_state_flags_and_status_byte), a wait loop on bit 2 of DAT_0000004f, clearing
 *   that bit, set_two_byte_state_pair_000ecd6c, and another delay. If the flags are set, it
 *   calls busy_wait_on_mode_flag with 2000. Finally, it calls compute_signed_delta_pair. If
 *   param_1 is 1, it only calls compute_signed_delta_pair. Otherwise, it calls
 *   compute_signed_delta_from_flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_000ed122(int param_1)

{
  if (param_1 == 0) {
    compute_signed_delta_from_flag();
    write_masked_field_and_call_two_routines(0xf,7);
    if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
      busy_wait_on_mode_flag(0x2ee);
      set_three_byte_flags_000ecde4();
      update_state_flags_and_status_byte(1000);
      do {
      } while ((DAT_0000004f & 4) == 0);
      DAT_0000004f = DAT_0000004f & 0xfb;
      set_two_byte_state_pair_000ecd6c();
      update_state_flags_and_status_byte(1000);
    }
    else {
      busy_wait_on_mode_flag(2000);
    }
    compute_signed_delta_pair();
  }
  else if (param_1 == 1) {
    compute_signed_delta_pair();
  }
  else {
    compute_signed_delta_from_flag();
  }
  return;
}
