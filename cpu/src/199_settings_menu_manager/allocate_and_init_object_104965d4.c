/* @k10d allocate_and_init_object_104965d4 @ 0x104965d4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x28-byte object, constructs it, and initializes it with parameters from a
 *   temporary stack structure.
 * summary:
 *   The function allocates 0x28 bytes from the heap and calls a constructor
 *   (cls_105b3e0c_new) on the new memory. It then uses alloc_two_word_pair_1045bc2e to
 *   populate a local stack buffer with data derived from param_3 and param_4, and passes
 *   the result to copy_two_shorts_from_source to initialize the allocated object. Finally,
 *   if param_2 is non-zero, it calls store_value_at_offset_0x24_1048d938 to set an
 *   additional property or link on the object before returning the pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_104965d4(void *param_1,int param_2,uint32_t param_3,uint32_t param_4)

{
  cls_105b3e0c *pcVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  pcVar1 = (cls_105b3e0c *)heap_alloc((void *)0x28);
  if (pcVar1 == (cls_105b3e0c *)0x0) {
    pcVar1 = (cls_105b3e0c *)0x0;
  }
  else {
    cls_105b3e0c_new(pcVar1);
  }
  uVar2 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,param_3,param_4));
  copy_two_shorts_from_source((uint16_t *)(pcVar1),(uint32_t *)(uVar2));
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  if (param_2 != 0) {
    store_value_at_offset_0x24_1048d938((int)pcVar1,param_2);
  }
  return (int)pcVar1;
}
