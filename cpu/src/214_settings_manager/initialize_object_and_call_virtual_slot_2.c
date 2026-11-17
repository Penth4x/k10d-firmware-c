/* @k10d initialize_object_and_call_virtual_slot_2 @ 0x104b058e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_and_call_virtual_slot_2(uint32_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  (**(code **)(param_1[2] + 0x14))((int)*(short *)(param_1[2] + 0x10) + (int)param_1);
  return;
}
