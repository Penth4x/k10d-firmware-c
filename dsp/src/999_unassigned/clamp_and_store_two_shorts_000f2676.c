/* @k10d clamp_and_store_two_shorts_000f2676 @ 0x000f2676
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Clamps two 16-bit values to [-32767, 32767] and stores them at offsets 0x3d000 and
 *   0x3d800 relative to param_1*2.
 * summary:
 *   Reads globals _DAT_0003c820 and _DAT_0003c824, clamps each to the signed 16-bit range,
 *   and writes the results as shorts to memory locations param_1*2+0x3d000 and
 *   param_1*2+0x3d800. No callees are invoked. The target memory region is not identified
 *   in the brief, so the semantic role of the stored values is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clamp_and_store_two_shorts_000f2676(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0003c820;
  if (0x7fff < _DAT_0003c820) {
    iVar1 = 0x7fff;
  }
  if (iVar1 < -0x7fff) {
    iVar1 = -0x7fff;
  }
  *(short *)(param_1 * 2 + 0x3d000) = (short)iVar1;
  iVar1 = _DAT_0003c824;
  if (0x7fff < _DAT_0003c824) {
    iVar1 = 0x7fff;
  }
  if (iVar1 < -0x7fff) {
    iVar1 = -0x7fff;
  }
  *(short *)(param_1 * 2 + 0x3d800) = (short)iVar1;
  return;
}
