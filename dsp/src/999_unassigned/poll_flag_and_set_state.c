/* @k10d poll_flag_and_set_state @ 0x000e1cac
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Calls an initialization routine, then polls two global flags in a loop until a
 *   condition is met, returning a state value.
 * summary:
 *   The function first calls store_scaled_value_and_flag. It then enters a do-while loop
 *   that checks bit 7 of DAT_00000003 and bit 2 of DAT_00000057. If bit 7 of DAT_00000003
 *   is clear, it returns the current value of DAT_0003c122. Otherwise, it waits until bit 2
 *   of DAT_00000057 is set, then sets DAT_0003c122 to 5 and returns 5. The specific roles
 *   of the global variables are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t poll_flag_and_set_state(uint32_t param_x0)

{
  store_scaled_value_and_flag(__frv_reg_unset(4));
  do {
    if ((DAT_00000003 & 0x80) == 0) {
      return DAT_0003c122;
    }
  } while ((DAT_00000057 & 4) == 0);
  DAT_0003c122 = 5;
  return 5;
}
