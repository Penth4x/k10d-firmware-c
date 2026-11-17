/* @k10d sum_abs_short_differences @ 0x000d2534
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Computes the sum of absolute differences between consecutive 16-bit values in an array.
 * summary:
 *   Iterates over a count (from DAT_0003cd4d) of 16-bit elements in param_1, accumulating
 *   the absolute difference between each element and the next. The running sum is clamped
 *   to 0xffff before being returned. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint sum_abs_short_differences(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)DAT_0003cd4d;
  uVar3 = 0;
  do {
    iVar1 = (uint)*param_1 - (uint)param_1[1];
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    uVar3 = uVar3 + iVar1;
    uVar2 = uVar2 - 1;
    param_1 = param_1 + 1;
  } while (uVar2 != 0);
  if (0xffff < uVar3) {
    uVar3 = 0xffff;
  }
  return uVar3 & 0xffff;
}
