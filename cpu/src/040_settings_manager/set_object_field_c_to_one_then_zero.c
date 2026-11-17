/* @k10d set_object_field_c_to_one_then_zero @ 0x10392250
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes 1 then 0 to the field at offset 0xc of the object passed in param_1 via two
 *   helper calls.
 * summary:
 *   The function takes a single pointer argument and calls
 *   set_field_and_call_helper_10397bd2 with (param_1+0xc, 1) followed by
 *   set_flag_and_update_two_fields_10397ca6 with (param_1+0xc, 0). Both callees are
 *   unnamed, so the specific subsystem or register role is not determinable from the
 *   pseudocode alone. The pattern suggests a brief toggle or pulse of a state bit/field at
 *   offset 0xc of the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_field_c_to_one_then_zero(int param_1)

{
  set_field_and_call_helper_10397bd2((void *)(param_1 + 0xc),1);
  set_flag_and_update_two_fields_10397ca6((void *)(param_1 + 0xc),0);
  return;
}
