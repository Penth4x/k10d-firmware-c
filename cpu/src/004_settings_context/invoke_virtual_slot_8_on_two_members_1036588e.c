/* @k10d invoke_virtual_slot_8_on_two_members_1036588e @ 0x1036588e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 004_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_8_on_two_members_1036588e(cls_105576e0 *param_1)

{
  (((vtbl_entry*)(param_1->field_0x18))[8].fn)
            ((int)&param_1->field_0x18 + (int)((vtbl_entry*)(param_1->field_0x18))[8].adj,0);
  (((vtbl_entry*)(param_1->field_0x40))[8].fn)
            ((int)&param_1->field_0x40 + (int)((vtbl_entry*)(param_1->field_0x40))[8].adj,0);
  return;
}
