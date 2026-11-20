/* @k10d find_min_per_group_and_sum @ 0x000c0504
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Copies 48 bytes from param_1, finds the minimum value in each of 6 groups of 8, and
 *   calls unsigned_divide with their sum.
 * summary:
 *   The function first copies 12 uints (48 bytes) from the buffer pointed to by param_1
 *   into a local array. It then iterates 6 times, each time scanning 8 consecutive uints to
 *   find the minimum value and storing it in a 6-element result array. The minimum-finding
 *   logic sets the corresponding source element to 0xffff after selection. Finally, it sums
 *   the 6 minimum values and passes the sum and the constant 6 to unsigned_divide. The role
 *   of unsigned_divide is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t find_min_per_group_and_sum(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  uint local_64 [12];
  uint local_34 [6];
  int iStack_1c;
  
  iVar5 = 3;
  iVar4 = 0;
  iVar2 = 8;
  do {
    *(uint32_t *)((int)local_64 + iVar4) = *(uint32_t *)(iVar2 + param_1);
    *(uint32_t *)((int)local_64 + iVar4 + 4) = *(uint32_t *)(param_1 + iVar2 + 4);
    *(uint32_t *)((int)local_64 + iVar4 + 8) = *(uint32_t *)(param_1 + iVar2 + 8);
    *(uint32_t *)((int)local_64 + iVar4 + 0xc) = *(uint32_t *)(param_1 + iVar2 + 0xc);
    iVar4 = iVar4 + 0x10;
    iVar2 = iVar2 + 0x10;
    iVar5 = iVar5 + -1;
  } while (0 < iVar5);
  iVar2 = 0;
  iStack_1c = 0;
  do {
    *(uint *)((int)local_34 + iStack_1c) = local_64[0];
    iVar4 = 0;
    iVar5 = 1;
    iVar7 = 0xb;
    iVar6 = 4;
    do {
      if (*(uint *)((int)local_64 + iVar6) < local_34[iVar2]) {
        local_34[iVar2] = *(uint *)((int)local_64 + iVar6);
        iVar4 = iVar5;
      }
      uVar3 = *(uint *)((int)local_64 + iVar6 + 4);
      if (uVar3 < local_34[iVar2]) {
        local_34[iVar2] = uVar3;
        iVar4 = iVar5 + 1;
      }
      uVar3 = *(uint *)((int)local_64 + iVar6 + 8);
      if (uVar3 < local_34[iVar2]) {
        local_34[iVar2] = uVar3;
        iVar4 = iVar5 + 2;
      }
      iVar5 = iVar5 + 3;
      iVar6 = iVar6 + 0xc;
      iVar7 = iVar7 + -3;
    } while (2 < iVar7);
    do {
      if (*(uint *)((int)local_64 + iVar6) < local_34[iVar2]) {
        local_34[iVar2] = *(uint *)((int)local_64 + iVar6);
        iVar4 = iVar5;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + -1;
    } while (0 < iVar7);
    local_64[iVar4] = 0xffff;
    iVar2 = iVar2 + 1;
    iStack_1c = iStack_1c + 4;
  } while (iVar2 < 6);
  uVar1 = unsigned_divide(local_34[4] + local_34[2] + local_34[0] + local_34[1] + local_34[3] +
                       local_34[5],6);
  return uVar1;
}
