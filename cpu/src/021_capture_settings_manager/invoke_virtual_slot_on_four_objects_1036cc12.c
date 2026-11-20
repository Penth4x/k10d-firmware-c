/* @k10d invoke_virtual_slot_on_four_objects_1036cc12 @ 0x1036cc12
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 021_capture_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_four_objects_1036cc12(cls_10557d80 *param_1)

{
  (((vtbl_entry*)(param_1->field_0x74))[9].fn)
            ((int)&param_1->field_0x74 + (int)((vtbl_entry*)(param_1->field_0x74))[9].adj);
  (((vtbl_entry*)(param_1->field_0xe4))[9].fn)
            ((int)&param_1->field_0xe4 + (int)((vtbl_entry*)(param_1->field_0xe4))[9].adj);
  (((vtbl_entry*)(param_1->field_0x170))[9].fn)
            ((int)&param_1->field_0x170 + (int)((vtbl_entry*)(param_1->field_0x170))[9].adj);
  (((vtbl_entry*)(*(int *)&param_1->field_0x21c))[9].fn)
            (&param_1->field_0x21c + ((vtbl_entry*)(*(int *)&param_1->field_0x21c))[9].adj);
  return;
}
