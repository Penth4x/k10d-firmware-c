/* @k10d release_pool_block_if_present @ 0x104e470c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Releases a heap block from the pool stored at offset 0x48 of the object if the pointer
 *   is non-null.
 * summary:
 *   Checks whether param_2 is non-null; if so, dereferences the pool pointer at
 *   param_1+0x48 and calls mempool_release_block to free the block. No other side effects
 *   or flags are touched. The caller at 0x104e5408 is unnamed, so the specific subsystem
 *   role is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_pool_block_if_present(int param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    mempool_release_block(*(void **)(param_1 + 0x48),param_2);
  }
  return;
}
