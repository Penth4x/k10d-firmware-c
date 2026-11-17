/* @k10d shift_and_store_value @ 0x000d1f1e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Reads a byte, shifts a result from clamp_and_scale_value_000d21a6 by its low nibble,
 *   stores it, and calls clamp_product_to_16bit_000d1ef8.
 * summary:
 *   The function reads DAT_0003cd56. It calls clamp_and_scale_value_000d21a6 with 0xa or
 *   0xc depending on whether DAT_0003cd56 is zero. The result is left-shifted by the low 4
 *   bits of DAT_0003cd56 and stored in _DAT_0003cc30. It then copies _DAT_0003c134 to
 *   _DAT_0003ce0e and calls clamp_product_to_16bit_000d1ef8. The original value of
 *   DAT_0003cd56 is restored before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shift_and_store_value(void)

{
  byte bVar1;
  uint32_t uVar2;
  
  bVar1 = DAT_0003cd56;
  if (DAT_0003cd56 == 0) {
    uVar2 = 10;
  }
  else {
    uVar2 = 0xc;
  }
  _DAT_0003cc30 = clamp_and_scale_value_000d21a6(uVar2);
  _DAT_0003cc30 = _DAT_0003cc30 << (DAT_0003cd56 & 0xf);
  _DAT_0003ce0e = _DAT_0003c134;
  clamp_product_to_16bit_000d1ef8();
  DAT_0003cd56 = bVar1;
  return;
}
