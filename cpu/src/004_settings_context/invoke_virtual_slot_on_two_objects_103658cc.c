/* @k10d invoke_virtual_slot_on_two_objects_103658cc @ 0x103658cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 004_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_two_objects_103658cc(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x18) + 100))
            (param_1 + 0x18 + (int)*(short *)(*(int *)(param_1 + 0x18) + 0x60));
  (**(code **)(*(int *)(param_1 + 0x40) + 100))
            (param_1 + 0x40 + (int)*(short *)(*(int *)(param_1 + 0x40) + 0x60));
  return;
}
