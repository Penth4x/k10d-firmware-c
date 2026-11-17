/* @k10d reverse_ushort_array_in_place @ 0x000d2a30
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Reverses an array of 16-bit elements in memory using a block-copy algorithm.
 * summary:
 *   The function takes a pointer (param_2), a count (param_1), and a stride/offset
 *   (param_3) to reverse the order of param_1 ushort elements. It uses a loop to swap
 *   elements from the start and end of the array, processing 3 elements at a time for
 *   efficiency. The remaining logic involving DAT_0003f19a and bubble_sort_ushort_array
 *   appears to be unrelated or corrupted in the pseudocode, as the primary operation is
 *   clearly an in-place array reversal.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reverse_ushort_array_in_place(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uintptr_t sp;
  uint32_t uStack_58;
  ushort local_54 [2];
  int iStack_50;
  ushort local_4c;
  int iStack_48;
  ushort local_44;
  int iStack_40;
  ushort *puStack_3c;
  int iStack_38;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  ushort *puStack_28;
  ushort *puStack_24;
  
  puVar7 = (ushort *)(param_2 + param_1 * 2);
  puVar6 = (ushort *)(param_2 + (param_3 & 0xffff) * -2);
  puStack_24 = puVar6 + 3;
  iVar8 = 0x18;
  do {
    iVar10 = iVar8 + -4;
    bVar2 = 3 < iVar8;
    *(uint32_t *)((int)&uStack_58 + iVar8) = *(uint32_t *)(iVar8 + 0xfb0b8);
    iVar8 = iVar10;
  } while (bVar2 && iVar10 != 0);
  puStack_28 = local_54;
  iStack_30 = 0;
  iVar10 = 0;
  iVar8 = 1;
  uStack_34 = (uint)DAT_0003f19a;
  if (0 < param_1) {
    iVar4 = 0;
    iVar5 = param_1;
    if (5 < param_1) {
      do {
        iVar9 = param_2 + (param_3 & 0xffff) * -2;
        *(uint16_t *)(iVar4 + param_2) = *(uint16_t *)(iVar4 + iVar9);
        *(uint16_t *)(param_2 + iVar4 + 2) = *(uint16_t *)(iVar9 + iVar4 + 2);
        *(uint16_t *)(param_2 + iVar4 + 4) = *(uint16_t *)(iVar9 + iVar4 + 4);
        iVar4 = iVar4 + 6;
        iVar5 = iVar5 + -3;
      } while (2 < iVar5);
    }
    if (iVar5 != 0) {
      do {
        *(uint16_t *)(iVar4 + param_2) =
             *(uint16_t *)(iVar4 + param_2 + (param_3 & 0xffff) * -2);
        iVar4 = iVar4 + 2;
        iVar5 = iVar5 + -1;
      } while (0 < iVar5);
    }
  }
  local_54[0] = *puVar6;
  local_4c = puVar6[1];
  local_44 = puVar6[2];
  uVar1 = local_54[param_1 * 4];
  iVar5 = (uint)*puVar6 + (uint)puVar6[1] + (uint)puVar6[2] + (uint)uVar1 * -3;
  puStack_3c = local_54 + param_1 * 4;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  iStack_2c = 0;
  if (iVar5 < (int)uStack_34) {
    bubble_sort_ushort_array((int)local_54,3);
    *puVar7 = *puStack_3c;
    iStack_38 = 1;
    if ((DAT_0003f25a & 0x20) != 0) {
      iVar4 = 0;
      iVar5 = 0;
      do {
        if (*(int *)((int)&iStack_50 + iVar5) == 1) {
          local_54[iVar4 * 4] = *puStack_3c;
          break;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 8;
      } while (iVar5 < 0x18);
    }
  }
  else {
    *puVar7 = uVar1;
    iStack_38 = 0;
  }
  puVar7 = puVar7 + 1;
  iVar5 = 0;
  if (0 < (int)(DAT_0003cd47 - 3)) {
    do {
      iVar8 = iVar8 + 1;
      if (iVar8 == 3) {
        iVar8 = 0;
      }
      if (iStack_50 == iVar10) {
        iStack_2c = 0;
      }
      if (iStack_50 == iVar8) {
        iStack_30 = 0;
      }
      if (iStack_48 == iVar10) {
        iStack_2c = 1;
      }
      if (iStack_48 == iVar8) {
        iStack_30 = 1;
      }
      if (iStack_40 == iVar10) {
        iStack_2c = 2;
      }
      if (iStack_40 == iVar8) {
        iStack_30 = 2;
      }
      local_54[iStack_2c * 4] = *puStack_24;
      iVar4 = (uint)local_54[0] + (uint)local_4c + (uint)local_44 +
              (uint)local_54[iStack_30 * 4] * -3;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 < (int)uStack_34) {
        if (iStack_38 == 1) {
          recursive_sort_ushort_array((int)puStack_28,3,iStack_2c);
        }
        else if (iStack_38 == 0) {
          bubble_sort_ushort_array((int)puStack_28,3);
          iStack_38 = 1;
        }
        *puVar7 = local_54[param_1 * 4];
        if ((DAT_0003f25a & 0x20) != 0) {
          iVar9 = 0;
          iVar4 = 0;
          do {
            if (*(int *)((int)&iStack_50 + iVar4) == iVar8) {
              local_54[iVar9 * 4] = local_54[param_1 * 4];
              break;
            }
            iVar9 = iVar9 + 1;
            iVar4 = iVar4 + 8;
          } while (iVar4 < 0x18);
        }
      }
      else {
        *puVar7 = local_54[iStack_30 * 4];
        iStack_38 = 0;
      }
      puVar7 = puVar7 + 1;
      puStack_24 = puStack_24 + 1;
      iVar10 = iVar10 + 1;
      if (iVar10 == 3) {
        iVar10 = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(DAT_0003cd47 - 3));
  }
  if (0 < param_1) {
    iVar8 = 0;
    if (5 < param_1) {
      do {
        uVar3 = param_3 & 0xffff;
        *(uint16_t *)(iVar8 + (int)puVar7) = *(uint16_t *)((int)puVar7 + iVar8 + uVar3 * -2);
        *(uint16_t *)((int)puVar7 + iVar8 + 2) =
             *(uint16_t *)((int)puVar7 + iVar8 + uVar3 * -2 + 2);
        *(uint16_t *)((int)puVar7 + iVar8 + 4) =
             *(uint16_t *)((int)puVar7 + iVar8 + uVar3 * -2 + 4);
        iVar8 = iVar8 + 6;
        param_1 = param_1 + -3;
      } while (2 < param_1);
    }
    if (param_1 != 0) {
      do {
        *(uint16_t *)(iVar8 + (int)puVar7) =
             *(uint16_t *)((int)puVar7 + iVar8 + (param_3 & 0xffff) * -2);
        iVar8 = iVar8 + 2;
        param_1 = param_1 + -1;
      } while (0 < param_1);
    }
  }
  return;
}
