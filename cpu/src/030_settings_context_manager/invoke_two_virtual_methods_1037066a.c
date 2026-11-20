/* @k10d invoke_two_virtual_methods_1037066a @ 0x1037066a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 030_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_virtual_methods_1037066a(cls_10557fec *param_1)

{
  (((vtbl_entry*)(param_1->field_0x18))[7].fn)
            ((int)&param_1->field_0x18 + (int)((vtbl_entry*)(param_1->field_0x18))[7].adj,0);
  (((vtbl_entry*)(param_1->field_0x40))[7].fn)
            ((int)&param_1->field_0x40 + (int)((vtbl_entry*)(param_1->field_0x40))[7].adj,0);
  return;
}
