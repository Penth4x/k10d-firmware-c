/* @k10d clear_flag_and_call_helper_103bf964 @ 0x103bf964
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_helper_103bf964(cls_10594f8c *param_1, uint32_t param_2)
{
  param_1->field_0x36 = 0;
  update_state_and_notify((uint32_t *)(uint32_t)param_1,(uint32_t)param_2);
  return;
}
