/* @k10d invoke_virtual_slot_7_on_two_members @ 0x10365850
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 004_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_7_on_two_members(cls_105576e0 *param_1)

{
  (((vtbl_entry*)(param_1->field_0x18))[7].fn)
            ((int)&param_1->field_0x18 + (int)((vtbl_entry*)(param_1->field_0x18))[7].adj,0);
  (((vtbl_entry*)(param_1->field_0x40))[7].fn)
            ((int)&param_1->field_0x40 + (int)((vtbl_entry*)(param_1->field_0x40))[7].adj,0);
  return;
}
