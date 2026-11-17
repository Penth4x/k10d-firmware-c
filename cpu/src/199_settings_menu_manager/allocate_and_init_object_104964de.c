/* @k10d allocate_and_init_object_104964de @ 0x104964de
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x30-byte object, constructs it, and conditionally initializes it with
 *   parameters.
 * summary:
 *   Allocates 0x30 bytes from the heap and calls cls_105b3f00_new to construct the object.
 *   It calls alloc_two_word_pair_1045bc2e to prepare a local structure, passes the result
 *   to copy_two_shorts_from_source, and calls free_heap_block_if_flagged_1045bc54. If
 *   param_2 is non-null, it calls store_three_field_record to further initialize the object
 *   with param_2, param_5, and a boolean derived from param_6. Returns the pointer to the
 *   allocated object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_104964de(void *param_1,int param_2,uint32_t param_3,uint32_t param_4,uint8_t param_5,
                char param_6)

{
  uint16_t *puVar1;
  uint32_t *uVar2;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  puVar1 = (uint16_t *)heap_alloc((void *)0x30);
  if (puVar1 == (uint16_t *)0x0) {
    puVar1 = (uint16_t *)0x0;
  }
  else {
    cls_105b3f00_new(puVar1);
  }
  uVar2 = alloc_two_word_pair_1045bc2e(auStack_10,param_3,param_4);
  copy_two_shorts_from_source(puVar1,uVar2);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  if (param_2 != 0) {
    store_three_field_record((int)puVar1,(uint16_t *)param_2,param_5,param_6 == '\0');
  }
  return (int)puVar1;
}
