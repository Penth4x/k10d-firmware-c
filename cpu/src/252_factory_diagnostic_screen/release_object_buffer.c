/* @k10d release_object_buffer @ 0x104e47e6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Releases the heap-allocated buffer stored at offset 0x38 of the object if it is non-
 *   NULL.
 * summary:
 *   Checks the pointer at param_1+0x38; if non-zero, calls mempool_release_block with the
 *   pool handle at param_1+0x48 and the buffer pointer, then nulls the field. No other side
 *   effects. The caller context is not provided, so the specific subsystem role is not
 *   determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_buffer(int param_1)

{
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    mempool_release_block(*(void **)(param_1 + 0x48),*(void **)(param_1 + 0x38));
    *(uint32_t *)(param_1 + 0x38) = 0;
  }
  return;
}
