/* @k10d allocate_block_from_pool_zero_104e639a @ 0x104e639a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a memory block from pool 0 of the system heap for the given size.
 * summary:
 *   Retrieves the system heap descriptor via get_system_heap and calls mempool_get_block
 *   with pool index 0 and the size in param_1. The returned block pointer is discarded, so
 *   this acts as a side-effect-only allocation or reservation. No camera-specific behavior
 *   is evident from the code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_block_from_pool_zero_104e639a(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_system_heap();
  mempool_get_block(pvVar1,param_1,0);
  return;
}
