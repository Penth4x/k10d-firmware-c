/* @k10d update_two_object_fields @ 0x1039855e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper twice with two fields from an object, then conditionally calls a second
 *   helper if the second argument is zero.
 * summary:
 *   The function takes an object pointer and an integer parameter. It reads two consecutive
 *   32-bit fields at offsets 0x48 and 0x4c from the object and passes each, along with the
 *   original object and the integer parameter, to invoke_virtual_slot_14_1039cab4. If the
 *   integer parameter is zero, it also calls set_flag_and_update_two_fields_103984ce with
 *   the object and zero. The specific roles of the fields and callees are not determinable
 *   from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_two_object_fields(void *param_1,int param_2)

{
  invoke_virtual_slot_14_1039cab4(param_1,*(int *)((int)param_1 + 0x48),param_2);
  invoke_virtual_slot_14_1039cab4(param_1,*(int *)((int)param_1 + 0x4c),param_2);
  if (param_2 == 0) {
    set_flag_and_update_two_fields_103984ce(param_1,0);
  }
  return;
}
