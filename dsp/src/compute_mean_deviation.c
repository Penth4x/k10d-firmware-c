/* @k10d compute_mean_deviation @ 0x000d27a0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Computes the mean absolute deviation of a series of values from their local midpoints.
 * summary:
 *   Iterates over a count (DAT_0003cd4d) of 3-element records in param_1. For each record,
 *   it calculates the absolute difference between the second element and the average of the
 *   first and third elements, accumulating the sum. The final sum is right-shifted by 1 and
 *   clamped to a maximum of 0xffff before being returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_mean_deviation(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)DAT_0003cd4d;
  uVar2 = 0;
  do {
    iVar1 = (uint)param_1[4] - ((uint)*param_1 + (uint)param_1[8]) / 2;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    uVar2 = uVar2 + iVar1;
    param_1 = param_1 + 1;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  uVar2 = uVar2 >> 1;
  if (0xffff < uVar2) {
    uVar2 = 0xffff;
  }
  return uVar2 & 0xffff;
}
