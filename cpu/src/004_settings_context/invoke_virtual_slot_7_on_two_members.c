/* @k10d invoke_virtual_slot_7_on_two_members @ 0x10365850
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 004_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_7_on_two_members(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x18) + 0x3c))
            (param_1 + 0x18 + (int)*(short *)(*(int *)(param_1 + 0x18) + 0x38),0);
  (**(code **)(*(int *)(param_1 + 0x40) + 0x3c))
            (param_1 + 0x40 + (int)*(short *)(*(int *)(param_1 + 0x40) + 0x38),0);
  return;
}
