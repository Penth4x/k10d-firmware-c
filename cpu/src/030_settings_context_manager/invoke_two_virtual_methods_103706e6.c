/* @k10d invoke_two_virtual_methods_103706e6 @ 0x103706e6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 030_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_virtual_methods_103706e6(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x18) + 100))
            (param_1 + 0x18 + (int)*(short *)(*(int *)(param_1 + 0x18) + 0x60));
  (**(code **)(*(int *)(param_1 + 0x40) + 100))
            (param_1 + 0x40 + (int)*(short *)(*(int *)(param_1 + 0x40) + 0x60));
  return;
}
