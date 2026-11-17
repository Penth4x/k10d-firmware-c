/* @k10d clamp_and_store_counter @ 0x000c83dc
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Reads a value via clamp_value_to_range_000d9ac0, clamps it to [-3, 2], stores it in
 *   DAT_0003c44c, and clears DAT_0003c041 if non-zero.
 * summary:
 *   Calls clamp_value_to_range_000d9ac0 with param_1, 0xfffffffe, and 2 to obtain a value.
 *   Adds DAT_0003c44c to the result, then clamps the sum to the range [-3, 2] using sign-
 *   bit and magnitude checks. Stores the clamped result back into DAT_0003c44c as a char.
 *   If the stored value is non-zero, sets DAT_0003c041 to 0. The role of
 *   clamp_value_to_range_000d9ac0 and the two DAT globals is not determinable from the
 *   given information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clamp_and_store_counter(short param_1)

{
  int iVar1;
  
  iVar1 = clamp_value_to_range_000d9ac0((int)param_1,0xfffffffe,2);
  iVar1 = iVar1 + (uint)DAT_0003c44c;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  else if (2 < iVar1) {
    iVar1 = iVar1 + -3;
  }
  DAT_0003c44c = (char)iVar1;
  if ((char)iVar1 != '\0') {
    DAT_0003c041 = 0;
  }
  return;
}
