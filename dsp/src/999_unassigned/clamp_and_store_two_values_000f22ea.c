/* @k10d clamp_and_store_two_values_000f22ea @ 0x000f22ea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Reads two 32-bit globals, clamps each to a signed 15-bit range, and stores them as
 *   16-bit values at offsets derived from param_1.
 * summary:
 *   The function extracts a value from _DAT_0003c830 and _DAT_0003c834 using a bit-shift
 *   and add sequence, then clamps the result to the range [-0x7fff, 0x7fff]. It writes the
 *   first clamped value to *(short *)(param_1 * 2 + 0x3d000) and the second to *(short
 *   *)(param_1 * 2 + 0x3d800). No callees are invoked, and the specific meaning of the
 *   globals or the destination memory region is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clamp_and_store_two_values_000f22ea(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(((uint)(_DAT_0003c830 >> 7) >> 0x18) + _DAT_0003c830) >> 8;
  if (0x7fff < iVar1) {
    iVar1 = 0x7fff;
  }
  if (iVar1 < -0x7fff) {
    iVar1 = -0x7fff;
  }
  *(short *)(param_1 * 2 + 0x3d000) = (short)iVar1;
  iVar1 = (int)(((uint)(_DAT_0003c834 >> 7) >> 0x18) + _DAT_0003c834) >> 8;
  if (0x7fff < iVar1) {
    iVar1 = 0x7fff;
  }
  if (iVar1 < -0x7fff) {
    iVar1 = -0x7fff;
  }
  *(short *)(param_1 * 2 + 0x3d800) = (short)iVar1;
  return;
}
