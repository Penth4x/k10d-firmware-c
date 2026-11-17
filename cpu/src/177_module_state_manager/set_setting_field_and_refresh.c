/* @k10d set_setting_field_and_refresh @ 0x10484764
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_setting_field_and_refresh(void *param_1,uint32_t param_2)

{
  *(uint32_t *)((int)param_1 + 4) = param_2;
  settings_refresh_working_copy(param_1);
  return 1;
}
