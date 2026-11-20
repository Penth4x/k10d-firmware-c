/* @k10d invoke_virtual_slot_14_if_flags_clear @ 0x103a4ab8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_14_if_flags_clear(cls_10564c80 *param_1,int param_2)

{
  if (((param_1->field_0x65 == '\0') && (param_1->field_0x64 == '\0')) && (param_2 == 0x1a)) {
    (((vtbl_entry*)(param_1->field_0x0))[14].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,0x1120004,0);
  }
  return;
}
