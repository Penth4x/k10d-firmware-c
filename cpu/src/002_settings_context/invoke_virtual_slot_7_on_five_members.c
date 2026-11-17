/* @k10d invoke_virtual_slot_7_on_five_members @ 0x10363a04
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 002_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_7_on_five_members(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x74) + 0x3c))
            (param_1 + 0x74 + (int)*(short *)(*(int *)(param_1 + 0x74) + 0x38),0);
  (**(code **)(*(int *)(param_1 + 0xd8) + 0x3c))
            (param_1 + 0xd8 + (int)*(short *)(*(int *)(param_1 + 0xd8) + 0x38),0);
  (**(code **)(*(int *)(param_1 + 0x144) + 0x3c))
            (param_1 + 0x144 + (int)*(short *)(*(int *)(param_1 + 0x144) + 0x38),0);
  (**(code **)(*(int *)(param_1 + 0x1b4) + 0x3c))
            (param_1 + 0x1b4 + (int)*(short *)(*(int *)(param_1 + 0x1b4) + 0x38),0);
  (**(code **)(*(int *)(param_1 + 0x1dc) + 0x3c))
            (param_1 + 0x1dc + (int)*(short *)(*(int *)(param_1 + 0x1dc) + 0x38),0);
  return;
}
