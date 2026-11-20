/* @k10d invoke_virtual_slot_on_three_objects_1036ecfe @ 0x1036ecfe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 026_sr_mode_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_three_objects_1036ecfe(cls_10557f3c *param_1)

{
  (((vtbl_entry*)(param_1->field_0x30))[8].fn)
            ((int)&param_1->field_0x30 + (int)((vtbl_entry*)(param_1->field_0x30))[8].adj,0);
  (((vtbl_entry*)(*(int *)&param_1->field_0x58))[8].fn)
            (&param_1->field_0x58 + ((vtbl_entry*)(*(int *)&param_1->field_0x58))[8].adj,0);
  (((vtbl_entry*)(*(int *)&param_1->field_0x80))[8].fn)
            (&param_1->field_0x80 + ((vtbl_entry*)(*(int *)&param_1->field_0x80))[8].adj,0);
  return;
}
