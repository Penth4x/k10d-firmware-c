/* @k10d invoke_virtual_slot_12_on_five_members @ 0x10363b28
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 002_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_12_on_five_members(cls_105575b0 *param_1)

{
  (((vtbl_entry*)(param_1->field_0x74))[12].fn)
            ((int)&param_1->field_0x74 + (int)((vtbl_entry*)(param_1->field_0x74))[12].adj);
  (((vtbl_entry*)(param_1->field_0xd8))[12].fn)
            ((int)&param_1->field_0xd8 + (int)((vtbl_entry*)(param_1->field_0xd8))[12].adj);
  (((vtbl_entry*)(param_1->field_0x144))[12].fn)
            ((int)&param_1->field_0x144 + (int)((vtbl_entry*)(param_1->field_0x144))[12].adj);
  (((vtbl_entry*)(param_1->field_0x1b4))[12].fn)
            ((int)&param_1->field_0x1b4 + (int)((vtbl_entry*)(param_1->field_0x1b4))[12].adj);
  (((vtbl_entry*)(param_1->field_0x1dc))[12].fn)
            ((int)&param_1->field_0x1dc + (int)((vtbl_entry*)(param_1->field_0x1dc))[12].adj);
  return;
}
