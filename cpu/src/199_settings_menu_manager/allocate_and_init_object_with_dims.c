/* @k10d allocate_and_init_object_with_dims @ 0x104963cc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x2c-byte object, constructs it, and invokes a virtual method with clamped
 *   dimension parameters.
 * summary:
 *   The function clamps param_5 and param_6 to a minimum of 2. It allocates 0x2c bytes from
 *   the heap and calls cls_105b3d9c_new to construct the object. It then calls
 *   alloc_two_word_pair_1045bc2e and copy_two_shorts_from_source, followed by a virtual
 *   call (slot 4) on the object passing the clamped values and param_2. The pointer to the
 *   new object is returned in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_with_dims(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                ushort param_5,ushort param_6)

{
  uint16_t *puVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  if (param_5 < 2) {
    param_5 = 2;
  }
  if (param_6 < 2) {
    param_6 = 2;
  }
  puVar1 = (uint16_t *)heap_alloc((void *)0x2c);
  if (puVar1 == (uint16_t *)0x0) {
    puVar1 = (uint16_t *)0x0;
  }
  else {
    cls_105b3d9c_new(puVar1);
  }
  uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,param_3,param_4);
  copy_two_shorts_from_source(puVar1,(void *)uVar2);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  (**(code **)(*(int *)(puVar1 + 0x10) + 0x24))
            ((int)*(short *)(*(int *)(puVar1 + 0x10) + 0x20) + (int)puVar1,param_5,param_6,param_2);
  return (int)puVar1;
}
