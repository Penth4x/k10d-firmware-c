/* @k10d invoke_virtual_slot_8_on_two_members_1036588e @ 0x1036588e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 004_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_8_on_two_members_1036588e(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x18) + 0x44))
            (param_1 + 0x18 + (int)*(short *)(*(int *)(param_1 + 0x18) + 0x40),0);
  (**(code **)(*(int *)(param_1 + 0x40) + 0x44))
            (param_1 + 0x40 + (int)*(short *)(*(int *)(param_1 + 0x40) + 0x40),0);
  return;
}
