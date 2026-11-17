/* @k10d reset_flag_and_call_virtual_slot @ 0x10521b6e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_flag_and_call_virtual_slot(int param_1)

{
  *(uint8_t *)(param_1 + 0x14) = 0;
  (**(code **)(*(int *)(param_1 + 0xc) + 0xb4))
            (*(short *)(*(int *)(param_1 + 0xc) + 0xb0) + param_1);
  return;
}
