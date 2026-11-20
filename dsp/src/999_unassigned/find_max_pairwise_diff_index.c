/* @k10d find_max_pairwise_diff_index @ 0x000d26ac
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Scans a fixed 11-entry array of 16-bit values to find the index with the largest
 *   absolute difference from the element four positions ahead.
 * summary:
 *   Iterates over 11 consecutive ushort elements starting at a computed offset within the
 *   DAT_0003cc88 buffer. For each element, it computes the absolute difference between the
 *   current value and the value four slots later, tracking the maximum difference and its
 *   index. Stores the winning index (as a char) into DAT_0003ccd7 and the maximum
 *   difference (as a short) into _DAT_0003ccda. The starting offset is derived from
 *   DAT_0003cc92 and clamped to ensure the 4-slot lookahead stays within bounds defined by
 *   DAT_0003cd47.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void find_max_pairwise_diff_index(void)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  
  iVar2 = DAT_0003cc92 - 3;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  puVar3 = (ushort *)(_DAT_0003cc88 + iVar2 * 2);
  puVar5 = (ushort *)(_DAT_0003cc88 + 0xc);
  if ((puVar5 < puVar3) &&
     (puVar6 = (ushort *)(_DAT_0003cc88 + (uint)DAT_0003cd47 * 2 + -0x2a), puVar5 = puVar3,
     puVar6 <= puVar3)) {
    puVar5 = puVar6;
  }
  uVar1 = 0;
  iVar7 = 0xb;
  iVar2 = (int)puVar5 - _DAT_0003cc88;
  puVar3 = puVar5;
  do {
    uVar4 = (uint)*puVar3 - (uint)puVar3[4];
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
    }
    if (uVar1 < uVar4) {
      puVar5 = (ushort *)(iVar2 / 2);
      uVar1 = uVar4;
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + 2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  DAT_0003ccd7 = (char)puVar5;
  _DAT_0003ccda = (short)uVar1;
  return;
}
