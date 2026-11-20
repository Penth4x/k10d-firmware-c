/* @k10d set_two_byte_nibble_fields @ 0x000e2d28
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Writes a 4-bit value derived from param_1 into one of two byte pairs and clears the
 *   high byte.
 * summary:
 *   If param_1 is less than 4, it stores (param_1 & 3) << 4 into DAT_00000078 and zeros
 *   DAT_00000079. Otherwise it stores (param_1 - 4 & 3) << 4 into DAT_00000084 and zeros
 *   DAT_00000085. It then calls sum_eight_values_shift_right. The role of the DAT globals
 *   and the callee is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_byte_nibble_fields(uint param_1)

{
  if ((int)param_1 < 4) {
    DAT_00000079 = 0;
    DAT_00000078 = (uint8_t)((param_1 & 3) << 4);
  }
  else {
    DAT_00000085 = 0;
    DAT_00000084 = (uint8_t)((param_1 - 4 & 3) << 4);
  }
  sum_eight_values_shift_right(__frv_reg_unset(4));
  return;
}
