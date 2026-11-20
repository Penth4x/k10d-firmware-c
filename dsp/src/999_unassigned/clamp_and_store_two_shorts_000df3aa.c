/* @k10d clamp_and_store_two_shorts_000df3aa @ 0x000df3aa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Reads two 32-bit globals, clamps derived values to a signed 15-bit range, and stores
 *   them as shorts at offsets 0x3d000 and 0x3d800 scaled by param_1.
 * summary:
 *   The function computes a value from _DAT_0003c830 by combining a right-shifted high byte
 *   with the full word, then right-shifts by 8 and clamps to [-0x7fff, 0x7fff]. It stores
 *   the result as a short at param_1*2 + 0x3d000. It repeats the same process for
 *   _DAT_0003c834, storing at param_1*2 + 0x3d800. No callees are invoked; the function
 *   only performs arithmetic and two memory writes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clamp_and_store_two_shorts_000df3aa(int param_1)

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
