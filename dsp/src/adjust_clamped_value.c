/* @k10d adjust_clamped_value @ 0x000d229a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Adjusts a clamped 16-bit value by a delta and returns a shifted result.
 * summary:
 *   Reads a delta from compute_position_delta and adds or subtracts it from DAT_0003cd50
 *   based on flags in DAT_0003ce01/02. The accumulator is clamped between DAT_0003cd54 and
 *   0x7fff. If the delta is non-zero, it calls compute_scaled_bit_position with the new
 *   value. Returns a value derived from DAT_0003cc30 shifted by DAT_0003cd56, adjusted by
 *   the accumulator.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int adjust_clamped_value(uint32_t param_x0)

{
  int iVar1;
  int iVar2;
  
  iVar1 = compute_position_delta(__frv_reg_unset(4));
  if ((DAT_0003cb80 & 1) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)(uint)_DAT_0003cc30 >> (DAT_0003cd56 & 0x1f);
  }
  if ((((DAT_0003ce01 & 1) == 0) && ((DAT_0003ce02 & 4) != 0)) ||
     (((DAT_0003ce01 & 1) != 0 && ((DAT_0003ce02 & 0x10) != 0)))) {
    _DAT_0003cd50 = _DAT_0003cd50 + (short)iVar1;
    if (0x7fff < _DAT_0003cd50) {
      _DAT_0003cd50 = 0x7fff;
    }
    iVar2 = iVar2 + (uint)_DAT_0003cd50;
  }
  else {
    _DAT_0003cd50 = _DAT_0003cd50 - (short)iVar1;
    if ((short)_DAT_0003cd50 < (short)_DAT_0003cd54) {
      _DAT_0003cd50 = _DAT_0003cd54;
    }
    iVar2 = (uint)_DAT_0003cd50 - iVar2;
  }
  if (iVar1 != 0) {
    DAT_0003cd5c = compute_scaled_bit_position(_DAT_0003cd50);
  }
  return iVar2;
}
