/* @k10d clamp_and_scale_value_000d21a6 @ 0x000d21a6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clamps an input to a 0-63 range, applies a lookup-table-based scaling, and returns a
 *   result capped at 0x7fff.
 * summary:
 *   The function takes param_1, adds 0x10, and clamps the result between 0 and 0x40 (64).
 *   It uses this clamped value to index into a lookup table at DAT_000fb09c and performs a
 *   shift operation. The result is combined with a global value at _DAT_0003cd5a, clamped
 *   to be at least that global value, and then passed to unsigned_divide along with a
 *   shifted version of the global value. The final result is clamped to a maximum of
 *   0x7fff. The function also sets DAT_0003cd56 to 0 or 4 based on whether _DAT_0003cd5a is
 *   less than 0x80.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint clamp_and_scale_value_000d21a6(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 0x10;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  if (0x3e < (int)uVar1) {
    uVar1 = 0x40;
  }
  uVar1 = ((&DAT_000fb09c)[uVar1 >> 1 & 3] << ((byte)(uVar1 >> 3) & 0xf)) + (uint)_DAT_0003cd5a * -2
  ;
  if ((int)uVar1 < (int)(uint)_DAT_0003cd5a) {
    uVar1 = (uint)_DAT_0003cd5a;
  }
  if (_DAT_0003cd5a < 0x80) {
    DAT_0003cd56 = '\0';
  }
  else {
    DAT_0003cd56 = '\x04';
  }
  uVar1 = unsigned_divide((uint)_DAT_0003cd5a * (uint)_DAT_0003cd5a << (8U - DAT_0003cd56 & 0xf),uVar1)
  ;
  if (0x7fff < uVar1) {
    uVar1 = 0x7fff;
  }
  return uVar1;
}
