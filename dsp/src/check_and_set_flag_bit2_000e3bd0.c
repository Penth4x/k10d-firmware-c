/* @k10d check_and_set_flag_bit2_000e3bd0 @ 0x000e3bd0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets bit 2 of DAT_0003c021 if specific state flags are clear, then calls
 *   toggle_state_bit_and_call_handler.
 * summary:
 *   The function checks if DAT_0003c3a8 is zero and bit 0 of DAT_0003c396 is clear. If so,
 *   and if bit 0 of DAT_0003c008 is also clear, it sets bit 2 (value 4) of DAT_0003c021.
 *   Finally, it unconditionally calls toggle_state_bit_and_call_handler within the outer
 *   conditional block. The specific roles of the DAT globals are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_set_flag_bit2_000e3bd0(void)

{
  if ((DAT_0003c3a8 == '\0') && ((DAT_0003c396 & 1) == 0)) {
    if ((DAT_0003c008 & 1) == 0) {
      DAT_0003c021 = DAT_0003c021 | 4;
    }
    toggle_state_bit_and_call_handler();
  }
  return;
}
