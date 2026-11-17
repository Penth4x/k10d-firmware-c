/* @k10d init_object_and_call_five_helpers @ 0x10397492
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_object_and_call_five_helpers(int param_1)

{
  *(int *)(param_1 + 4) = param_1 + 8;
  init_object_with_four_calls_10397562((void *)__frv_reg_unset(4));
  get_or_init_global_object_103964f8();
  set_subfield_flag_pair(__frv_reg_unset(4));
  get_or_init_singleton_1039201c();
  set_object_field_c_to_one_then_zero(__frv_reg_unset(4));
  return param_1;
}
