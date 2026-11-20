/* @k10d set_flag_if_offset_2c_zero @ 0x10366642
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 006_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_if_offset_2c_zero(cls_105577f8 *param_1)

{
  if (param_1->field_0x1c == 0) {
    invoke_callback_at_8000439c();
    param_1->field_0x14 = 1;
  }
  return;
}
