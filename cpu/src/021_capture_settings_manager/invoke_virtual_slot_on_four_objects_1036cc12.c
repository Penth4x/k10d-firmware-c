/* @k10d invoke_virtual_slot_on_four_objects_1036cc12 @ 0x1036cc12
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 021_capture_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_four_objects_1036cc12(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x74) + 0x4c))
            (param_1 + 0x74 + (int)*(short *)(*(int *)(param_1 + 0x74) + 0x48));
  (**(code **)(*(int *)(param_1 + 0xe4) + 0x4c))
            (param_1 + 0xe4 + (int)*(short *)(*(int *)(param_1 + 0xe4) + 0x48));
  (**(code **)(*(int *)(param_1 + 0x170) + 0x4c))
            (param_1 + 0x170 + (int)*(short *)(*(int *)(param_1 + 0x170) + 0x48));
  (**(code **)(*(int *)(param_1 + 0x21c) + 0x4c))
            (param_1 + 0x21c + (int)*(short *)(*(int *)(param_1 + 0x21c) + 0x48));
  return;
}
