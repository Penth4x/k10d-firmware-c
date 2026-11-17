/* @k10d rotate_and_average_three_values @ 0x000d425e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Rotates three 16-bit values stored in consecutive globals and stores their average in a
 *   fourth global.
 * summary:
 *   If the first of three globals (_DAT_0003cee8) is zero, all three are initialized from
 *   _DAT_0003c07c. The function then shifts the three values down by one position
 *   (cee8<-c07c, ceea<-cee8, ceec<-ceea, ceee<-old ceec) and computes the arithmetic mean
 *   of the three original values, storing the result in _DAT_0003cef0. No callees are
 *   invoked; the operation is purely on these adjacent 16-bit data words.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rotate_and_average_three_values(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  if (_DAT_0003cee8 == 0) {
    _DAT_0003cee8 = _DAT_0003c07c;
    _DAT_0003ceea = _DAT_0003c07c;
    _DAT_0003ceec = _DAT_0003c07c;
  }
  uVar3 = _DAT_0003ceec;
  uVar2 = _DAT_0003ceea;
  uVar1 = _DAT_0003cee8;
  _DAT_0003ceee = _DAT_0003ceec;
  _DAT_0003ceec = _DAT_0003ceea;
  _DAT_0003ceea = _DAT_0003cee8;
  _DAT_0003cee8 = _DAT_0003c07c;
  _DAT_0003cef0 = (short)((uint)_DAT_0003c07c + (uint)uVar1 + (uint)uVar2 + (uint)uVar3 >> 2);
  return;
}
