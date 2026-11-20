/* @k10d clamp_and_sum_16_values @ 0x000c0b48
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Subtracts a constant from 16 input integers, finds the min and max of the results, and
 *   returns a value derived from their sum if negative.
 * summary:
 *   The function reads 16 32-bit integers from param_1, subtracts the global constant
 *   _DAT_0003c5a0 from each, and stores them in a local array. It then iterates through the
 *   array to find the minimum and maximum values. If the sum of the minimum and maximum is
 *   negative, it calls divide_two_integers with that sum and the constant 4; otherwise, it
 *   returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t clamp_and_sum_16_values(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  int local_4c [16];
  
  iVar4 = 4;
  iVar3 = 0;
  do {
    *(uint *)((int)local_4c + iVar3) = *(int *)(iVar3 + param_1) - (uint)_DAT_0003c5a0;
    *(uint *)((int)local_4c + iVar3 + 4) = *(int *)(param_1 + iVar3 + 4) - (uint)_DAT_0003c5a0;
    *(uint *)((int)local_4c + iVar3 + 8) = *(int *)(param_1 + iVar3 + 8) - (uint)_DAT_0003c5a0;
    *(uint *)((int)local_4c + iVar3 + 0xc) = *(int *)(param_1 + iVar3 + 0xc) - (uint)_DAT_0003c5a0;
    iVar3 = iVar3 + 0x10;
    iVar4 = iVar4 + -1;
  } while (0 < iVar4);
  iVar5 = 3;
  iVar4 = 4;
  iVar3 = local_4c[0];
  do {
    if (*(int *)((int)local_4c + iVar4) < iVar3) {
      iVar3 = *(int *)((int)local_4c + iVar4);
    }
    iVar1 = *(int *)((int)local_4c + iVar4 + 4);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar1 = *(int *)((int)local_4c + iVar4 + 8);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar1 = *(int *)((int)local_4c + iVar4 + 0xc);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar1 = *(int *)((int)local_4c + iVar4 + 0x10);
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    iVar4 = iVar4 + 0x14;
    iVar5 = iVar5 + -1;
  } while (0 < iVar5);
  iVar5 = 3;
  iVar4 = 4;
  do {
    if (local_4c[0] < *(int *)((int)local_4c + iVar4)) {
      local_4c[0] = *(int *)((int)local_4c + iVar4);
    }
    iVar1 = *(int *)((int)local_4c + iVar4 + 4);
    if (local_4c[0] < iVar1) {
      local_4c[0] = iVar1;
    }
    iVar1 = *(int *)((int)local_4c + iVar4 + 8);
    if (local_4c[0] < iVar1) {
      local_4c[0] = iVar1;
    }
    iVar1 = *(int *)((int)local_4c + iVar4 + 0xc);
    if (local_4c[0] < iVar1) {
      local_4c[0] = iVar1;
    }
    iVar1 = *(int *)((int)local_4c + iVar4 + 0x10);
    if (local_4c[0] < iVar1) {
      local_4c[0] = iVar1;
    }
    iVar4 = iVar4 + 0x14;
    iVar5 = iVar5 + -1;
  } while (0 < iVar5);
  if (local_4c[0] + iVar3 < 0) {
    uVar2 = divide_two_integers(local_4c[0] + iVar3,4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
