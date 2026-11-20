/* @k10d reset_state_and_invoke_virtual_10521e08 @ 0x10521e08
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_state_and_invoke_virtual_10521e08(cls_105d86e0 *param_1)

{
  if (param_1->field_0x4 == 4) {
    param_1->field_0x4 = 1;
    (((vtbl_entry*)(param_1->field_0xc))[15].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[15].adj);
    param_1->field_0x0 = 0;
  }
  return;
}
