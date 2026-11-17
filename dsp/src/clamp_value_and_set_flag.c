/* @k10d clamp_value_and_set_flag @ 0x000f497c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Clamps an input value against a stored limit and conditionally sets bit 4 of a status
 *   word.
 * summary:
 *   The function compares param_1 against the maximum of two byte globals (DAT_0003c575,
 *   DAT_0003c576). If param_1 is less than or equal to that limit, it checks a combination
 *   of flags in DAT_0003c118, DAT_0003c565, and DAT_0003c582; if the condition is met, it
 *   sets bit 4 (0x10) in DAT_0003c4d4. It then returns the minimum of param_1 and
 *   DAT_0003c575. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint clamp_value_and_set_flag(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_0003c575;
  if (DAT_0003c575 < DAT_0003c576) {
    bVar1 = DAT_0003c576;
  }
  if ((int)param_1 <= (int)(uint)bVar1) {
    if (((((DAT_0003c118 & 0x20) == 0x20) && (DAT_0003c565 < 0x75)) || ((DAT_0003c582 & 1) != 0)) ||
       ((DAT_0003c582 & 2) != 0)) {
      DAT_0003c4d4 = DAT_0003c4d4 | 0x10;
    }
    param_1 = (uint)DAT_0003c575;
  }
  return param_1;
}
