/* @k10d log2_of_power_of_two @ 0x10537996
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Returns the index of the lowest set bit in param_1, or 0xffffffff if param_1 is zero.
 * summary:
 *   Iterates through bits 0-31 of param_1, checking if the value equals a single-bit mask
 *   (1 << i). Returns the index i if a match is found, indicating param_1 is a power of
 *   two. Returns 0xffffffff if no single bit is set (i.e., param_1 is 0 or has multiple
 *   bits set). No side effects or external calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint log2_of_power_of_two(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  while( true ) {
    uVar2 = 1 << ((byte)uVar1 & 0xf);
    if (param_1 < uVar2) {
      return 0xffffffff;
    }
    if (param_1 == uVar2) break;
    uVar1 = uVar1 + 1;
    if (0x1f < uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}
