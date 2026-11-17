/* @k10d allocate_pool_block_by_index @ 0x1051b856
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a block of param_2*4 bytes from memory pool param_2 of the system heap.
 * summary:
 *   Retrieves the system heap descriptor via get_system_heap and calls mempool_get_block
 *   with pool index param_2 and size param_2<<2. The returned block pointer is discarded.
 *   This is virtual slot 2 of cls_105d67dc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_pool_block_by_index(uint32_t param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)get_system_heap();
  mempool_get_block(pvVar1,(void *)(param_2 << 2),2);
  return;
}
