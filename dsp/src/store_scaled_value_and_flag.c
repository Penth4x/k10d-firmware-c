/* @k10d store_scaled_value_and_flag @ 0x000d582a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Scales the input by a factor depending on a mode bit, stores the result minus one, and
 *   sets a fixed constant.
 * summary:
 *   Checks bits 0-1 of DAT_00000484. If the value is 2, multiplies param_1 by -12;
 *   otherwise multiplies by 0x7d (125). Stores the result minus 1 into DAT_00000050 and
 *   sets DAT_00000056 to 0x13. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_scaled_value_and_flag(char param_1)

{
  if ((DAT_00000484 & 3) == 2) {
    param_1 = param_1 * -0xc;
  }
  else {
    param_1 = param_1 * '}';
  }
  DAT_00000050 = param_1 + -1;
  DAT_00000056 = 0x13;
  return;
}
