/* @k10d invoke_virtual_slot_two_on_four_members_1049adb4 @ 0x1049adb4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_four_members_1049adb4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 8) + (int)*(short *)(iVar1 + 0x18),0);
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x10);
  (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 0xc) + (int)*(short *)(iVar1 + 0x18),0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x10);
  (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 0x10) + (int)*(short *)(iVar1 + 0x18),0);
  iVar1 = **(int **)(param_1 + 4);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x18),0);
  return;
}
