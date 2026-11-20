/* @k10d insert_into_sorted_block_list @ 0x10547218
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Inserts a block descriptor into a sorted linked list, coalescing adjacent blocks and
 *   freeing merged memory.
 * summary:
 *   The function manipulates a global list structure at _DAT_80014b18, which tracks memory
 *   blocks defined by a pointer and a size field. It inserts the block pointed to by
 *   param_1 into the list in sorted order. If the new block is adjacent to an existing
 *   block, it merges them by updating the size and pointer, and calls update_min_max_bounds
 *   to free the combined region. This behavior is characteristic of a memory allocator's
 *   free-list management, specifically the coalescing of adjacent free blocks.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10547308) overlaps instruction at (ram,0x10547306)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void insert_into_sorted_block_list(int *param_1,int *param_2)

{
  uint32_t *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1 != (int *)0x0) {
    piVar6 = param_1 + -1;
    if (((uint32_t *)_DAT_80014b18)/*SDRAM*/[2] == 0) {
      *param_1 = (int)piVar6;
      ((uint32_t *)_DAT_80014b18)/*SDRAM*/[2] = (uintptr_t)(piVar6);
      puVar1 = (uint32_t *)((uintptr_t)(_DAT_80014b18/*SDRAM*/));
      *(uint32_t *)_DAT_80014b18/*SDRAM*/ = (uintptr_t)(piVar6);
      puVar1[3] = (uintptr_t)(piVar6);
    }
    else {
      piVar3 = (int *)((int *)*(uint32_t *)_DAT_80014b18/*SDRAM*/)[1];
      param_2 = (int *)*(uint32_t *)_DAT_80014b18/*SDRAM*/;
      do {
        piVar2 = piVar3;
        piVar3 = piVar2;
        if (piVar6 < piVar2) break;
        piVar3 = (int *)piVar2[1];
        param_2 = piVar2;
      } while (piVar2 < piVar3);
      *param_1 = (int)piVar3;
      param_2[1] = (int)piVar6;
      if (piVar6 < (int *)((uint32_t *)_DAT_80014b18)/*SDRAM*/[2]) {
        ((uint32_t *)_DAT_80014b18)/*SDRAM*/[2] = (uintptr_t)(piVar6);
      }
      if (piVar3 == (int *)(*piVar6 + 4 + (int)piVar6)) {
        *param_1 = piVar3[1];
        *piVar6 = *piVar6 + *piVar3 + 4;
        ((uint32_t *)_DAT_80014b18)/*SDRAM*/[3] = (uintptr_t)(piVar6);
      }
      if (param_2 == (int *)((int)param_1 + (-8 - *param_2))) {
        param_2[1] = *param_1;
        *param_2 = *param_2 + *piVar6 + 4;
        ((uint32_t *)_DAT_80014b18)/*SDRAM*/[3] = (uintptr_t)(param_2);
        piVar6 = param_2;
      }
      if (piVar6[1] == ((uint32_t *)_DAT_80014b18)/*SDRAM*/[2]) {
        *(uint32_t *)_DAT_80014b18/*SDRAM*/ = (uintptr_t)(piVar6);
      }
    }
    if (*piVar6 + 4 + (int)piVar6 == ((uint32_t *)_DAT_80014b18)/*SDRAM*/[1]) {
      piVar3 = (int *)((uint32_t *)_DAT_80014b18)/*SDRAM*/[2];
      if (piVar3 == piVar6) {
        ((uint32_t *)_DAT_80014b18)/*SDRAM*/[2] = 0;
      }
      else {
        piVar2 = piVar3;
        if (piVar6 == param_2) {
          while (piVar4 = piVar2, param_2 = piVar3, piVar4 < piVar6) {
            piVar3 = piVar4;
            piVar2 = (int *)piVar4[1];
          }
        }
        param_2[1] = piVar6[1];
        *(uint32_t *)_DAT_80014b18/*SDRAM*/ = (uintptr_t)(param_2);
        if (piVar6 <= (int *)((uint32_t *)_DAT_80014b18)/*SDRAM*/[3]) {
          ((uint32_t *)_DAT_80014b18)/*SDRAM*/[3] = ((uint32_t *)_DAT_80014b18)/*SDRAM*/[2];
        }
      }
      iVar5 = update_min_max_bounds(-(*piVar6 + 4));
      if (iVar5 != -1) {
        ((uint32_t *)_DAT_80014b18)/*SDRAM*/[1] = (uintptr_t)(piVar6);
      }
    }
  }
  return;
}
