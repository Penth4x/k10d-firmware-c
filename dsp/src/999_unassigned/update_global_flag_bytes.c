/* @k10d update_global_flag_bytes @ 0x000dda44
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Updates three global flag bytes based on the sign and clamped magnitude of the input
 *   parameter.
 * summary:
 *   The function takes an integer parameter, clamps its absolute value against a global
 *   limit (DAT_0003f37e), and uses the result to set or clear bit 1 of DAT_00000126. It
 *   computes a sign-related bit based on the parameter's sign and bit 5 of DAT_0003f363,
 *   storing it in bit 3 of DAT_00000008. It also stores a value in DAT_00000124 that is
 *   zeroed if bit 0 of DAT_0003f36d is set. No MMIO or complex logic is present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_global_flag_bytes(int param_1)

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
  if ((DAT_0003f363 & 0x20) == 0) {
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
    DAT_00000126 = DAT_00000126 | 2;
  }
  else {
    DAT_00000126 = DAT_00000126 & 0xfd;
  }
  if ((DAT_0003f36d & 1) != 0) {
    iVar1 = 0;
  }
  DAT_00000124 = (char)iVar1;
  DAT_00000008 = DAT_00000008 & 0xf7 | (local_5 & 1) << 3;
  return;
}
