/* @k10d compute_weighted_average_000d9810 @ 0x000d9810
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calculates the average of 16 selected 16-bit values based on a bitmask and a threshold
 *   comparison.
 * summary:
 *   The function initializes a 16-bit mask from a global constant and combines it with bits
 *   from param_3. It iterates through 16 16-bit values pointed to by param_2, summing those
 *   that are not 0xff and satisfy a threshold condition (<= or < param_1) controlled by
 *   param_4. If any values are selected, it calls divide_two_integers to compute the
 *   average (likely sum/count) and returns the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

short compute_weighted_average_000d9810(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  uintptr_t sp;
  uint8_t uStack_35;
  ushort local_34 [16];
  
  iVar4 = 0x20;
  do {
    iVar6 = iVar4 + -1;
    bVar1 = 0 < iVar4;
    *(uint8_t *)((int)local_34 + iVar4 + -1) = (&DAT_000fc0ab)[iVar4];
    iVar4 = iVar6;
  } while (bVar1 && iVar6 != 0);
  uVar3 = 0;
  do {
    local_34[uVar3] = (ushort)(param_3 >> (uVar3 & 0x1f)) & 1;
    uVar3 = (uint)(short)((short)uVar3 + 1);
  } while ((int)uVar3 < 0x10);
  sVar2 = 0;
  sVar5 = 0;
  if (param_4 == 0) {
    iVar4 = 0;
    do {
      iVar6 = iVar4 * 2;
      if (((local_34[iVar4] != 1) && (*(short *)(iVar6 + param_2) != 0xff)) &&
         (param_1 <= (int)(uint)*(ushort *)(iVar6 + param_2))) {
        sVar2 = sVar2 + *(short *)(iVar6 + param_2);
        sVar5 = sVar5 + 1;
      }
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < 0x10);
  }
  else {
    iVar4 = 0;
    do {
      iVar6 = iVar4 * 2;
      if (((local_34[iVar4] != 1) && (*(short *)(iVar6 + param_2) != 0xff)) &&
         ((int)(uint)*(ushort *)(iVar6 + param_2) < param_1)) {
        sVar2 = sVar2 + *(short *)(iVar6 + param_2);
        sVar5 = sVar5 + 1;
      }
      iVar4 = (int)(short)((short)iVar4 + 1);
    } while (iVar4 < 0x10);
  }
  if (sVar5 != 0) {
    sVar2 = divide_two_integers(sVar2,sVar5);
  }
  return sVar2;
}
