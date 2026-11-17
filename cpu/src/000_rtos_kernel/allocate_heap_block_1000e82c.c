/* @k10d allocate_heap_block_1000e82c @ 0x1000e82c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Allocates a memory block from a heap manager, handling both new allocation and
 *   extension of an existing block.
 * summary:
 *   The function manages a heap structure pointed to by param_2. If the requested size
 *   (param_3) exceeds the current block size (param_2[3]), it extends the block by
 *   calculating a new pointer and updating metadata in a global heap table (DAT_10011cf8).
 *   If the size is sufficient, it finalizes the allocation by linking the block into the
 *   heap's free/used lists and setting status bits (0x40000000, 0x80000000) in the heap's
 *   bitmap or status array. It returns 1 on success and 0 if the block is too small and
 *   cannot be extended.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_heap_block_1000e82c(uint32_t *param_1,int *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  
  piVar2 = (int *)param_2[1];
  iVar3 = *param_2;
  uVar1 = param_2[3] - param_3;
  if (param_2[3] < (int)param_3 || uVar1 == 0) {
    if (uVar1 == 0) {
      *piVar2 = iVar3;
      iVar5 = param_4 * 0x20;
      if (iVar3 == DAT_10011cf8/*ROM*/ + iVar5 + -0x1c) {
        *(int **)(DAT_10011cf8/*ROM*/ + iVar5 + -0x18) = piVar2;
      }
      else {
        *(int **)(iVar3 + 4) = piVar2;
      }
      *param_1 = (uint32_t)(uintptr_t)param_2;
      *(uint *)(*(int *)(DAT_10011cf8/*ROM*/ + iVar5 + -4) + param_2[2] * 4) = param_3 | 0xc0000000;
      iVar3 = *(int *)(DAT_10011cf8/*ROM*/ + iVar5 + -4) + param_2[2] * 4;
      *(uint *)(param_3 * 4 + iVar3) = *(uint *)(param_3 * 4 + iVar3) | 0x40000000;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    iVar3 = param_4 * 0x20;
    piVar2 = (int *)(uVar1 * *(int *)(DAT_10011cf8/*ROM*/ + iVar3 + -0xc) + (int)param_2);
    *param_1 = (uint32_t)(uintptr_t)piVar2;
    piVar2[-1] = (int)param_2;
    *(uint *)(*(int *)(DAT_10011cf8/*ROM*/ + iVar3 + -4) + param_2[2] * 4 + uVar1 * 4) =
         param_3 | 0x80000000/*SDRAM*/;
    *(uint *)(*(int *)(DAT_10011cf8/*ROM*/ + iVar3 + -4) + param_2[2] * 4) = uVar1 | 0x40000000;
    iVar3 = *(int *)(iVar3 + DAT_10011cf8/*ROM*/ + -4) + param_2[2] * 4 + uVar1 * 4;
    *(uint *)(param_3 * 4 + iVar3) = *(uint *)(param_3 * 4 + iVar3) | 0x40000000;
    param_2[3] = uVar1;
    uVar4 = 1;
  }
  return uVar4;
}
