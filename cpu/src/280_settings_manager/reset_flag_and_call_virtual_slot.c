/* @k10d reset_flag_and_call_virtual_slot @ 0x10521b6e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_flag_and_call_virtual_slot(cls_105d7b7c *param_1)

{
  *(uint8_t *)&param_1->field_0x14 = 0;
  (((vtbl_entry*)(param_1->field_0xc))[22].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[22].adj);
  return;
}
