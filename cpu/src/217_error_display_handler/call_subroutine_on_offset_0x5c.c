/* @k10d call_subroutine_on_offset_0x5c @ 0x104b4ed0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Passes the value at param_1+0x5c to clear_field_and_call_helper and returns 1.
 * summary:
 *   The function dereferences the 4-byte value at offset 0x5c of the object pointed to by
 *   param_1 and passes it as the sole argument to clear_field_and_call_helper. It then
 *   returns the constant 1. The specific role of clear_field_and_call_helper and the object
 *   structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_subroutine_on_offset_0x5c(int param_1)

{
  clear_field_and_call_helper(*(uint32_t *)(param_1 + 0x5c));
  return 1;
}
