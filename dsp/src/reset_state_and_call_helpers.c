/* @k10d reset_state_and_call_helpers @ 0x000cb060
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Conditionally clears specific bits in global flags and zeros several variables before
 *   invoking four helper functions.
 * summary:
 *   The function checks bit 0 of DAT_0003c022; if clear, it masks DAT_0003c58b and
 *   DAT_0003c4d2 and zeros DAT_0003c041. It then calls compute_flagged_offset_values,
 *   copies DAT_0003c043/44 to DAT_0003c070/71, zeros DAT_0003c498/99, and finally calls
 *   clamp_two_byte_counters, update_status_flags_000f41ac, and
 *   clear_flag_if_conditions_met. The specific roles of the globals and callees are
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_state_and_call_helpers(void)

{
  if ((DAT_0003c022 & 1) == 0) {
    DAT_0003c58b = DAT_0003c58b & 0xfe;
    DAT_0003c4d2 = DAT_0003c4d2 & 0x7f;
    DAT_0003c041 = 0;
  }
  compute_flagged_offset_values();
  DAT_0003c070 = DAT_0003c043;
  DAT_0003c071 = DAT_0003c044;
  DAT_0003c498 = 0;
  DAT_0003c499 = 0;
  clamp_two_byte_counters();
  update_status_flags_000f41ac();
  clear_flag_if_conditions_met();
  return;
}
