/* @k10d invoke_virtual_slot_on_three_objects_1036ed54 @ 0x1036ed54
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 026_sr_mode_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_three_objects_1036ed54(cls_10557f3c *param_1)

{
  (((vtbl_entry*)(param_1->field_0x30))[12].fn)
            ((int)&param_1->field_0x30 + (int)((vtbl_entry*)(param_1->field_0x30))[12].adj);
  (((vtbl_entry*)(*(int *)&param_1->field_0x58))[12].fn)
            (&param_1->field_0x58 + ((vtbl_entry*)(*(int *)&param_1->field_0x58))[12].adj);
  (((vtbl_entry*)(*(int *)&param_1->field_0x80))[12].fn)
            (&param_1->field_0x80 + ((vtbl_entry*)(*(int *)&param_1->field_0x80))[12].adj);
  return;
}
