/* @k10d apply_param_to_four_offsets_10397d3c @ 0x10397d3c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper four times with values from object offsets 0x48-0x58, then calls a
 *   second helper if param_2 is zero.
 * summary:
 *   The function reads four 32-bit values from param_1 at offsets 0x48, 0x4c, 0x54, and
 *   0x58, passing each along with param_1 and param_2 to invoke_virtual_slot_14_1039cab4.
 *   If param_2 equals 0, it additionally calls set_flag_and_update_two_fields_10397ca6 with
 *   param_1 and 0. The specific roles of the callees and the object structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_param_to_four_offsets_10397d3c(void *param_1,int param_2)

{
  invoke_virtual_slot_14_1039cab4(param_1,*(int *)((int)param_1 + 0x48),param_2);
  invoke_virtual_slot_14_1039cab4(param_1,*(int *)((int)param_1 + 0x4c),param_2);
  invoke_virtual_slot_14_1039cab4(param_1,*(int *)((int)param_1 + 0x54),param_2);
  invoke_virtual_slot_14_1039cab4(param_1,*(int *)((int)param_1 + 0x58),param_2);
  if (param_2 == 0) {
    set_flag_and_update_two_fields_10397ca6(param_1,0);
  }
  return;
}
