/* @k10d update_sign_and_zero_flags @ 0x000ddb58
 * name: model (proposed by the local model from the decompile, confidence 0.72)
 * purpose:
 *   Normalizes a signed value, clamps it to a limit, and sets sign/zero/overflow bits in
 *   global flag words.
 * summary:
 *   Takes param_1, computes its absolute value (two's complement negation if negative) and
 *   clamps it to _DAT_0003f37e. Derives a sign bit (local_5) based on param_1's sign and
 *   bit 7 of DAT_0003f363. Sets bit 1 of DAT_00000136 when the clamped value is zero, and
 *   stores the clamped value (or 0 if DAT_0003f36d bit 0 is set) into DAT_00000134. Finally
 *   updates bit 5 of DAT_00000008 with the sign bit. No callees; all effects are writes to
 *   four global flag/state words.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_sign_and_zero_flags(int param_1)

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
  if ((DAT_0003f363 & 0x80) == 0) {
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
    DAT_00000136 = DAT_00000136 | 2;
  }
  else {
    DAT_00000136 = DAT_00000136 & 0xfd;
  }
  if ((DAT_0003f36d & 1) != 0) {
    iVar1 = 0;
  }
  DAT_00000134 = (char)iVar1;
  DAT_00000008 = DAT_00000008 & 0xdf | (local_5 & 1) << 5;
  return;
}
