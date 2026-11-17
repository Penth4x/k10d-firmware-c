/* @k10d apply_param_to_four_offsets_1039be8e @ 0x1039be8e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper four times with values from struct offsets 0x44, 0x48, 0x50, 0x54, then
 *   calls a second helper if param_2 is zero.
 * summary:
 *   The function reads four 32-bit fields from the object pointed to by param_1 at offsets
 *   0x44, 0x48, 0x50, and 0x54, passing each along with param_1 and param_2 to
 *   invoke_virtual_slot_14_1039cab4. If param_2 equals zero, it additionally calls
 *   set_flag_and_update_two_fields_1039bdf8 with param_1 and 0. The specific roles of the
 *   callees and the struct fields are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_param_to_four_offsets_1039be8e(void *param_1,int param_2)

{
  invoke_virtual_slot_14_1039cab4(param_1,*(int *)((int)param_1 + 0x44),param_2);
  invoke_virtual_slot_14_1039cab4(param_1,*(int *)((int)param_1 + 0x48),param_2);
  invoke_virtual_slot_14_1039cab4(param_1,*(int *)((int)param_1 + 0x50),param_2);
  invoke_virtual_slot_14_1039cab4(param_1,*(int *)((int)param_1 + 0x54),param_2);
  if (param_2 == 0) {
    set_flag_and_update_two_fields_1039bdf8(param_1,0);
  }
  return;
}
