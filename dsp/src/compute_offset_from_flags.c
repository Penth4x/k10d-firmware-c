/* @k10d compute_offset_from_flags @ 0x000d1d60
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Calculates a value by adding 0x100 to a flag-dependent offset and optionally clamping
 *   it against a callee result.
 * summary:
 *   The function reads DAT_0003ce02 and DAT_0003f4ae to determine a base offset. If bit 4
 *   of DAT_0003ce02 is clear, it uses the upper nibble of DAT_0003f4ae as a negative
 *   offset; otherwise, it uses the lower nibble multiplied by 8. It adds 0x100 to this
 *   value. If bit 7 of DAT_0003ce02 is set, it calls clamp_shifted_value_to_16_bits and
 *   clamp_product_to_16bit_000ce692 to get a comparison value, then clamps the result based
 *   on bits 4 and 5 of DAT_0003ce02. The final value is returned in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint compute_offset_from_flags(void)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  
  if ((DAT_0003ce02 & 0x10) == 0) {
    iVar3 = -((DAT_0003f4ae & 0xf0) >> 1);
  }
  else {
    iVar3 = (DAT_0003f4ae & 0xf) * 8;
  }
  uVar4 = iVar3 + 0x100;
  if ((DAT_0003ce02 & 0x80) != 0) {
    uVar1 = clamp_shifted_value_to_16_bits((uint)_DAT_0003ce3a);
    uVar2 = clamp_product_to_16bit_000ce692(uVar1, __frv_reg_unset(5));
    uVar1 = clamp_product_to_16bit_000ce692(uVar2,uVar4);
    if ((((DAT_0003ce02 & 0x10) != 0) && (uVar4 < uVar1)) ||
       (((DAT_0003ce02 & 0x20) != 0 && (uVar1 < uVar4)))) {
      uVar4 = uVar1;
    }
  }
  return uVar4;
}
