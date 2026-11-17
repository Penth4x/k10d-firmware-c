/* @k10d forward_object_field_to_helper @ 0x1051a334
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Passes a field from the first object and a field from the second object to a helper
 *   function.
 * summary:
 *   The function extracts a pointer from offset 0x70 of the object pointed to by param_1
 *   and a 32-bit value from offset 4 of the object pointed to by param_2. It then calls
 *   copy_bytes_to_struct_field with param_2, the extracted pointer, and the extracted
 *   value. The specific roles of the objects and the helper are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_object_field_to_helper(int param_1,int param_2)

{
  copy_bytes_to_struct_field(param_2,*(void **)(param_1 + 0x70),*(uint32_t *)(param_2 + 4));
  return;
}
