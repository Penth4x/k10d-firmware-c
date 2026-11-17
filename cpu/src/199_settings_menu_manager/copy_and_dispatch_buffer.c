/* @k10d copy_and_dispatch_buffer @ 0x10495df2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Copies 16 bytes from param_2 into a local buffer, initializes it, and passes it to a
 *   helper function.
 * summary:
 *   The function initializes a local structure via alloc_and_zero_two_words_1045bc0e and
 *   store_two_words_to_memory. It then copies 16 bytes from param_2 into the local buffer
 *   using a loop. It calls construct_object_from_two_buffers with param_1 and the buffer,
 *   followed by cleanup calls to free_heap_block_if_flagged_1045bc54 and
 *   destroy_text_widget. The return value of construct_object_from_two_buffers is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int copy_and_dispatch_buffer(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t auStack_28 [4];
  uint8_t local_18 [4];
  uint32_t uStack_14;
  uint8_t local_10 [8];
  
  alloc_and_zero_two_words_1045bc0e((void *)local_10);
  store_two_words_to_memory((void *)local_10,0,0);
  iVar1 = 0x10;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)(local_10 + iVar1 + -0x1c) = *(uint32_t *)(iVar2 + (int)param_2);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  iVar1 = 8;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)((int)auStack_28 + iVar1 + 0xc) = *(uint32_t *)((int)&uStack_14 + iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  iVar1 = construct_object_from_two_buffers(param_1,auStack_28,0,local_18);
  free_heap_block_if_flagged_1045bc54(local_18,2);
  destroy_text_widget(auStack_28,2);
  free_heap_block_if_flagged_1045bc54(local_10,2);
  return iVar1;
}
