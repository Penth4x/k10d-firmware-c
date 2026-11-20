/* @k10d invoke_virtual_slot_9_on_two_members_103704f4 @ 0x103704f4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 029_menu_setting_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_9_on_two_members_103704f4(cls_10557fec *param_1)

{
  (((vtbl_entry*)(param_1->field_0x18))[9].fn)
            ((int)&param_1->field_0x18 + (int)((vtbl_entry*)(param_1->field_0x18))[9].adj);
  (((vtbl_entry*)(param_1->field_0x40))[9].fn)
            ((int)&param_1->field_0x40 + (int)((vtbl_entry*)(param_1->field_0x40))[9].adj);
  return;
}
