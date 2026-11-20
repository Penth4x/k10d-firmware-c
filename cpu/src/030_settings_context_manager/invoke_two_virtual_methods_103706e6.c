/* @k10d invoke_two_virtual_methods_103706e6 @ 0x103706e6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 030_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_virtual_methods_103706e6(cls_10557fec *param_1)

{
  (((vtbl_entry*)(param_1->field_0x18))[12].fn)
            ((int)&param_1->field_0x18 + (int)((vtbl_entry*)(param_1->field_0x18))[12].adj);
  (((vtbl_entry*)(param_1->field_0x40))[12].fn)
            ((int)&param_1->field_0x40 + (int)((vtbl_entry*)(param_1->field_0x40))[12].adj);
  return;
}
