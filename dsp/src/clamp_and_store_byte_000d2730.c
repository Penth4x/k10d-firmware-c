/* @k10d clamp_and_store_byte_000d2730 @ 0x000d2730
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clamps a value between 10 and DAT_0003cd47-0x10, subtracts 2, and stores the result in
 *   DAT_0003cc92.
 * summary:
 *   Reads DAT_0003ccd6 and clamps it to the range [10, DAT_0003cd47 - 0x10]. The clamped
 *   value is decremented by 2 and stored as a signed char in DAT_0003cc92. No callees are
 *   invoked; the function only performs arithmetic and a single global write.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clamp_and_store_byte_000d2730(void)

{
  uint uVar1;
  
  uVar1 = 10;
  if ((10 < DAT_0003ccd6) && (uVar1 = DAT_0003cd47 - 0x10, DAT_0003ccd6 < uVar1)) {
    uVar1 = (uint)DAT_0003ccd6;
  }
  DAT_0003cc92 = (char)uVar1 + -2;
  return;
}
