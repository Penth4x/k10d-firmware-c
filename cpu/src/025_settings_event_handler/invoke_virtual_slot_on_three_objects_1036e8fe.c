/* @k10d invoke_virtual_slot_on_three_objects_1036e8fe @ 0x1036e8fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 025_settings_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_three_objects_1036e8fe(cls_10557f3c *param_1)

{
  (((vtbl_entry*)(param_1->field_0x30))[9].fn)
            ((int)&param_1->field_0x30 + (int)((vtbl_entry*)(param_1->field_0x30))[9].adj);
  (((vtbl_entry*)(*(int *)&param_1->field_0x58))[9].fn)
            (&param_1->field_0x58 + ((vtbl_entry*)(*(int *)&param_1->field_0x58))[9].adj);
  (((vtbl_entry*)(*(int *)&param_1->field_0x80))[9].fn)
            (&param_1->field_0x80 + ((vtbl_entry*)(*(int *)&param_1->field_0x80))[9].adj);
  return;
}
