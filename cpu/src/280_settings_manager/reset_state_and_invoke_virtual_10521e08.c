/* @k10d reset_state_and_invoke_virtual_10521e08 @ 0x10521e08
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_state_and_invoke_virtual_10521e08(uint32_t *param_1)

{
  if (param_1[1] == 4) {
    param_1[1] = 1;
    (**(code **)(param_1[3] + 0x7c))((int)*(short *)(param_1[3] + 0x78) + (int)param_1);
    *param_1 = 0;
  }
  return;
}
