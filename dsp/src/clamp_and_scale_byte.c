/* @k10d clamp_and_scale_byte @ 0x000c28b4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clamps input to 0-255 and applies a piecewise linear scaling transformation.
 * summary:
 *   The function takes an unsigned integer, clamps negative values to 0 and values >= 0x3f9
 *   to 0xff. For values in [0x80, 0x3f9), it performs a right shift by 3, left shift by 1,
 *   and OR with 1, then masks to 8 bits. For values in [0, 0x80), it left shifts by 1 and
 *   masks to 8 bits. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint clamp_and_scale_byte(uint param_1)

{
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  else if ((int)param_1 < 0x3f9) {
    if (param_1 < 0x80) {
      param_1 = param_1 << 1;
    }
    else {
      param_1 = (param_1 >> 3) << 1 | 1;
    }
    param_1 = param_1 & 0xff;
  }
  else {
    param_1 = 0xff;
  }
  return param_1;
}
