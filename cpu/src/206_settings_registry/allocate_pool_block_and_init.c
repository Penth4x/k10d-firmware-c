/* @k10d allocate_pool_block_and_init @ 0x104a3010
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x30000-byte block from heap pool 2 and stores it at offset 0x38, then
 *   calls five initializers.
 * summary:
 *   Retrieves the system heap descriptor and requests a 0x30000-byte block from pool index
 *   2 via mempool_get_block. The returned pointer is stored at param_1 + 0x38. The function
 *   then sequentially calls five unnamed helper functions (init_object_with_new_member
 *   through initialize_object_with_five_values) passing param_1 as the sole argument. As
 *   virtual slot 2 of cls_105b6424, this likely serves as a post-construction
 *   initialization routine that sets up a large memory buffer and configures associated
 *   state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_pool_block_and_init(int param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  pvVar1 = (void *)get_system_heap();
  uVar2 = mempool_get_block(pvVar1,(void *)0x30000,2);
  *(uint32_t *)(param_1 + 0x38) = uVar2;
  init_object_with_new_member(param_1);
  initialize_object_subcomponents_104a3522(param_1);
  initialize_object_subcomponents_104a35a2(param_1);
  initialize_subobject_at_offset_0x18(param_1);
  initialize_object_with_five_values(param_1);
  return;
}
