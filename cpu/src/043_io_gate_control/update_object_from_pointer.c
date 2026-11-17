/* @k10d update_object_from_pointer @ 0x1039f256
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 043_io_gate_control (unit names are model-proposed)
 * purpose:
 *   If a pointer field is set, calls two helpers on a sub-object using a value read through
 *   that pointer.
 * summary:
 *   Checks if the int at offset 0x38 of param_1 is non-zero. If so, it calls
 *   check_kernel_object_id_valid with the pointer at offset 0x20, then calls
 *   check_heap_alloc_success with that same pointer and a value read from offset 0x34 of
 *   the object pointed to by the 0x38 field. The specific roles of the helpers and the data
 *   structures are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_from_pointer(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    check_kernel_object_id_valid((int *)(param_1 + 0x20));
    check_heap_alloc_success((int *)(param_1 + 0x20),*(int *)(*(int *)(param_1 + 0x38) + 0x34));
  }
  return;
}
