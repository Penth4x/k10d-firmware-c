/* @k10d compute_scaled_bit_position @ 0x000d2456
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Computes a clamped bit offset by scaling an input value and determining its most
 *   significant bit position.
 * summary:
 *   The function clamps the input parameter against a global value, then calls
 *   unsigned_divide with a scaled multiplier and the clamped value. It calculates the bit
 *   length of the result by finding the most significant set bit, adjusts this by a
 *   fractional component, and clamps the final value between two global bounds. The
 *   function returns the difference between an upper bound global and the computed clamped
 *   value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int compute_scaled_bit_position(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_1 - (uint)_DAT_0003cd54;
  if ((int)uVar2 < (int)(uint)_DAT_0003cd54) {
    uVar2 = (uint)_DAT_0003cd54;
  }
  iVar1 = unsigned_divide((uint)_DAT_0003cd5a * (uint)_DAT_0003cd5a << (8U - DAT_0003cd56 & 0xf),uVar2)
  ;
  iVar3 = -4;
  for (uVar2 = iVar1 + (uint)_DAT_0003cd5a * 2; 0x7f < uVar2; uVar2 = uVar2 >> 1) {
    iVar3 = iVar3 + 1;
  }
  iVar3 = iVar3 * 8 + (uVar2 >> 3 & 7);
  if (DAT_0003cd59 < iVar3) {
    iVar3 = (int)DAT_0003cd59;
  }
  if (iVar3 < DAT_0003cd58) {
    iVar3 = (int)DAT_0003cd58;
  }
  return DAT_0003cd59 - iVar3;
}
