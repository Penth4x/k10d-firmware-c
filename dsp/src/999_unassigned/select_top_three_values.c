/* @k10d select_top_three_values @ 0x000d9696
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Filters and sorts an array of 16 unsigned short values, returning the sum of the top
 *   three.
 * summary:
 *   The function initializes two local arrays from static data, then processes 16 values
 *   from param_2. It zeroes out values that are 0xff, set in the param_3 bitmask, or exceed
 *   param_1 - 0x38. If fewer than 13 values are zeroed, it extracts the three largest
 *   remaining values and passes their sum to divide_two_integers. If 13 or more values are
 *   zeroed, it returns 0xff.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t select_top_three_values(int param_1,int param_2,int param_3)

{
  bool bVar1;
  uint16_t uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  uintptr_t sp;
  uint8_t uStack_4d;
  ushort local_4c [15];
  uint8_t uStack_2d;
  ushort local_2c [14];
  
  iVar3 = 0x20;
  do {
    iVar7 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    *(uint8_t *)((int)local_4c + iVar3 + -1) = (&DAT_000fc06f)[iVar3];
    iVar3 = iVar7;
  } while (bVar1 && iVar7 != 0);
  iVar3 = 0x1c;
  do {
    iVar7 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    *(uint8_t *)((int)local_2c + iVar3 + -1) = (&DAT_000fc08f)[iVar3];
    iVar3 = iVar7;
  } while (bVar1 && iVar7 != 0);
  sVar6 = 0;
  iVar3 = 0;
  do {
    if (*(short *)(iVar3 * 2 + param_2) == 0xff) {
      local_4c[iVar3] = 0;
      sVar6 = sVar6 + 1;
    }
    else {
      local_4c[iVar3] = *(ushort *)(iVar3 * 2 + param_2);
    }
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 0x10);
  uVar4 = 0;
  do {
    if ((param_3 >> (uVar4 & 0x1f) & 1U) == 1) {
      local_4c[uVar4] = 0;
      sVar6 = sVar6 + 1;
    }
    uVar4 = (uint)(short)((short)uVar4 + 1);
  } while ((int)uVar4 < 0x10);
  iVar3 = 0;
  do {
    if ((local_4c[iVar3] != 0) && ((uint)local_4c[iVar3] < param_1 - 0x38U)) {
      local_4c[iVar3] = 0;
      sVar6 = sVar6 + 1;
    }
    iVar3 = (int)(short)((short)iVar3 + 1);
  } while (iVar3 < 0x10);
  if (sVar6 < 0xd) {
    iVar3 = 0;
    do {
      local_2c[iVar3] = local_4c[0];
      iVar7 = 0;
      iVar5 = 1;
      do {
        if (local_2c[iVar3] < local_4c[iVar5]) {
          local_2c[iVar3] = local_4c[iVar5];
          iVar7 = iVar5;
        }
        iVar5 = (int)(short)((short)iVar5 + 1);
      } while (iVar5 < 0x10);
      local_4c[iVar7] = 0;
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 0xe);
    uVar4 = 0;
    iVar3 = 0;
    do {
      uVar4 = uVar4 + (param_1 - (uint)local_2c[iVar3 + 1] & 0xffff) & 0xffff;
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 3);
    uVar2 = divide_two_integers(uVar4,3);
  }
  else {
    uVar2 = 0xff;
  }
  return uVar2;
}
