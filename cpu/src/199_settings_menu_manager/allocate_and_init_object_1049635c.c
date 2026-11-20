/* @k10d allocate_and_init_object_1049635c @ 0x1049635c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x28-byte object, constructs it, and initializes it with parameters from a
 *   helper call.
 * summary:
 *   Allocates 0x28 bytes from the heap and calls cls_105b3ea0_new to construct the object.
 *   It calls alloc_two_word_pair_1045bc2e with param_3 and param_4, passing the result to
 *   copy_two_shorts_from_source for initialization. If param_2 is non-zero, it calls
 *   write_two_bytes_to_offset_0x24 with the object pointer and param_2. Returns the
 *   allocated object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_1049635c(void *param_1,int param_2,void *param_3,void *param_4)

{
  cls_105b3ea0 *pcVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  pcVar1 = (cls_105b3ea0 *)heap_alloc((void *)0x28);
  if (pcVar1 == (cls_105b3ea0 *)0x0) {
    pcVar1 = (cls_105b3ea0 *)0x0;
  }
  else {
    cls_105b3ea0_new(pcVar1);
  }
  uVar2 = (uintptr_t)(alloc_two_word_pair_1045bc2e((uint32_t *)(auStack_10),(uint32_t)(param_3),(uint32_t)(param_4)));
  copy_two_shorts_from_source((uint16_t *)(pcVar1),(uint32_t *)(uVar2));
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  if (param_2 != 0) {
    write_two_bytes_to_offset_0x24((int)pcVar1,(short)param_2);
  }
  return (int)pcVar1;
}
