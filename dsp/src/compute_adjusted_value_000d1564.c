/* @k10d compute_adjusted_value_000d1564 @ 0x000d1564
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Calculates a clamped integer result by combining param_1 with several DAT globals and
 *   helper function outputs.
 * summary:
 *   The function performs a series of arithmetic operations using param_1 and multiple
 *   DAT_0003ceXX globals. It calls clamp_product_to_16bit_000ce692 and
 *   clamp_shifted_value_to_16_bits to derive intermediate values, then conditionally
 *   adjusts the result based on bit flags in DAT_0003ce02, DAT_0003ce05, and DAT_0003ce06.
 *   It also calls FUN_000d1c10 and FUN_000d1cb8 to add further offsets before clamping the
 *   final value to zero if it exceeds a threshold derived from DAT_0003ce12 and
 *   DAT_0003ce0e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint compute_adjusted_value_000d1564(uint param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint32_t uVar4;
  uint uVar5;
  uint uVar6;
  int iStack_1c;
  
  iVar2 = clamp_product_to_16bit_000ce692(_DAT_0003ce36,param_1);
  uVar3 = clamp_shifted_value_to_16_bits(iVar2);
  _DAT_0003ce3a = (short)uVar3;
  uVar3 = clamp_shifted_value_to_16_bits((uint)_DAT_0003cd52);
  uVar4 = clamp_product_to_16bit_000ce692(uVar3,uVar3);
  uVar3 = clamp_product_to_16bit_000ce692(uVar4,param_1);
  uVar1 = _DAT_0003ce32;
  if (((DAT_0003ce02 & 0x10) != 0) && ((uVar3 < _DAT_0003ce36 || ((DAT_0003c128 & 0x40) != 0)))) {
    uVar3 = 0;
  }
  iStack_1c = 0;
  uVar6 = (uint)_DAT_0003ce32;
  if ((DAT_0003ce06 & 0x20) != 0) {
    iStack_1c = FUN_000d1c10(param_1,0);
    iStack_1c = iStack_1c - (uint)_DAT_0003ce2c;
    if (((DAT_0003ce05 & 0x20) != 0) && ((DAT_0003ce05 & 4) == 0)) {
      uVar6 = (uint)(uVar1 >> 1);
    }
  }
  iVar2 = FUN_000d1cb8(param_1);
  uVar6 = uVar6 + iStack_1c + iVar2;
  uVar5 = clamp_product_to_16bit_000ce692(DAT_0003ce12,_DAT_0003ce0e);
  if ((int)uVar6 < 0) {
    uVar6 = uVar6 - uVar5;
  }
  else if (((uVar5 < uVar6) && ((DAT_0003ce02 & 0x20) == 0)) && ((DAT_0003ce05 & 4) == 0)) {
    if ((((DAT_0003ce06 & 0x20) != 0) && (uVar3 == 0)) &&
       ((uVar6 = uVar6 - uVar5, (DAT_0003ce05 & 0x20) != 0 &&
        ((uVar5 < uVar6 || (_DAT_0003ce36 < param_1)))))) {
      uVar6 = uVar6 - uVar5;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
