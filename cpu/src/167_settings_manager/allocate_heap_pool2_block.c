/* @k10d allocate_heap_pool2_block @ 0x10475706
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a block from pool 2 of the system heap using the given size parameter.
 * summary:
 *   Retrieves the system heap descriptor via get_system_heap and passes it to
 *   mempool_get_block with pool index 2 and the provided size parameter. Returns the
 *   allocated block pointer or 0 on failure. The caller is a constructor/destructor body,
 *   suggesting this is used for object initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_heap_pool2_block(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  pvVar1 = (void *)get_system_heap();
  uVar2 = mempool_get_block(pvVar1,param_1,2);
  return uVar2;
}
