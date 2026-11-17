/* @k10d invoke_virtual_slot_5_and_copy_field_104ac0fe @ 0x104ac0fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 211_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_5_and_copy_field_104ac0fe(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x2c))((int)*(short *)(*param_1 + 0x28) + (int)param_1);
  param_1[10] = param_1[0xc];
  if (param_2 == 1) {
    param_1[10] = param_1[0xb];
  }
  return;
}
