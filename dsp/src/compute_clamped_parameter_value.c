/* @k10d compute_clamped_parameter_value @ 0x000d2338
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Calculates a value based on status flags and stores it in DAT_0003cd60 and
 *   DAT_0003ce0e.
 * summary:
 *   The function retrieves a base value via adjust_clamped_value and adjusts DAT_0003cd50
 *   if the result is negative. It branches on status bits in DAT_0003f258, DAT_0003c101,
 *   DAT_0003c128, and DAT_0003c114. In one branch, it sets DAT_0003ce0e to the minimum of
 *   DAT_0003cd60 and DAT_0003c134. In the other, it computes a value using
 *   compute_scaled_bit_position, clamp_and_store_offset, and a lookup table, clamps it
 *   between 0x80 and 0x200, stores it in DAT_0003cd60, and sets DAT_0003ce0e via
 *   clamp_product_to_16bit_000ce692.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_clamped_parameter_value(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = adjust_clamped_value(_DAT_0003ce1c);
  if (iVar2 < 0) {
    _DAT_0003cd50 = _DAT_0003cd50 - (short)iVar2;
    iVar2 = 0;
    DAT_0003cd5c = compute_scaled_bit_position(_DAT_0003cd50);
  }
  _DAT_0003cd52 = (uint16_t)iVar2;
  if (((((DAT_0003f258 & 0x40) == 0) || ((DAT_0003c101 & 4) == 0)) || ((DAT_0003c128 & 0x40) != 0))
     || (((DAT_0003c114 & 4) == 0 && (DAT_0003c11f == 0)))) {
    if (_DAT_0003cd60 < _DAT_0003c134) {
      _DAT_0003ce0e = _DAT_0003cd60;
    }
    else {
      _DAT_0003ce0e = _DAT_0003c134;
    }
  }
  else {
    iVar3 = compute_scaled_bit_position(iVar2);
    iVar1 = (int)DAT_0003cd5c;
    iVar2 = clamp_and_store_offset(__frv_reg_unset(4));
    iVar2 = iVar2 + ((uint)(iVar1 + iVar3) >> 1);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if ((int)DAT_0003cd59 - (int)DAT_0003cd58 < iVar2) {
      iVar2 = (int)DAT_0003cd59 - (int)DAT_0003cd58;
    }
    iVar2 = ((DAT_0003c11f & 0x7f) >> 3) *
            (iVar2 + (uint)(byte)(&DAT_000fb304)[DAT_0003c11f & 7] * -4);
    if ((DAT_0003c11f & 0x80) != 0) {
      iVar2 = -iVar2;
    }
    uVar4 = iVar2 + 0x100;
    if (0x200 < uVar4) {
      uVar4 = 0x200;
    }
    if (uVar4 < 0x80) {
      uVar4 = 0x80;
    }
    _DAT_0003cd60 = (ushort)uVar4;
    _DAT_0003ce0e = clamp_product_to_16bit_000ce692(_DAT_0003c134, __frv_reg_unset(5));
  }
  return;
}
