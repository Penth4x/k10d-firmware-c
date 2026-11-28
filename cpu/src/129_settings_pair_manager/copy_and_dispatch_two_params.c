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
  uint8_t dst_words [8];
  uint alloc_hi;
  uint32_t alloc_lo;
  uint8_t src_words [8];
  int iVar2;

  alloc_two_word_pair_1045c3dc(&alloc_hi,1,1);
  clamp_difference_to_two_words(src_words,param_2,&alloc_hi);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(dst_words + iVar1) = *(uint32_t *)((int)&alloc_lo + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  copy_four_words(param_1,dst_words);
  free_heap_if_flagged_1045c402(dst_words,2);
  free_heap_if_flagged_1045c402(&alloc_hi,2);
  return;
}
