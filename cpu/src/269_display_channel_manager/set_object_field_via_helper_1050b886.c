/* @k10d set_object_field_via_helper_1050b886 @ 0x1050b886
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Writes param_2 into the field at offset 0x28 of the object pointed to by param_1 via a
 *   helper call.
 * summary:
 *   The function dereferences param_1 + 0x28 and passes that value, along with param_2 and
 *   the constant 1, to set_mode_state_and_notify. It acts as a thin wrapper around that
 *   helper, likely setting or updating a specific member of a UI or state object. No other
 *   side effects or MMIO operations are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_via_helper_1050b886(int param_1,uint32_t param_2)

{
  set_mode_state_and_notify(*(uint32_t *)(param_1 + 0x28),param_2,1);
  return;
}
