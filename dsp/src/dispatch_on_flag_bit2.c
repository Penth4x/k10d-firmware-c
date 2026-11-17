/* @k10d dispatch_on_flag_bit2 @ 0x000e3a98
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Branches to one of two callees based on bit 2 of DAT_0003c021.
 * summary:
 *   Checks bit 2 (value 4) of the global byte DAT_0003c021. If clear, calls
 *   manage_flag_8_state; otherwise calls toggle_state_bit_and_call_handler. No other side
 *   effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_flag_bit2(void)

{
  if ((DAT_0003c021 & 4) == 0) {
    manage_flag_8_state();
  }
  else {
    toggle_state_bit_and_call_handler();
  }
  return;
}
