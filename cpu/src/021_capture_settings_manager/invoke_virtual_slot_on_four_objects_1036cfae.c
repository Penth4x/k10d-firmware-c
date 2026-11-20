/* @k10d invoke_virtual_slot_on_four_objects_1036cfae @ 0x1036cfae
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 021_capture_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_four_objects_1036cfae(cls_10557d80 *param_1)

{
  (((vtbl_entry*)(param_1->field_0x74))[12].fn)
            ((int)&param_1->field_0x74 + (int)((vtbl_entry*)(param_1->field_0x74))[12].adj);
  (((vtbl_entry*)(param_1->field_0xe4))[12].fn)
            ((int)&param_1->field_0xe4 + (int)((vtbl_entry*)(param_1->field_0xe4))[12].adj);
  (((vtbl_entry*)(param_1->field_0x170))[12].fn)
            ((int)&param_1->field_0x170 + (int)((vtbl_entry*)(param_1->field_0x170))[12].adj);
  (((vtbl_entry*)(*(int *)&param_1->field_0x21c))[12].fn)
            (&param_1->field_0x21c + ((vtbl_entry*)(*(int *)&param_1->field_0x21c))[12].adj);
  return;
}
