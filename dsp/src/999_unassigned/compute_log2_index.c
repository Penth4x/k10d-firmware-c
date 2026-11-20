/* @k10d compute_log2_index @ 0x000f7c4e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Computes a 23-bit index from the position of the most significant set bit of the input.
 * summary:
 *   The function normalizes the input by left-shifting it until it falls into the range
 *   [0x40000000, 0x80000000), tracking the number of shifts in a local variable. It then
 *   extracts bits 7 through 29 of the normalized value to form a 23-bit result. A
 *   conditional increment is applied based on bit 7 of the normalized value and the parity
 *   of the extracted index. The final result is the extracted index plus a multiple of
 *   0x800000 derived from the shift count. Returns 0 if the input is 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_log2_index(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0x9e;
  if (param_1 != 0) {
    if (param_1 < 0x10000) {
      param_1 = param_1 << 0x10;
      iVar2 = 0x8e;
    }
    if (param_1 < 0x1000000) {
      param_1 = param_1 << 8;
      iVar2 = iVar2 + -8;
    }
    if (param_1 < 0x10000000/*ROM*/) {
      param_1 = param_1 << 4;
      iVar2 = iVar2 + -4;
    }
    if (param_1 < 0x40000000) {
      param_1 = param_1 << 2;
      iVar2 = iVar2 + -2;
    }
    uVar1 = (param_1 & 0x3fffffff) >> 7;
    if ((param_1 << 2 & 0x100) != 0) {
      uVar1 = uVar1 + ((param_1 << 2 & 0xff) == 0 && (uVar1 & 1) != 0);
    }
    return uVar1 + (iVar2 + -1) * 0x800000;
  }
  return 0;
}
