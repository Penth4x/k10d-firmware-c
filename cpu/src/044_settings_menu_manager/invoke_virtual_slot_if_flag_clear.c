/* @k10d invoke_virtual_slot_if_flag_clear @ 0x103a2f32
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_if_flag_clear(cls_105649cc *param_1)

{
  if (param_1->field_0x118 == '\0') {
    (((vtbl_entry*)(param_1->field_0x0))[14].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,0x1120004,0);
  }
  return;
}
