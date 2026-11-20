/* @k10d release_heap_block_if_valid @ 0x104e63ba
 * name: model (proposed by the local model from the decompile, confidence 0.98)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Releases a heap block via the system heap if the pointer is non-NULL.
 * summary:
 *   Checks param_1 for NULL; if non-NULL, obtains the system heap descriptor via
 *   get_system_heap and calls mempool_release_block to free the block. No other side
 *   effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_heap_block_if_valid(void *param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = (void *)get_system_heap();
    mempool_release_block(pvVar1,param_1);
  }
  return;
}
