/* @k10d call_subroutine_with_offset_field_10483248 @ 0x10483248
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Passes the 4-byte value at offset 4 of the object pointed to by param_1 to
 *   write_two_struct_fields.
 * summary:
 *   The function dereferences param_1, reads the 32-bit field at offset +4, and passes it
 *   as the sole argument to write_two_struct_fields. It performs no other operations and
 *   returns void. The role of the field and the callee is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_field_10483248(int param_1, uint32_t param_x1)
{
  write_two_struct_fields(*(uint32_t *)(param_1 + 4), (uint32_t)param_x1);
  return;
}
