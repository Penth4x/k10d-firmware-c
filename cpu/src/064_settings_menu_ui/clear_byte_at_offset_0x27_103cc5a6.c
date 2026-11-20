/* @k10d clear_byte_at_offset_0x27_103cc5a6 @ 0x103cc5a6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 064_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_byte_at_offset_0x27_103cc5a6(cls_105959b0 *param_1)

{
  update_state_and_notify((uint32_t *)__frv_reg_unset(4),__frv_reg_unset(5));
  param_1->field_0x27 = 0;
  return;
}
