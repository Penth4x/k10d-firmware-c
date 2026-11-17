/* @k10d call_helper_with_offset_0x6c @ 0x104a6326
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls copy_bytes_to_struct_field with param_2, the value at param_1+0x6c, and constant
 *   0x26.
 * summary:
 *   The function reads a pointer-sized value from offset 0x6c of the structure pointed to
 *   by param_1 and passes it, along with param_2 and the constant 0x26, to
 *   copy_bytes_to_struct_field. It performs no other operations. The role of
 *   copy_bytes_to_struct_field is unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_0x6c(int param_1,int param_2)

{
  copy_bytes_to_struct_field(param_2,*(void **)(param_1 + 0x6c),0x26);
  return;
}
