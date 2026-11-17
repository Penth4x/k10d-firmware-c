/* @k10d call_virtual_slot_17 @ 0x105219d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_17(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x8c))
            (*(short *)(*(int *)(param_1 + 0xc) + 0x88) + param_1);
  return;
}
