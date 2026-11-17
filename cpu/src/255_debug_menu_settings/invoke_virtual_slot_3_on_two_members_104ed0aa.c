/* @k10d invoke_virtual_slot_3_on_two_members_104ed0aa @ 0x104ed0aa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_3_on_two_members_104ed0aa(void *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)((int)param_1 + 4);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x18),0);
  iVar1 = **(int **)((int)param_1 + 8);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)((int)param_1 + 8) + (int)*(short *)(iVar1 + 0x18),0);
  return 1;
}
