/* @k10d finalize_object_with_count @ 0x104a9fdc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls a helper on a sub-structure based on a count field, then clears a trailing byte.
 * summary:
 *   Checks the integer at offset 0x14 of the object passed in param_1. If it is less than
 *   1, it calls check_kernel_object_id_valid with the pointer at offset 0xc; otherwise, it
 *   calls check_heap_alloc_success with that pointer and the count value. Finally, it
 *   writes 0 to the byte at offset 0x18. The specific roles of the callees and the object
 *   structure are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void finalize_object_with_count(int param_1)

{
  if (*(int *)(param_1 + 0x14) < 1) {
    check_kernel_object_id_valid((int *)(param_1 + 0xc));
  }
  else {
    check_heap_alloc_success((int *)(param_1 + 0xc),*(int *)(param_1 + 0x14));
  }
  *(uint8_t *)(param_1 + 0x18) = 0;
  return;
}
