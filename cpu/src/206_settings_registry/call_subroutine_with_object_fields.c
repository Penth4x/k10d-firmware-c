/* @k10d call_subroutine_with_object_fields @ 0x104a2bde
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes a helper with the object's field at offset 0x14, zero, and field at offset
 *   0x18.
 * summary:
 *   The function reads two pointers/ints from the object pointed to by param_1 (at offsets
 *   0x14 and 0x18) and passes them, along with a constant 0, to fill_byte_array. It
 *   performs no other operations and returns void. The specific role of the object or the
 *   callee is not determinable from the provided pseudocode and unknown callee name.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_object_fields(int param_1)

{
  fill_byte_array(*(void **)(param_1 + 0x14),0,*(int *)(param_1 + 0x18));
  return;
}
