/* @k10d invoke_virtual_slot_3_on_two_members_1047a836 @ 0x1047a836
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_3_on_two_members_1047a836(void *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)((int)param_1 + 8);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)((int)param_1 + 8) + (int)*(short *)(iVar1 + 0x18),0);
  iVar1 = **(int **)((int)param_1 + 4);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x18),0);
  return;
}
