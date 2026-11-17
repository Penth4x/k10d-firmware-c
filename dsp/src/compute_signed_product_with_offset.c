/* @k10d compute_signed_product_with_offset @ 0x000d1e3a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calculates a signed 16-bit result by multiplying an absolute value with a coefficient
 *   and adjusting by a signed offset.
 * summary:
 *   The function takes the absolute value of a 16-bit input (_DAT_0003cbf0), multiplies it
 *   by a coefficient (_DAT_0003cd44) with 8-bit scaling, and stores the result in
 *   _DAT_0003cc66. It then computes a secondary adjustment value based on a signed offset
 *   derived from _DAT_0003c105/_DAT_0003c106 and _DAT_0003cd46, clamps it to 0xffff, and
 *   adds or subtracts it from the primary product based on sign bits to produce a final
 *   16-bit value in _DAT_0003cc30. No external functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_signed_product_with_offset(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  _DAT_0003cc26 = _DAT_0003cbf0;
  if ((short)_DAT_0003cbf0 < 0) {
    _DAT_0003cc26 = -_DAT_0003cbf0;
  }
  uVar3 = (uint)_DAT_0003cc26 * (uint)_DAT_0003cd44 >> 8;
  _DAT_0003cc66 = (short)((uint)_DAT_0003cc26 * (uint)_DAT_0003cd44 >> 8);
  _DAT_0003cc68 = 0;
  uVar1 = 0;
  if (((DAT_0003ce00 & 1) != 0) && (uVar1 = (uint)(DAT_0003c105 >> 5), (DAT_0003c106 & 0x80) != 0))
  {
    uVar1 = -uVar1;
  }
  DAT_0003cbd3 = DAT_0003cbd3 & 0x7f;
  iVar2 = DAT_0003cd46 + uVar1 + -7;
  if ((int)(DAT_0003cd46 + uVar1) < 7) {
    iVar2 = -iVar2;
    DAT_0003cbd3 = DAT_0003cbd3 | 0x80;
  }
  if (iVar2 != 0) {
    uVar1 = uVar3 * uVar3 * iVar2 >> 0xf;
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    _DAT_0003cc68 = (uint16_t)uVar1;
    if ((uint)(int)(short)_DAT_0003cbf0 >> 0x1f == (uint)(-1 < (char)DAT_0003cbd3)) {
      uVar3 = uVar3 - uVar1;
    }
    else {
      uVar3 = uVar3 + uVar1;
    }
  }
  _DAT_0003cc30 = (short)uVar3;
  return;
}
