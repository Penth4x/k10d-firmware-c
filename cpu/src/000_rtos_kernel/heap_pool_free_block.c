/* @k10d heap_pool_free_block @ 0x10010660
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Frees a block from a heap pool by index, coalescing with adjacent free blocks and
 *   updating the free-list.
 * summary:
 *   Validates that param_1 is a pool index within DAT_10011d3a and that param_2 is a
 *   4-byte-aligned pointer within the pool's [start, end) range. It computes the block
 *   index, checks the free-list bitmap at DAT_10011cf8+idx*0x20-4, and if the block is
 *   allocated, marks it free, coalesces with the previous and next blocks if they are also
 *   free, and updates the linked list pointers. Calls process_task_timeout_queue (likely a
 *   kernel notification or accounting routine) before returning 0. Returns 0xffffffee
 *   (invalid index) or 0xffffffef (invalid pointer/misalignment) on error.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t heap_pool_free_block(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint32_t uVar6;
  int iVar7;
  
  if ((param_1 < 1) || (DAT_10011d3a/*ROM*/ < param_1)) {
    uVar6 = E_ID;
  }
  else {
    if (((uint)param_2 & 3) == 0) {
      iVar5 = param_1 * 0x20;
      iVar1 = DAT_10011cf8/*ROM*/ + iVar5;
      if (*(short *)(iVar1 + -0x20) == -2) {
        return E_NOEXS;
      }
      piVar3 = *(int **)(iVar1 + -8);
      if (((piVar3 <= param_2) && (param_2 < (int *)(*(int *)(iVar1 + -0x10) + (int)piVar3))) &&
         (iVar7 = ((int)param_2 - (int)piVar3) / *(int *)(iVar1 + -0xc),
         ((int)param_2 - (int)piVar3) % *(int *)(iVar1 + -0xc) == 0)) {
        uVar2 = *(uint *)(*(int *)(iVar1 + -4) + iVar7 * 4);
        if ((uVar2 & 0x80000000/*SDRAM*/) != 0) {
          uVar4 = uVar2 & 0x3fffffff;
          if ((uVar2 & 0x40000000) == 0) {
            *(uint32_t *)(*(int *)(DAT_10011cf8/*ROM*/ + iVar5 + -4) + iVar7 * 4) = 0;
            param_2 = (int *)param_2[-1];
            uVar4 = uVar4 + param_2[3];
            iVar7 = iVar7 - param_2[3];
          }
          else {
            *param_2 = DAT_10011cf8/*ROM*/ + iVar5 + -0x1c;
            param_2[1] = *(int *)(DAT_10011cf8/*ROM*/ + iVar5 + -0x18);
            **(uint32_t **)(DAT_10011cf8/*ROM*/ + iVar5 + -0x18) = param_2;
            *(int **)(DAT_10011cf8/*ROM*/ + iVar5 + -0x18) = param_2;
            param_2[2] = iVar7;
          }
          iVar7 = iVar7 * 4;
          iVar1 = *(int *)(DAT_10011cf8/*ROM*/ + iVar5 + -4) + iVar7;
          if ((*(uint *)(iVar1 + uVar4 * 4) & 0x80000000/*SDRAM*/) == 0) {
            *(uint32_t *)(iVar1 + uVar4 * 4) = 0;
            iVar1 = DAT_10011cf8/*ROM*/ + iVar5;
            piVar3 = (int *)(uVar4 * *(int *)(iVar1 + -0xc) + (int)param_2);
            uVar4 = uVar4 + piVar3[3];
            if (*piVar3 == iVar1 + -0x1c) {
              *(int *)(iVar1 + -0x18) = piVar3[1];
            }
            else {
              *(int *)(*piVar3 + 4) = piVar3[1];
            }
            *(int *)piVar3[1] = *piVar3;
          }
          param_2[3] = uVar4;
          *(int **)((int)param_2 + uVar4 * *(int *)(DAT_10011cf8/*ROM*/ + iVar5 + -0xc) + -4) = param_2;
          *(uint *)(*(int *)(DAT_10011cf8/*ROM*/ + iVar5 + -4) + iVar7) = uVar4 | 0x40000000;
          iVar7 = *(int *)(DAT_10011cf8/*ROM*/ + iVar5 + -4) + iVar7;
          *(uint *)(uVar4 * 4 + iVar7) = *(uint *)(uVar4 * 4 + iVar7) & 0xbfffffff;
          process_task_timeout_queue(param_1);
          return 0;
        }
      }
    }
    uVar6 = E_PAR;
  }
  return uVar6;
}
