/* @k10d invoke_two_virtual_methods_1037066a @ 0x1037066a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 030_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_virtual_methods_1037066a(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x18) + 0x3c))
            (param_1 + 0x18 + (int)*(short *)(*(int *)(param_1 + 0x18) + 0x38),0);
  (**(code **)(*(int *)(param_1 + 0x40) + 0x3c))
            (param_1 + 0x40 + (int)*(short *)(*(int *)(param_1 + 0x40) + 0x38),0);
  return;
}
