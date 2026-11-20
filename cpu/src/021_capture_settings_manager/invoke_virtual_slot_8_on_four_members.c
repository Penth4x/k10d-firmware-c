/* @k10d invoke_virtual_slot_8_on_four_members @ 0x1036cf38
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 021_capture_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_8_on_four_members(cls_10557d80 *param_1)

{
  (((vtbl_entry*)(param_1->field_0x74))[8].fn)
            ((int)&param_1->field_0x74 + (int)((vtbl_entry*)(param_1->field_0x74))[8].adj,0);
  (((vtbl_entry*)(param_1->field_0xe4))[8].fn)
            ((int)&param_1->field_0xe4 + (int)((vtbl_entry*)(param_1->field_0xe4))[8].adj,0);
  (((vtbl_entry*)(param_1->field_0x170))[8].fn)
            ((int)&param_1->field_0x170 + (int)((vtbl_entry*)(param_1->field_0x170))[8].adj,0);
  (((vtbl_entry*)(*(int *)&param_1->field_0x21c))[8].fn)
            (&param_1->field_0x21c + ((vtbl_entry*)(*(int *)&param_1->field_0x21c))[8].adj,0);
  return;
}
