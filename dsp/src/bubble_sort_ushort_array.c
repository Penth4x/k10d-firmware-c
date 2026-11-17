/* @k10d bubble_sort_ushort_array @ 0x000d2db6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sorts an array of 16-bit unsigned integers in ascending order using bubble sort.
 * summary:
 *   The function iterates through the array pointed to by param_1, which has param_2
 *   elements. It performs a standard bubble sort, comparing adjacent 16-bit values and
 *   swapping them (as 32-bit words) if they are out of order. The loop structure and
 *   comparison logic (local_14[0] < *(ushort *)...) are characteristic of a bubble sort
 *   implementation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void bubble_sort_ushort_array(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uintptr_t sp;
  uint32_t uStack_18;
  ushort local_14 [4];
  
  if (1 < param_2) {
    iVar5 = 8;
    iVar2 = 0;
    do {
      iVar3 = 8;
      do {
        iVar6 = iVar3 + -4;
        bVar1 = 3 < iVar3;
        *(uint32_t *)((int)&uStack_18 + iVar3) = *(uint32_t *)(iVar6 + param_1 + iVar5);
        iVar3 = iVar6;
      } while (bVar1 && iVar6 != 0);
      iVar3 = iVar2;
      if ((-1 < iVar2) && (iVar6 = iVar2 * 8, local_14[0] < *(ushort *)(iVar6 + param_1))) {
        iVar4 = (iVar2 + 1) * 8;
        iVar8 = iVar2;
        do {
          iVar3 = 8;
          do {
            iVar7 = iVar3 + -4;
            bVar1 = 3 < iVar3;
            *(uint32_t *)(iVar7 + param_1 + iVar4) = *(uint32_t *)(iVar7 + param_1 + iVar6);
            iVar3 = iVar7;
          } while (bVar1 && iVar7 != 0);
          iVar3 = iVar8 + -1;
          iVar6 = iVar6 + -8;
          iVar4 = iVar4 + -8;
        } while ((0 < iVar8) && (iVar8 = iVar3, local_14[0] < *(ushort *)(iVar6 + param_1)));
      }
      iVar6 = 8;
      do {
        iVar8 = iVar6 + -4;
        bVar1 = 3 < iVar6;
        *(uint32_t *)(iVar8 + param_1 + (iVar3 + 1) * 8) =
             *(uint32_t *)((int)&uStack_18 + iVar6);
        iVar6 = iVar8;
      } while (bVar1 && iVar8 != 0);
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 8;
    } while (iVar2 < param_2 + -1);
  }
  return;
}
