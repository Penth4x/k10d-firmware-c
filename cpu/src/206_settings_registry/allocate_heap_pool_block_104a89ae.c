/* @k10d allocate_heap_pool_block_104a89ae @ 0x104a89ae
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates a block from pool 2 of the system heap using the given size parameter.
 * summary:
 *   Retrieves the system heap descriptor via get_system_heap and passes it to
 *   mempool_get_block with pool index 2 and the input size. Returns the allocated block
 *   pointer or null. The caller is a class constructor/destructor body, suggesting this is
 *   a helper for object memory management.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_heap_pool_block_104a89ae(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  pvVar1 = (void *)get_system_heap();
  uVar2 = mempool_get_block(pvVar1,param_1,2);
  return uVar2;
}
