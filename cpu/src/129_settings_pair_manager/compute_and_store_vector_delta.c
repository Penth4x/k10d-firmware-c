/* @k10d compute_and_store_vector_delta @ 0x1045bcea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Computes the difference between two 2D vectors, transforms it via a helper, and stores
 *   the result.
 * summary:
 *   The function calculates the component-wise difference between the first two elements of
 *   param_2 and param_3. It passes this delta to alloc_and_zero_two_words_1045bc0e and then
 *   free_heap_block_if_flagged_1045bc54 (with a constant argument of 2), likely performing
 *   a rotation or coordinate transformation. Finally, it copies the resulting 8-byte
 *   structure from the stack to the memory location pointed to by param_5.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

void compute_and_store_vector_delta(uint32_t param_1,int *param_2,int *param_3,uint32_t param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  int aiStack_14 [3];
  
  alloc_and_zero_two_words_1045bc0e(aiStack_14 + 1);
  aiStack_14[1] = *param_2 - *param_3;
  aiStack_14[2] = param_2[1] - param_3[1];
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(&stack0xffffffe4 + iVar2) = *(uint32_t *)((int)aiStack_14 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  free_heap_block_if_flagged_1045bc54(aiStack_14 + 1,2);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar1 + param_5) = *(uint32_t *)(&stack0xffffffe4 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
