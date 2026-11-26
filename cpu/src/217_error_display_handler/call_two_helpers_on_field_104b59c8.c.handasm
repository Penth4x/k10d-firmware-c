/* @k10d call_two_helpers_on_field_104b59c8 @ 0x104b59c8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions using the value stored at offset 4 of the input pointer.
 * summary:
 *   The function dereferences param_1 + 4 and passes that value as the sole argument to
 *   activate_sr_state_machine, then passes the same value to turn_on_rear_display. It
 *   performs no other operations or state modifications. The specific roles of the callees
 *   are unknown, so the function acts as a simple dispatcher for two sequential operations
 *   on a struct field.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_field_104b59c8(int param_1)

{
  activate_sr_state_machine((void *)(*(uint32_t *)(param_1 + 4)), __frv_reg_unset(5), __frv_reg_unset(6));
  turn_on_rear_display((void *)(*(uint32_t *)(param_1 + 4)));
  return;
}
