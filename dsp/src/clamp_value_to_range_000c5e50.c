/* @k10d clamp_value_to_range_000c5e50 @ 0x000c5e50
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clamps a value to a minimum of 0x1c and maximum of 0xa4, then ensures it is at least
 *   param_2.
 * summary:
 *   The function takes two integer parameters. It first clamps param_1 to the range [0x1c,
 *   0xa4]. It then compares the clamped value with param_2 and returns the larger of the
 *   two. This effectively returns max(clamp(param_1, 0x1c, 0xa4), param_2). No memory
 *   accesses or external calls are made.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int clamp_value_to_range_000c5e50(int param_1,int param_2)

{
  if (param_1 < 0) {
    param_1 = 0x1c;
  }
  if (0xa4 < param_1) {
    param_1 = 0xa4;
  }
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  return param_1;
}
