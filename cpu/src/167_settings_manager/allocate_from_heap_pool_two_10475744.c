/* @k10d allocate_from_heap_pool_two_10475744 @ 0x10475744
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a block from pool 2 of the system heap using the given parameter.
 * summary:
 *   Retrieves the system heap descriptor via get_system_heap and passes it along with
 *   param_1 to mempool_get_block, specifying pool index 2. The return value of
 *   mempool_get_block is discarded, so the allocated block pointer is not returned to the
 *   caller. No camera-specific subsystem is indicated by the code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_from_heap_pool_two_10475744(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_system_heap();
  mempool_get_block(pvVar1,param_1,2);
  return;
}
