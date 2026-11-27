/* @k10d clear_byte_at_offset_0x27_103c89ee @ 0x103c89ee
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 060_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_byte_at_offset_0x27_103c89ee(cls_10595818 *param_1, uint32_t param_2)
{
  update_state_and_notify((uint32_t *)(uint32_t)param_1,(uint32_t)param_2);
  param_1->field_0x27 = 0;
  return;
}
