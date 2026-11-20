/* @k10d invoke_virtual_slot_8_on_two_members_103706a8 @ 0x103706a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 030_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_8_on_two_members_103706a8(cls_10557fec *param_1)

{
  (((vtbl_entry*)(param_1->field_0x18))[8].fn)
            ((int)&param_1->field_0x18 + (int)((vtbl_entry*)(param_1->field_0x18))[8].adj,0);
  (((vtbl_entry*)(param_1->field_0x40))[8].fn)
            ((int)&param_1->field_0x40 + (int)((vtbl_entry*)(param_1->field_0x40))[8].adj,0);
  return;
}
