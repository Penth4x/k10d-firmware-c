/* @k10d count_leading_zeros @ 0x10544912
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Computes the number of leading zero bits in a 32-bit unsigned integer.
 * summary:
 *   The function implements a standard bit-manipulation algorithm to find the index of the
 *   most significant set bit. It first checks if the input is zero and returns 0, then uses
 *   a series of shifts and masks to narrow down the position of the highest set bit. The
 *   final return value is the count of leading zeros, which is a common utility in firmware
 *   for bitfield manipulation or protocol parsing.
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
