/* @k10d count_leading_zeros @ 0x000f793c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns the number of leading zero bits in a 32-bit unsigned integer.
 * summary:
 *   The function computes the index of the most significant set bit in param_1 and returns
 *   31 minus that index, which is the count of leading zeros. It handles the zero input
 *   case by returning 0 and uses bit manipulation to determine the magnitude of the input.
 *   No callees are invoked, and the result is returned in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int count_leading_zeros(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = ((param_1 & 0x7fffffff) >> 0x17) - 0x7f;
  if (iVar1 < 0) {
    return 0;
  }
  uVar2 = 0x1f - iVar1;
  if ((int)uVar2 < 0) {
    if (-1 < (int)param_1) {
      return 0x7fffffff;
    }
    return -0x80000000/*SDRAM*/;
  }
  return ((param_1 << 8 | 0x80000000/*SDRAM*/) >> (uVar2 & 0x1f) ^ (int)param_1 >> 0x1f) -
         ((int)param_1 >> 0x1f);
}
