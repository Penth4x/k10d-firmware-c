/* @k10d clamp_and_store_offset @ 0x000d24e8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Clamps an input value against a stored limit and stores the result in a global byte.
 * summary:
 *   The function reads a limit from DAT_0003f478 and checks flags in DAT_0003ce01 and
 *   DAT_0003ce06. If enabled, it computes the difference between param_1 and DAT_0003cd5e,
 *   clamps it to the range [-limit, limit], and returns the clamped value. It then stores
 *   param_1 (truncated to a byte) into DAT_0003cd5e. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint clamp_and_store_offset(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_0003f478;
  if (((DAT_0003ce01 & 1) != 0) ||
     ((uVar1 = 0, (DAT_0003ce06 & 2) != 0 && ((DAT_0003ce06 & 0x20) == 0)))) {
    uVar1 = param_1 - DAT_0003cd5e;
    if ((int)uVar2 < param_1 - DAT_0003cd5e) {
      uVar1 = uVar2;
    }
    if ((int)uVar1 < (int)-uVar2) {
      uVar1 = -uVar2;
    }
  }
  DAT_0003cd5e = (char)param_1;
  return uVar1;
}
