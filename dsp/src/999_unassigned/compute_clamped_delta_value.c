/* @k10d compute_clamped_delta_value @ 0x000d1b26
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes a signed delta from two calls to unsigned_divide, applies conditional
 *   adjustments, and returns a clamped result.
 * summary:
 *   The function calls unsigned_divide twice to obtain a difference, then applies
 *   conditional logic based on flags in DAT_0003ce02 and DAT_0003ce05. It invokes
 *   clamp_product_to_16bit_000ce660, clamp_product_to_16bit_000ce692, and
 *   clamp_shifted_value_to_16_bits to process the value, applying sign inversions and
 *   offsets. The result is clamped to a minimum value derived from DAT_0003f4ad before
 *   being returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint compute_clamped_delta_value(uint param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint32_t uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar1 = unsigned_divide(0xffff,param_1);
  iVar2 = unsigned_divide(0xffff,_DAT_0003ce36);
  iVar1 = iVar1 - iVar2;
  if ((DAT_0003ce02 & 0x10) == 0) {
    if (((DAT_0003ce05 & 4) == 0) || (iVar1 < 1)) {
      iVar1 = -iVar1;
    }
    else {
      param_1 = (uint)_DAT_0003ce30;
    }
    if (((DAT_0003ce05 & 2) == 0) || ((DAT_0003ce05 & 4) != 0)) {
      iVar6 = (DAT_0003f4ab & 0xf0) << 1;
    }
  }
  else if ((DAT_0003ce05 & 4) == 0) {
    iVar6 = (DAT_0003f4ab & 0xf) << 5;
  }
  if (((DAT_0003ce05 & 2) != 0) && (iVar6 != 0)) {
    iVar6 = 0x80;
  }
  if (iVar1 < 0) {
    uVar3 = scale_value_by_mode_factor(param_1, __frv_reg_unset(5));
  }
  else {
    uVar4 = clamp_product_to_16bit_000ce660(iVar1,param_2);
    iVar1 = clamp_product_to_16bit_000ce692(uVar4,iVar6);
    if ((DAT_0003ce02 & 0x20) != 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 + 0x100 < 1) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = clamp_shifted_value_to_16_bits(param_1);
    }
  }
  uVar5 = (DAT_0003f4ad & 0xf) << 2;
  if (uVar3 < uVar5) {
    uVar3 = uVar5;
  }
  return uVar3;
}
