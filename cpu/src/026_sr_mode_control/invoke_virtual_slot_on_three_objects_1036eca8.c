/* @k10d invoke_virtual_slot_on_three_objects_1036eca8 @ 0x1036eca8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 026_sr_mode_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_three_objects_1036eca8(cls_10557f3c *param_1)

{
  (((vtbl_entry*)(param_1->field_0x30))[7].fn)
            ((int)&param_1->field_0x30 + (int)((vtbl_entry*)(param_1->field_0x30))[7].adj,0);
  (((vtbl_entry*)(*(int *)&param_1->field_0x58))[7].fn)
            (&param_1->field_0x58 + ((vtbl_entry*)(*(int *)&param_1->field_0x58))[7].adj,0);
  (((vtbl_entry*)(*(int *)&param_1->field_0x80))[7].fn)
            (&param_1->field_0x80 + ((vtbl_entry*)(*(int *)&param_1->field_0x80))[7].adj,0);
  return;
}
