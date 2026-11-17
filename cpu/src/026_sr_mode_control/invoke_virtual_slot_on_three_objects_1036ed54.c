/* @k10d invoke_virtual_slot_on_three_objects_1036ed54 @ 0x1036ed54
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 026_sr_mode_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_three_objects_1036ed54(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x30) + 100))
            (param_1 + 0x30 + (int)*(short *)(*(int *)(param_1 + 0x30) + 0x60));
  (**(code **)(*(int *)(param_1 + 0x58) + 100))
            (param_1 + 0x58 + (int)*(short *)(*(int *)(param_1 + 0x58) + 0x60));
  (**(code **)(*(int *)(param_1 + 0x80) + 100))
            (param_1 + 0x80 + (int)*(short *)(*(int *)(param_1 + 0x80) + 0x60));
  return;
}
