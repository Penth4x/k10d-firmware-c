/* @k10d release_transaction_context @ 0x10464dd0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Frees the object stored at offset 0x18 of the transaction context and nulls the
 *   pointer.
 * summary:
 *   Checks if the pointer at param_1+0x18 is non-null. If so, calls
 *   release_object_and_free_heap with that pointer and the argument 3, likely a
 *   deallocation or release operation. Finally, sets the pointer at param_1+0x18 to zero.
 *   This is a virtual method shared by 11 vtable slots, acting as a default cleanup
 *   implementation for the cpucom_spi_driver module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_transaction_context(int param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    release_object_and_free_heap(*(void **)(param_1 + 0x18),3);
  }
  *(uint32_t *)(param_1 + 0x18) = 0;
  return;
}
