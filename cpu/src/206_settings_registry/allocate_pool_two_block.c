/* @k10d allocate_pool_two_block @ 0x104a89ec
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Allocates a block from pool 2 of the system heap and returns it.
 * summary:
 *   Fetches the system heap descriptor via get_system_heap and calls mempool_get_block with
 *   pool index 2 and the caller-provided param_1. The allocated block pointer is returned
 *   in r4 despite the void return type. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_pool_two_block(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_system_heap();
  mempool_get_block(pvVar1,param_1,2);
  return;
}
