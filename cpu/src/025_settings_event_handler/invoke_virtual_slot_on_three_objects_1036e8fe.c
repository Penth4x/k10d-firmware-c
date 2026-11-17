/* @k10d invoke_virtual_slot_on_three_objects_1036e8fe @ 0x1036e8fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 025_settings_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_three_objects_1036e8fe(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x30) + 0x4c))
            (param_1 + 0x30 + (int)*(short *)(*(int *)(param_1 + 0x30) + 0x48));
  (**(code **)(*(int *)(param_1 + 0x58) + 0x4c))
            (param_1 + 0x58 + (int)*(short *)(*(int *)(param_1 + 0x58) + 0x48));
  (**(code **)(*(int *)(param_1 + 0x80) + 0x4c))
            (param_1 + 0x80 + (int)*(short *)(*(int *)(param_1 + 0x80) + 0x48));
  return;
}
