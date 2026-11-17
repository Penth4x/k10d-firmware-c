/* @k10d copy_and_dispatch_two_params @ 0x1045bf82
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Copies 8 bytes from a stack buffer to a local array and passes it to a handler
 *   function.
 * summary:
 *   The function initializes a local structure via alloc_two_word_pair_1045c3dc, processes
 *   param_2 into another local buffer via clamp_difference_to_two_words, and then copies 8
 *   bytes from the first buffer to a second local array. It calls copy_four_words with
 *   param_1 and the copied data, followed by cleanup calls to free_heap_if_flagged_1045c402
 *   on both local buffers. The specific subsystem is not identifiable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_and_dispatch_two_params(void *param_1,void *param_2)

{
  int iVar1;
  uintptr_t sp;
  uint8_t local_20 [8];
  uint uStack_18;
  uint32_t uStack_14;
  uint8_t local_10 [8];
  int iVar2;
  
  alloc_two_word_pair_1045c3dc(&uStack_18,1,1);
  clamp_difference_to_two_words(local_10,param_2,&uStack_18);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(local_20 + iVar1) = *(uint32_t *)((int)&uStack_14 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  copy_four_words(param_1,local_20);
  free_heap_if_flagged_1045c402(local_20,2);
  free_heap_if_flagged_1045c402(&uStack_18,2);
  return;
}
