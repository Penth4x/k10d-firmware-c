/* @k10d invoke_virtual_slot_on_two_objects_103658cc @ 0x103658cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 004_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_two_objects_103658cc(cls_105576e0 *param_1)

{
  (((vtbl_entry*)(param_1->field_0x18))[12].fn)
            ((int)&param_1->field_0x18 + (int)((vtbl_entry*)(param_1->field_0x18))[12].adj);
  (((vtbl_entry*)(param_1->field_0x40))[12].fn)
            ((int)&param_1->field_0x40 + (int)((vtbl_entry*)(param_1->field_0x40))[12].adj);
  return;
}
