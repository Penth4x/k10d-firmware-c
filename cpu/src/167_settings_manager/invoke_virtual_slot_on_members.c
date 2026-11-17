/* @k10d invoke_virtual_slot_on_members @ 0x10478502
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_members(void *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)((int)param_1 + 4);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x18),0);
  iVar1 = **(int **)((int)param_1 + 8);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)((int)param_1 + 8) + (int)*(short *)(iVar1 + 0x18),0);
  iVar1 = **(int **)((int)param_1 + 0xc);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)((int)param_1 + 0xc) + (int)*(short *)(iVar1 + 0x18),0);
  iVar1 = **(int **)((int)param_1 + 0x18);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)((int)param_1 + 0x18) + (int)*(short *)(iVar1 + 0x18),0)
  ;
  iVar1 = **(int **)((int)param_1 + 0x10);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)((int)param_1 + 0x10) + (int)*(short *)(iVar1 + 0x18),0)
  ;
  iVar1 = **(int **)((int)param_1 + 0x14);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)((int)param_1 + 0x14) + (int)*(short *)(iVar1 + 0x18),0)
  ;
  iVar1 = **(int **)((int)param_1 + 0x1c);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)((int)param_1 + 0x1c) + (int)*(short *)(iVar1 + 0x18),0)
  ;
  iVar1 = **(int **)((int)param_1 + 0x20);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)((int)param_1 + 0x20) + (int)*(short *)(iVar1 + 0x18),0)
  ;
  iVar1 = **(int **)((int)param_1 + 0x24);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)((int)param_1 + 0x24) + (int)*(short *)(iVar1 + 0x18),0)
  ;
  return;
}
