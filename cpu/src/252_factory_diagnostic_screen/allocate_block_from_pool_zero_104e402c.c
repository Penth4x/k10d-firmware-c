/* @k10d allocate_block_from_pool_zero_104e402c @ 0x104e402c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Allocates a memory block from pool 0 of the system heap using the given size.
 * summary:
 *   Retrieves the system heap descriptor via get_system_heap and passes it to
 *   mempool_get_block with param_1 as the size and 0 as the pool index. The allocated block
 *   pointer is returned by mempool_get_block but is not captured or returned by this
 *   wrapper. No camera-specific behavior is evident.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_block_from_pool_zero_104e402c(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_system_heap();
  mempool_get_block(pvVar1,param_1,0);
  return;
}
