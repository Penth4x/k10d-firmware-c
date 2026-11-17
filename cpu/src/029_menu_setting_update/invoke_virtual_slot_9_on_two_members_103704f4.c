/* @k10d invoke_virtual_slot_9_on_two_members_103704f4 @ 0x103704f4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 029_menu_setting_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_9_on_two_members_103704f4(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x18) + 0x4c))
            (param_1 + 0x18 + (int)*(short *)(*(int *)(param_1 + 0x18) + 0x48));
  (**(code **)(*(int *)(param_1 + 0x40) + 0x4c))
            (param_1 + 0x40 + (int)*(short *)(*(int *)(param_1 + 0x40) + 0x48));
  return;
}
