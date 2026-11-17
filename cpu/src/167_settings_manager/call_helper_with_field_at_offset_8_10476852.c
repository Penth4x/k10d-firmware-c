/* @k10d call_helper_with_field_at_offset_8_10476852 @ 0x10476852
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the 32-bit value at offset 8 of the object pointed to by param_1 to
 *   invoke_virtual_slot_two_and_update.
 * summary:
 *   The function dereferences param_1, reads the word at offset 8, and forwards it as the
 *   sole argument to invoke_virtual_slot_two_and_update. It performs no other operations
 *   and returns void. The role of the callee and the object layout are unknown, so no
 *   camera-specific naming is applied.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_field_at_offset_8_10476852(int param_1, uint32_t param_x1)

{
  invoke_virtual_slot_two_and_update(*(uint32_t *)(param_1 + 8), __frv_reg_unset(5));
  return;
}
