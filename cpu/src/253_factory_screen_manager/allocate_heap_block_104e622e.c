/* @k10d allocate_heap_block_104e622e @ 0x104e622e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a memory block from the system heap's default pool (pool 0).
 * summary:
 *   Retrieves the system heap descriptor via get_system_heap and calls mempool_get_block
 *   with pool index 0. Returns the allocated block pointer or 0 on failure. Used by a class
 *   constructor/destructor body.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_heap_block_104e622e(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  pvVar1 = (void *)get_system_heap();
  uVar2 = mempool_get_block(pvVar1,param_1,0);
  return uVar2;
}
