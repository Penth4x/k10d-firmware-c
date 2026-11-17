/* @k10d invoke_virtual_slot_12_on_five_members @ 0x10363b28
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 002_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_12_on_five_members(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x74) + 100))
            (param_1 + 0x74 + (int)*(short *)(*(int *)(param_1 + 0x74) + 0x60));
  (**(code **)(*(int *)(param_1 + 0xd8) + 100))
            (param_1 + 0xd8 + (int)*(short *)(*(int *)(param_1 + 0xd8) + 0x60));
  (**(code **)(*(int *)(param_1 + 0x144) + 100))
            (param_1 + 0x144 + (int)*(short *)(*(int *)(param_1 + 0x144) + 0x60));
  (**(code **)(*(int *)(param_1 + 0x1b4) + 100))
            (param_1 + 0x1b4 + (int)*(short *)(*(int *)(param_1 + 0x1b4) + 0x60));
  (**(code **)(*(int *)(param_1 + 0x1dc) + 100))
            (param_1 + 0x1dc + (int)*(short *)(*(int *)(param_1 + 0x1dc) + 0x60));
  return;
}
