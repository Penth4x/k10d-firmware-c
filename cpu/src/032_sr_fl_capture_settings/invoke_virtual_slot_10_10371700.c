/* @k10d invoke_virtual_slot_10_10371700 @ 0x10371700
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 032_sr_fl_capture_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_10_10371700(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x20) + 0x44))
            (param_1 + 0x20 + (int)*(short *)(*(int *)(param_1 + 0x20) + 0x40),0);
  return;
}
