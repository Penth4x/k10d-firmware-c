/* @k10d invoke_virtual_slot_16 @ 0x105219b4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_16(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x84))
            (*(short *)(*(int *)(param_1 + 0xc) + 0x80) + param_1);
  return;
}
