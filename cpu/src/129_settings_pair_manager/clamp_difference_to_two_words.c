/* @k10d clamp_difference_to_two_words @ 0x1045c49c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Computes the non-negative difference between two 2-word values and stores the result
 *   into a destination buffer.
 * summary:
 *   The function calculates the difference between the 32-bit values pointed to by param_2
 *   and param_3 for both the low and high words, clamping any negative result to zero. It
 *   calls alloc_and_zero_two_words_1045c3bc and free_heap_if_flagged_1045c402, which likely
 *   perform initialization or normalization on the intermediate stack buffer before the
 *   final 8-byte result is copied to param_1. The behavior is a standard unsigned
 *   subtraction with saturation, commonly used for range calculations or offset
 *   adjustments.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

void clamp_difference_to_two_words(void *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  int aiStack_18 [3];
  
  alloc_and_zero_two_words_1045c3bc(aiStack_18 + 1);
  if (*param_3 < *param_2) {
    aiStack_18[1] = *param_2 - *param_3;
  }
  else {
    aiStack_18[1] = 0;
  }
  if (param_3[1] < param_2[1]) {
    aiStack_18[2] = param_2[1] - param_3[1];
  }
  else {
    aiStack_18[2] = 0;
  }
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(&stack0xffffffe0 + iVar2) = *(uint32_t *)((int)aiStack_18 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  free_heap_if_flagged_1045c402(aiStack_18 + 1,2);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar1 + (int)param_1) = *(uint32_t *)(&stack0xffffffe0 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
