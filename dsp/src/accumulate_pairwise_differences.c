/* @k10d accumulate_pairwise_differences @ 0x000d3964
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Computes the sum of absolute differences between consecutive 16-bit values in two
 *   arrays and stores the clamped results.
 * summary:
 *   The function iterates through two arrays of 16-bit integers, calculating the sum of
 *   absolute differences between adjacent elements for each. It uses a global flag
 *   (DAT_0003cbd4) and several other globals to determine the array bases, lengths, and
 *   offsets. The final sums are clamped to 0xffff and written to DAT_0003ccd0 and
 *   DAT_0003ccd2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void accumulate_pairwise_differences(int param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  
  uVar3 = 0;
  uVar2 = 0;
  if ((DAT_0003cbd4 & 2) == 0) {
    if (param_1 < 0) {
      iVar6 = 0;
      iVar4 = (DAT_0003cd47 - 1) + param_1;
    }
    else {
      iVar4 = DAT_0003cd47 - 1;
      iVar6 = param_1;
    }
    uVar9 = iVar6 + 4;
    uVar5 = iVar4 - 4;
    puVar8 = (ushort *)(_DAT_0003cc88 + uVar9 * 2 + param_1 * -2);
    puVar7 = (ushort *)(_DAT_0003cc8c + uVar9 * 2);
  }
  else {
    uVar9 = (uint)DAT_0003cc92;
    uVar5 = DAT_0003cc92 + 9;
    puVar8 = (ushort *)(_DAT_0003cc88 + (uint)DAT_0003cc92 * 2);
    puVar7 = (ushort *)(_DAT_0003cc8c + (uint)DAT_0003cc92 * 2 + param_1 * 2);
  }
  do {
    uVar1 = *puVar8;
    puVar8 = puVar8 + 1;
    iVar6 = (uint)uVar1 - (uint)*puVar8;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    uVar3 = uVar3 + iVar6;
    uVar1 = *puVar7;
    puVar7 = puVar7 + 1;
    iVar6 = (uint)uVar1 - (uint)*puVar7;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    uVar2 = uVar2 + iVar6;
    uVar9 = uVar9 + 1;
  } while (uVar9 != uVar5);
  if (0xffff < uVar3) {
    uVar3 = 0xffff;
  }
  if (0xffff < uVar2) {
    uVar2 = 0xffff;
  }
  _DAT_0003ccd0 = (short)uVar3;
  _DAT_0003ccd2 = (short)uVar2;
  return;
}
