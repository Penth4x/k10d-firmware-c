/* @k10d clamp_product_to_16bit_000ce692 @ 0x000ce692
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Multiplies two integers, right-shifts by 8, and clamps the result to 0xffff.
 * summary:
 *   Computes (param_1 * param_2) >> 8 and returns the value capped at 0xffff. No callees
 *   are invoked. The 8-bit right shift suggests a fixed-point scaling or normalization
 *   operation, but the specific domain is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint clamp_product_to_16bit_000ce692(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1 * param_2) >> 8;
  if (0xffff < uVar1) {
    uVar1 = 0xffff;
  }
  return uVar1;
}
