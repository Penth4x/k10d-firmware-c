/* @k10d write_field_at_offset_0x5c @ 0x10435210
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 124_ui_state_router (unit names are model-proposed)
 * purpose:
 *   Passes the pointer at param_1+0x5c to call_helper_with_flag_based_on_param along with
 *   param_2 and a constant 2.
 * summary:
 *   The function dereferences the integer pointer located at offset 0x5c within the
 *   structure pointed to by param_1. It passes this dereferenced value, param_2, and the
 *   constant 2 as arguments to the callee call_helper_with_flag_based_on_param. No other
 *   operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_field_at_offset_0x5c(int param_1,int param_2)

{
  call_helper_with_flag_based_on_param(*(int **)(param_1 + 0x5c),param_2,2);
  return;
}
