/* @k10d set_flag_and_invoke_virtual_slot_14 @ 0x103a1092
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_invoke_virtual_slot_14(cls_1056482c *param_1,int param_2)

{
  if ((param_1->field_0x41 == '\0') && (param_2 == 0x1a)) {
    param_1->field_0x41 = 1;
    (((vtbl_entry*)(param_1->field_0x0))[14].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,0x1120004,0);
  }
  return;
}
