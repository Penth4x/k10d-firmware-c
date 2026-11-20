/* @k10d scale_value_by_mode_factor @ 0x000d1730
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Scales an input value by a factor (1-4) determined by state flags and returns the
 *   result.
 * summary:
 *   The function calculates a scaling factor (iVar2) between 1 and 4 based on several
 *   DAT_0003ce0x flag bits and comparisons with DAT_0003cc30 and DAT_0003ce36. It then
 *   applies this factor to param_1 using a weighted average formula if param_1 is less than
 *   0x3fff. Finally, it may adjust the result upward if specific conditions involving
 *   param_2 and DAT_0003ce36 are met. The callees clamp_shifted_value_to_16_bits and
 *   clamp_product_to_16bit_000ce692 are used to compute an intermediate value (uVar4) that
 *   influences the factor selection.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint scale_value_by_mode_factor(uint param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint32_t uVar4;
  
  iVar2 = 1;
  uVar1 = (ushort)DAT_0003ce12;
  if (-1 < param_2) {
    uVar3 = clamp_shifted_value_to_16_bits((uint)_DAT_0003cd52);
    uVar4 = clamp_product_to_16bit_000ce692(uVar3, __frv_reg_unset(5));
    uVar3 = clamp_product_to_16bit_000ce692(uVar4,param_1);
    if (((DAT_0003ce02 & 0x10) != 0) && ((uVar3 < _DAT_0003ce36 || ((DAT_0003c128 & 0x40) != 0)))) {
      uVar3 = 0;
    }
    if ((param_2 == 0) ||
       ((int)((uint)DAT_0003ce05 << 0x1d ^ (uint)DAT_0003ce02 << 0x1b | (uint)DAT_0003ce05 << 0x1c)
        < 0)) {
      if (((DAT_0003ce02 & 0x80) == 0) && (_DAT_0003cc30 <= (ushort)(uVar1 * 2 + 0x33))) {
        if ((DAT_0003ce05 & 8) == 0) {
          if (uVar3 == 0) {
            iVar2 = 2;
          }
          else {
            iVar2 = 3;
          }
        }
        else if (((param_2 == 0) || ((DAT_0003ce02 & 0x10) == 0)) ||
                (((DAT_0003ce05 & 4) == 0 && (DAT_0003ce12 < _DAT_0003cc30)))) {
          if (uVar3 == 0) {
            iVar2 = 1;
          }
          else {
            iVar2 = 2;
          }
        }
        else {
          iVar2 = 1;
        }
      }
      else {
        iVar2 = 4;
      }
    }
    else {
      iVar2 = 1;
    }
  }
  if (param_1 < 0x3fff) {
    param_1 = param_1 * iVar2 + (4 - iVar2) * (uint)_DAT_0003ce30 >> 2;
  }
  if (((0 < param_2) && ((DAT_0003ce02 & 0x10) != 0)) &&
     ((param_1 >> 1) + param_1 < (uint)_DAT_0003ce36)) {
    param_1 = param_1 + _DAT_0003ce36 >> 1;
  }
  return param_1;
}
