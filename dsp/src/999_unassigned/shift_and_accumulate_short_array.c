/* @k10d shift_and_accumulate_short_array @ 0x000d2916
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Performs a left-shift and accumulation operation on an array of shorts, counting
 *   elements exceeding a threshold.
 * summary:
 *   The function processes an array of `param_1` shorts pointed to by `param_2`. It
 *   conditionally left-shifts the input data by 1 bit based on the low bit of DAT_0003cd2c,
 *   then accumulates adjacent pairs into the output buffer while counting how many values
 *   exceed the threshold in DAT_0003f252. Finally, it conditionally sets bit 7 of
 *   DAT_0003cb9b if the count meets a condition derived from DAT_0003cd47 and DAT_0003f19c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shift_and_accumulate_short_array(int param_1,ushort *param_2)

{
  bool bVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  uintptr_t sp;
  uint16_t uStack_1a;
  ushort local_18 [4];
  
  iVar7 = 8;
  do {
    iVar9 = iVar7 + -1;
    bVar1 = 0 < iVar7;
    *(uint8_t *)((int)&uStack_1a + iVar7 + 1) = (&DAT_000fb0b3)[iVar7];
    iVar7 = iVar9;
  } while (bVar1 && iVar9 != 0);
  if ((DAT_0003cd2c & 1) == 0) {
    iVar7 = 0;
    do {
      *(short *)(iVar7 + (int)param_2) = *(short *)(iVar7 + (int)(param_2 + -0x6f8)) << 1;
      iVar7 = iVar7 + 2;
      puVar4 = param_2;
      puVar6 = param_2 + -0x6f8;
      puVar8 = param_2 + param_1;
    } while (iVar7 < param_1 * 2);
  }
  else {
    puVar3 = param_2;
    iVar7 = 0;
    do {
      iVar9 = iVar7 + 1;
      puVar4 = puVar3 + 1;
      local_18[iVar7] = *puVar3;
      puVar3 = puVar4;
      puVar6 = param_2;
      iVar7 = iVar9;
      puVar8 = param_2;
    } while (iVar9 < param_1);
  }
  iVar9 = 0;
  iVar7 = (uint)DAT_0003cd47 + param_1 * -2;
  do {
    if (_DAT_0003f252 <= *puVar6) {
      iVar9 = iVar9 + 1;
    }
    *puVar8 = *puVar6 + puVar6[1];
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if ((DAT_0003cd2c & 1) == 0) {
    uVar2 = (uint)DAT_0003cd47;
    iVar7 = 0;
    do {
      *(short *)((int)param_2 + iVar7 + (uVar2 - param_1) * 2) =
           *(short *)(iVar7 + (int)puVar6) << 1;
      iVar7 = iVar7 + 2;
    } while (iVar7 < param_1 * 2);
  }
  else {
    iVar7 = (uint)DAT_0003cd47 + param_1 * -2;
    do {
      puVar6 = puVar6 + -1;
      puVar6[param_1] = *puVar6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = param_1 << 1;
    do {
      puVar4 = puVar4 + -1;
      iVar5 = iVar7 + -2;
      *puVar4 = *(short *)((int)&uStack_1a + iVar7) << 1;
      iVar7 = iVar5;
    } while (iVar5 != 0);
  }
  if (((int)((uint)DAT_0003cd47 + param_1 * -2 >> (DAT_0003f19c & 0x1f)) <= iVar9) &&
     ((DAT_0003cd2c & 4) == 0)) {
    DAT_0003cb9b = DAT_0003cb9b | 0x80;
  }
  return;
}
