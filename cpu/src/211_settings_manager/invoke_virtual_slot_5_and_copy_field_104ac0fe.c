/* @k10d invoke_virtual_slot_5_and_copy_field_104ac0fe @ 0x104ac0fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 211_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_5_and_copy_field_104ac0fe(cls_105b7288 *param_1,int param_2)

{
  (((vtbl_entry*)(param_1->field_0x0))[5].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[5].adj);
  param_1->field_0x28 = param_1->field_0x30;
  if (param_2 == 1) {
    param_1->field_0x28 = param_1->field_0x2c;
  }
  return;
}
