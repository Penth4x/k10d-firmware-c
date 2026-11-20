/* @k10d invoke_virtual_slot_10_on_state @ 0x10521cca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_10_on_state(cls_105d86e0 *param_1,int param_2)

{
  int iVar1;
  
  if ((((param_1->field_0x4 == 1) || (param_1->field_0x4 == 2)) &&
      ((param_1->field_0x0 == param_2 || (param_1->field_0x0 == 0)))) &&
     (iVar1 = (((vtbl_entry*)(param_1->field_0xc))[10].fn)
                        ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[10].adj,
                         param_2), iVar1 != 0)) {
    param_1->field_0x0 = param_2;
    param_1->field_0x4 = 3;
  }
  return;
}
