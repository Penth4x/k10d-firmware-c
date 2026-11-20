/* @k10d clamp_value_to_limit @ 0x000c5dba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns the minimum of param_2 and a computed limit, or param_1 if conditions are not
 *   met.
 * summary:
 *   The function checks if DAT_0003c444 equals 3 and if either bit 5 or bit 4 of
 *   DAT_0003c127 is set. If these conditions are met and param_2 is less than (DAT_0003c576
 *   + 8), it returns param_2; otherwise, it returns param_1. This acts as a conditional
 *   clamping or min-selection operation based on global state flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int clamp_value_to_limit(int param_1,int param_2)

{
  if ((DAT_0003c444 == '\x03') &&
     (((param_1 = DAT_0003c576 + 8, (DAT_0003c127 & 0x20) != 0 || ((DAT_0003c127 & 0x10) != 0)) &&
      (param_2 < param_1)))) {
    param_1 = param_2;
  }
  return param_1;
}
