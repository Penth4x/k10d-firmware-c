/* @k10d invoke_virtual_slot_on_three_objects_1036ecfe @ 0x1036ecfe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 026_sr_mode_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_three_objects_1036ecfe(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x30) + 0x44))
            (param_1 + 0x30 + (int)*(short *)(*(int *)(param_1 + 0x30) + 0x40),0);
  (**(code **)(*(int *)(param_1 + 0x58) + 0x44))
            (param_1 + 0x58 + (int)*(short *)(*(int *)(param_1 + 0x58) + 0x40),0);
  (**(code **)(*(int *)(param_1 + 0x80) + 0x44))
            (param_1 + 0x80 + (int)*(short *)(*(int *)(param_1 + 0x80) + 0x40),0);
  return;
}
