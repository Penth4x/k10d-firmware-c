/* @k10d compute_max_pair_diff @ 0x000d260e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Iterates a ushort array to find the maximum absolute difference between adjacent
 *   elements and stores the result.
 * summary:
 *   The function reads a count from DAT_0003cd47 and iterates through a ushort array
 *   starting at _DAT_0003cc88 + 0xc. It calculates the absolute difference between each
 *   element and the element four bytes ahead (puVar4[4]), tracking the maximum value found.
 *   It stores the maximum difference in _DAT_0003ccd8 and the index of the maximum in
 *   DAT_0003ccd6. It also sets or clears bit 2 of DAT_0003cb80 based on whether the maximum
 *   exceeds a threshold in DAT_0003f405.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_max_pair_diff(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = 0;
  if ((DAT_0003cb9b & 0x1f) == 0x15) {
    uVar2 = -(uint)DAT_0003f473;
  }
  else if ((DAT_0003cb9b & 0x1f) == 0x1a) {
    uVar2 = (uint)DAT_0003f473;
  }
  else {
    uVar2 = 0;
  }
  puVar4 = (ushort *)(_DAT_0003cc88 + 0xc);
  iVar7 = 0;
  iVar6 = DAT_0003cd47 - 0x10;
  iVar5 = (int)puVar4 - _DAT_0003cc88;
  do {
    uVar3 = (uint)*puVar4 - (uint)puVar4[4];
    if ((int)uVar3 < 0) {
      uVar3 = -uVar3;
    }
    if ((int)(uVar1 + uVar2) < (int)uVar3) {
      iVar7 = iVar5 / 2;
      uVar1 = uVar3;
    }
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (DAT_0003f405 < uVar1) {
    DAT_0003cb80 = DAT_0003cb80 | 4;
  }
  else {
    DAT_0003cb80 = DAT_0003cb80 & 0xfb;
  }
  DAT_0003ccd6 = (char)iVar7;
  _DAT_0003ccd8 = (short)uVar1;
  return;
}
