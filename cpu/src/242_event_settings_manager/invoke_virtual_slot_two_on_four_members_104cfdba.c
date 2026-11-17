/* @k10d invoke_virtual_slot_two_on_four_members_104cfdba @ 0x104cfdba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_four_members_104cfdba(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 8);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar1 + 0x18),0);
  iVar1 = **(int **)(param_1 + 0xc);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar1 + 0x18),0);
  iVar1 = **(int **)(param_1 + 0x10);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar1 + 0x18),0);
  iVar1 = **(int **)(param_1 + 0x14);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar1 + 0x18),0);
  return;
}
