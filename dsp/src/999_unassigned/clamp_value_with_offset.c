/* @k10d clamp_value_with_offset @ 0x000c660e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clamps an input value against a computed limit derived from global state and a lookup
 *   table.
 * summary:
 *   The function calculates a limit value (iVar1) based on the sign of DAT_0003c49a and a
 *   lookup table at 0x000fa098, adding or subtracting from DAT_0003c564. It then clamps
 *   param_1 to this limit if param_1 is smaller, setting bit 7 (0x80) of DAT_0003c4d7. It
 *   further clamps the result to a minimum of 0x1c (28), setting bit 6 (0x40) of
 *   DAT_0003c4d7 if the value was below this minimum. The final clamped value is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int clamp_value_with_offset(int param_1)

{
  int iVar1;
  
  if (DAT_0003c3ac == '\0') {
    iVar1 = DAT_0003c49a * 4 + (uint)DAT_0003c564;
  }
  else if (DAT_0003c49a < '\0') {
    iVar1 = (uint)DAT_0003c564 - (uint)(byte)(&DAT_000fa098)[-(int)DAT_0003c49a];
  }
  else {
    iVar1 = (uint)DAT_0003c564 + (uint)(byte)(&DAT_000fa098)[DAT_0003c49a];
  }
  if (param_1 <= iVar1) {
    DAT_0003c4d7 = DAT_0003c4d7 | 0x80;
    iVar1 = param_1;
  }
  if (iVar1 < 0x1d) {
    DAT_0003c4d7 = DAT_0003c4d7 | 0x40;
    iVar1 = 0x1c;
  }
  return iVar1;
}
