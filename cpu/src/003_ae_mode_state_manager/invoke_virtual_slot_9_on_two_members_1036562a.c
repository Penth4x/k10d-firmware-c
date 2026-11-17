/* @k10d invoke_virtual_slot_9_on_two_members_1036562a @ 0x1036562a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_9_on_two_members_1036562a(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x18) + 0x4c))
            (param_1 + 0x18 + (int)*(short *)(*(int *)(param_1 + 0x18) + 0x48));
  (**(code **)(*(int *)(param_1 + 0x40) + 0x4c))
            (param_1 + 0x40 + (int)*(short *)(*(int *)(param_1 + 0x40) + 0x48));
  return;
}
