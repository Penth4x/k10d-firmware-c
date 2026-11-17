/* @k10d allocate_from_heap_pool_two_104771c0 @ 0x104771c0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a block from pool 2 of the system heap and returns the pointer.
 * summary:
 *   Fetches the system heap descriptor via get_system_heap and calls mempool_get_block with
 *   pool index 2 and the caller-provided parameter. The returned block pointer is discarded
 *   by this wrapper, so the caller likely relies on a side effect or the parameter is used
 *   elsewhere. No camera-specific behavior is evident.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_from_heap_pool_two_104771c0(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_system_heap();
  mempool_get_block(pvVar1,param_1,2);
  return;
}
