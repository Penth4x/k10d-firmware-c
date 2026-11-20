/* @k10d sum_absolute_diffs_of_two_arrays @ 0x000d3720
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Computes the sum of absolute differences between two 16-bit arrays, clamped to 0xffff.
 * summary:
 *   The function iterates over a range of 16-bit values from two base pointers
 *   (_DAT_0003cc88 and _DAT_0003cc8c), accumulating the absolute difference of each pair.
 *   The iteration count and pointer offsets are determined by param_1 and global state
 *   flags (DAT_0003cbd4, DAT_0003cd47, DAT_0003cc92). The final sum is clamped to a maximum
 *   of 0xffff and returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sum_absolute_diffs_of_two_arrays(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  uVar1 = 0;
  if ((DAT_0003cbd4 & 2) == 0) {
    if (param_1 < 0) {
      iVar3 = 0;
      uVar2 = (uint)DAT_0003cd47 + param_1;
    }
    else {
      uVar2 = (uint)DAT_0003cd47;
      iVar3 = param_1;
    }
    uVar4 = iVar3 + 4;
    uVar2 = uVar2 - 4;
    puVar5 = (ushort *)(_DAT_0003cc8c + uVar4 * 2);
    puVar6 = (ushort *)(_DAT_0003cc88 + uVar4 * 2 + param_1 * -2);
  }
  else {
    uVar4 = (uint)DAT_0003cc92;
    uVar2 = DAT_0003cc92 + 10;
    puVar6 = (ushort *)(_DAT_0003cc88 + (uint)DAT_0003cc92 * 2);
    puVar5 = (ushort *)(_DAT_0003cc8c + (uint)DAT_0003cc92 * 2 + param_1 * 2);
  }
  do {
    iVar3 = (uint)*puVar6 - (uint)*puVar5;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    uVar1 = uVar1 + iVar3;
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar4 != uVar2);
  if (0xffff < uVar1) {
    uVar1 = 0xffff;
  }
  return uVar1 & 0xffff;
}
