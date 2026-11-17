/* @k10d allocate_or_reallocate_heap_block @ 0x10516aa4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Frees an existing heap block if present, then allocates a new block of the requested
 *   size from the system heap.
 * summary:
 *   Takes a pointer to a struct containing a current allocation pointer (offset 0) and a
 *   size (offset 4). If the current pointer is non-null, it calls
 *   release_heap_block_and_null to release it. It then retrieves the system heap descriptor
 *   and calls mempool_get_block with pool index 0 to allocate a new block of the specified
 *   size. The new pointer is stored back into the struct, and the function returns true if
 *   the allocation succeeded.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool allocate_or_reallocate_heap_block(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    release_heap_block_and_null(param_1);
  }
  pvVar1 = (void *)get_system_heap();
  iVar2 = mempool_get_block(pvVar1,(void *)param_1[1],0);
  *param_1 = iVar2;
  return iVar2 != 0;
}
