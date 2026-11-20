/* @k10d compute_signed_offset_value_000c66f6 @ 0x000c66f6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Selects a signed 7-bit value from one of three globals based on mode flags, adds a base
 *   offset, and optionally passes the result through call_callee_with_fixed_args.
 * summary:
 *   The function reads DAT_0003c440 and DAT_0003c127 to choose between DAT_000f9de1,
 *   DAT_000f9de0, or DAT_000f9ddf, sign-extending the lower 7 bits using bit 7 (or bit 3
 *   for DAT_000f9de0). It adds either DAT_0003c576 or the constant 0x4c to this signed
 *   value. If param_1 is not 1, the sum is passed to call_callee_with_fixed_args;
 *   otherwise, the raw sum is returned. The role of the specific globals and the exact
 *   nature of the offset (e.g., exposure, position, or index) is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_signed_offset_value_000c66f6(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (DAT_0003c440 == '\x11') {
    uVar1 = DAT_000f9de1 & 0x7f;
    if ((DAT_000f9de1 & 0x80) != 0) {
      uVar1 = -uVar1;
    }
  }
  else if (((DAT_0003c127 & 8) == 0) && ((DAT_0003c127 & 1) == 0)) {
    if ((DAT_0003c127 & 4) == 0) {
      if ((DAT_0003c127 & 2) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = DAT_000f9de1 & 0x7f;
        if ((DAT_000f9de1 & 0x80) != 0) {
          uVar1 = -uVar1;
        }
      }
    }
    else {
      uVar1 = DAT_000f9de0 & 0x7f;
      if ((DAT_000f9de0 & 8) != 0) {
        uVar1 = -uVar1;
      }
    }
  }
  else {
    uVar1 = DAT_000f9ddf & 0x7f;
    if ((DAT_000f9ddf & 0x80) != 0) {
      uVar1 = -uVar1;
    }
  }
  uVar2 = (uint)DAT_0003c576;
  if (((DAT_0003c127 & 2) != 0) || (DAT_0003c440 == '\x11')) {
    uVar2 = 0x4c;
  }
  iVar3 = uVar2 + uVar1;
  if (param_1 != 1) {
    iVar3 = call_callee_with_fixed_args(iVar3);
  }
  return iVar3;
}
