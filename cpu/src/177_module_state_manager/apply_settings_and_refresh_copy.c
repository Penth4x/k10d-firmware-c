/* @k10d apply_settings_and_refresh_copy @ 0x104850ee
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_settings_and_refresh_copy(void *param_1)

{
  call_two_helpers_with_param_10429b46(*(uint32_t *)((int)param_1 + 8), __frv_reg_unset(5));
  settings_refresh_working_copy(param_1);
  return;
}
