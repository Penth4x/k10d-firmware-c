/* @k10d recursive_sort_ushort_array @ 0x000d2d38
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Recursively sorts an array of 16-bit integers using a divide-and-conquer comparison
 *   scheme.
 * summary:
 *   The function takes a base pointer (param_1), a count (param_2), and a pivot index
 *   (param_3). It compares 16-bit values at offsets relative to the pivot and recursively
 *   calls bubble_sort_ushort_array on sub-ranges, which is characteristic of a quicksort or
 *   similar sorting algorithm. The specific comparison logic (checking values before and
 *   after the pivot) suggests partitioning steps. No external hardware or specific
 *   subsystem is referenced, only memory operations and recursive calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void recursive_sort_ushort_array(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  if ((param_3 == 0) || (param_3 == 2)) {
    if (param_3 == 0) {
      bVar3 = true;
    }
    else if (param_3 == 2) {
      bVar2 = true;
    }
  }
  else {
    iVar5 = param_3 * 8;
    bVar2 = *(ushort *)(iVar5 + param_1) < *(ushort *)(param_1 + iVar5 + -8);
    uVar1 = *(ushort *)(param_1 + iVar5 + 8);
    bVar3 = uVar1 < *(ushort *)(iVar5 + param_1);
    if ((bVar2) && (uVar1 < *(ushort *)(iVar5 + param_1))) {
      bVar4 = true;
    }
  }
  if (!bVar4) {
    if (bVar2) {
      bubble_sort_ushort_array(param_1,param_3 + 1);
    }
    else if (bVar3) {
      bubble_sort_ushort_array(param_1 + param_3 * 8,param_2 - param_3);
    }
  }
  return;
}
