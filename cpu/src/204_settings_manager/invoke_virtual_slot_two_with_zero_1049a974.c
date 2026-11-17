/* @k10d invoke_virtual_slot_two_with_zero_1049a974 @ 0x1049a974
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_with_zero_1049a974(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0x10);
  (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 0x3c) + (int)*(short *)(iVar1 + 0x18),0);
  return;
}
