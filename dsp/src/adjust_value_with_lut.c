/* @k10d adjust_value_with_lut @ 0x000c8356
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Adjusts a value using a lookup table and stores the result in DAT_0003c488.
 * summary:
 *   The function takes an integer parameter and uses it as an index into one of three
 *   lookup tables (DAT_000fa1ec, DAT_000fa1f2, LAB_000fa1f8) based on the lower two bits of
 *   DAT_0003c488. It performs an addition or subtraction with the table value, applies
 *   clamping logic, and stores the final result back into DAT_0003c488. The sign of the
 *   input parameter determines whether the table value is added or subtracted.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_value_with_lut(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((DAT_0003f324 & 0x80) == 0) {
    uVar4 = 0x40;
  }
  else {
    uVar4 = 0x48;
  }
  uVar3 = (uint)DAT_0003c488;
  if (param_1 < 0) {
    param_1 = -param_1;
    if ((uVar3 & 3) == 3) {
      uVar2 = (uint)(byte)(&DAT_000fa1ec)[param_1];
    }
    else if ((DAT_0003c488 & 3) == 0) {
      uVar2 = (uint)(byte)(&DAT_000fa1f2)[param_1];
    }
    else {
      uVar2 = (uint)(byte)((byte *)LAB_000fa1f8)[param_1];
    }
    uVar2 = uVar3 - uVar2;
    if (uVar2 < 0x20) {
      uVar2 = 0x20;
    }
  }
  else {
    if ((uVar3 & 3) == 3) {
      uVar1 = (uint)(byte)((byte *)LAB_000fa1f8)[param_1];
    }
    else if ((DAT_0003c488 & 3) == 0) {
      uVar1 = (uint)(byte)(&DAT_000fa1f2)[param_1];
    }
    else {
      uVar1 = (uint)(byte)(&DAT_000fa1ec)[param_1];
    }
    uVar2 = uVar3 + uVar1;
    if (uVar4 < uVar3 + uVar1) {
      uVar2 = uVar4;
    }
  }
  DAT_0003c488 = (char)uVar2;
  return;
}
