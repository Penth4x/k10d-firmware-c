/* @k10d branch_on_two_flag_bits @ 0x000ebd3a
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Selects between two callees based on bit 2 of DAT_0003c4d6 and bit 6 of DAT_0003c022.
 * summary:
 *   Checks whether bit 2 of DAT_0003c4d6 is clear or bit 6 of DAT_0003c022 is clear; if
 *   either condition holds it calls poll_event_loop_until_exit, otherwise it calls
 *   poll_input_and_timeout_loop. No other side effects are visible in the pseudocode. The
 *   roles of the two callees and the two DAT globals are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void branch_on_two_flag_bits(void)

{
  if (((DAT_0003c4d6 & 4) == 0) || ((DAT_0003c022 & 0x40) == 0)) {
    poll_event_loop_until_exit();
  }
  else {
    poll_input_and_timeout_loop();
  }
  return;
}
