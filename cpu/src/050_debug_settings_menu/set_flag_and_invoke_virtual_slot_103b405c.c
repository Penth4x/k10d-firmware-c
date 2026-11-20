/* @k10d set_flag_and_invoke_virtual_slot_103b405c @ 0x103b405c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_invoke_virtual_slot_103b405c(cls_10566478 *param_1,int param_2)

{
  if ((param_1->field_0x66 == '\0') && (param_2 == 0x1a)) {
    param_1->field_0x66 = 1;
    (((vtbl_entry*)(param_1->field_0x0))[14].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[14].adj,0x1120004,0);
  }
  return;
}
