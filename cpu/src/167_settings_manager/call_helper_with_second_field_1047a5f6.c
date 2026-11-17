/* @k10d call_helper_with_second_field_1047a5f6 @ 0x1047a5f6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the integer at offset 4 of the object pointed to by param_1 to
 *   clear_struct_fields_and_subblock.
 * summary:
 *   The function dereferences param_1, reads the 32-bit value at offset +4, and forwards it
 *   as the sole argument to clear_struct_fields_and_subblock. No other operations, side
 *   effects, or state modifications are visible in the pseudocode. The caller is
 *   dispatch_state_transition_1047bfb0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_second_field_1047a5f6(int param_1)

{
  clear_struct_fields_and_subblock(*(int *)(param_1 + 4));
  return;
}
