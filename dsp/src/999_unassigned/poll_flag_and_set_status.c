/* @k10d poll_flag_and_set_status @ 0x000e1ce0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Calls an initialization routine, then polls two global flags in a loop until a
 *   condition is met, returning a status value.
 * summary:
 *   The function first calls store_scaled_value_and_flag. It then enters a do-while loop
 *   that checks bit 7 of DAT_00000003; if set, it returns the current value of
 *   DAT_0003c122. The loop continues until bit 2 of DAT_00000057 is set. Upon exiting the
 *   loop, it sets DAT_0003c122 to 6 and returns 6. The specific hardware or logical meaning
 *   of the flags and status value is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t poll_flag_and_set_status(uint32_t param_x0)

{
  store_scaled_value_and_flag(__frv_reg_unset(4));
  do {
    if ((DAT_00000003 & 0x80) != 0) {
      return DAT_0003c122;
    }
  } while ((DAT_00000057 & 4) == 0);
  DAT_0003c122 = 6;
  return 6;
}
