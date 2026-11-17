/* @k10d invoke_virtual_slot_on_five_members @ 0x10363628
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 002_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_five_members(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x74) + 0x4c))
            (param_1 + 0x74 + (int)*(short *)(*(int *)(param_1 + 0x74) + 0x48));
  (**(code **)(*(int *)(param_1 + 0xd8) + 0x4c))
            (param_1 + 0xd8 + (int)*(short *)(*(int *)(param_1 + 0xd8) + 0x48));
  (**(code **)(*(int *)(param_1 + 0x144) + 0x4c))
            (param_1 + 0x144 + (int)*(short *)(*(int *)(param_1 + 0x144) + 0x48));
  (**(code **)(*(int *)(param_1 + 0x1b4) + 0x4c))
            (param_1 + 0x1b4 + (int)*(short *)(*(int *)(param_1 + 0x1b4) + 0x48));
  (**(code **)(*(int *)(param_1 + 0x1dc) + 0x4c))
            (param_1 + 0x1dc + (int)*(short *)(*(int *)(param_1 + 0x1dc) + 0x48));
  return;
}
