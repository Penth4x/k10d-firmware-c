/* @k10d clamp_value_and_set_flags_000ddace @ 0x000ddace
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Clamps a signed input against a global limit and updates several global flag bytes.
 * summary:
 *   The function takes a signed integer, clamps its absolute value against DAT_0003f37e,
 *   and derives a sign bit from the input and DAT_0003f363. It sets or clears bit 1 of
 *   DAT_0000012e based on whether the clamped value is zero, stores a derived value in
 *   DAT_0000012c, and updates bit 4 of DAT_00000008 with the sign bit. No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clamp_value_and_set_flags_000ddace(int param_1)

{
  int iVar1;
  uint8_t local_5;
  
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = (int)(short)-(short)param_1;
  }
  if (_DAT_0003f37e < iVar1) {
    iVar1 = (int)_DAT_0003f37e;
  }
  if ((DAT_0003f363 & 0x40) == 0) {
    if (param_1 < 0) {
      local_5 = local_5 | 1;
    }
    else {
      local_5 = 0;
    }
  }
  else if (param_1 < 0) {
    local_5 = 0;
  }
  else {
    local_5 = local_5 | 1;
  }
  if (iVar1 == 0) {
    DAT_0000012e = DAT_0000012e | 2;
  }
  else {
    DAT_0000012e = DAT_0000012e & 0xfd;
  }
  if ((DAT_0003f36d & 1) != 0) {
    iVar1 = 0;
  }
  DAT_0000012c = (char)iVar1;
  DAT_00000008 = DAT_00000008 & 0xef | (local_5 & 1) << 4;
  return;
}
