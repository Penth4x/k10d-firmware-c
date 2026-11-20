/* @k10d invoke_virtual_slot_on_five_members @ 0x10363628
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 002_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_five_members(cls_105575b0 *param_1)

{
  (((vtbl_entry*)(param_1->field_0x74))[9].fn)
            ((int)&param_1->field_0x74 + (int)((vtbl_entry*)(param_1->field_0x74))[9].adj);
  (((vtbl_entry*)(param_1->field_0xd8))[9].fn)
            ((int)&param_1->field_0xd8 + (int)((vtbl_entry*)(param_1->field_0xd8))[9].adj);
  (((vtbl_entry*)(param_1->field_0x144))[9].fn)
            ((int)&param_1->field_0x144 + (int)((vtbl_entry*)(param_1->field_0x144))[9].adj);
  (((vtbl_entry*)(param_1->field_0x1b4))[9].fn)
            ((int)&param_1->field_0x1b4 + (int)((vtbl_entry*)(param_1->field_0x1b4))[9].adj);
  (((vtbl_entry*)(param_1->field_0x1dc))[9].fn)
            ((int)&param_1->field_0x1dc + (int)((vtbl_entry*)(param_1->field_0x1dc))[9].adj);
  return;
}
