/* @k10d kernel_alloc_pool_block @ 0x10010138
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Allocates a memory block from a specific kernel memory pool by searching its free list.
 * summary:
 *   Validates pool index and block count, then iterates through the pool's free list
 *   (linked via pointers at offset -0x1c) to find a suitable block. Calls
 *   allocate_heap_block_1000e82c to perform the actual allocation or split operation.
 *   Returns 0 on success or a negative error code (e.g., 0xffffffee for invalid pool,
 *   0xffffffef for invalid size).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t kernel_alloc_pool_block(int param_1,void *param_2,uint32_t *param_3)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  int *piVar5;
  
  if ((param_1 < 1) || (DAT_10011d3a/*ROM*/ < param_1)) {
    uVar3 = E_ID;
  }
  else if ((int)param_2 < 1) {
    uVar3 = E_PAR;
  }
  else {
    iVar4 = DAT_10011cf8/*ROM*/ + param_1 * 0x20;
    iVar1 = (int)*(short *)(iVar4 + -0x20);
    if (iVar1 == -2) {
      uVar3 = E_NOEXS;
    }
    else if (*(void **)(iVar4 + -0x10) < param_2) {
      uVar3 = E_PAR;
    }
    else {
      piVar5 = *(int **)(iVar4 + -0x1c);
      iVar2 = *(int *)(iVar4 + -0xc);
      if ((iVar1 == -1) ||
         ((*(short *)(iVar4 + -0x14) == 1 &&
          (*(short *)(_DAT_6a003758 * 0x44 + 0x6a001c00) < *(short *)(iVar1 * 0x44 + 0x6a001c00)))))
      {
        for (; piVar5 != (int *)(iVar4 + -0x1c); piVar5 = (int *)*piVar5) {
          iVar1 = allocate_heap_block_1000e82c(param_3,piVar5,((int)param_2 + iVar2 + -1) / iVar2,param_1);
          if (iVar1 == 1) {
            return 0;
          }
        }
      }
      uVar3 = E_TMOUT;
    }
  }
  return uVar3;
}
