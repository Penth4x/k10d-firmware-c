/* @k10d invoke_virtual_slot_6_104836e4 @ 0x104836e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_6_104836e4(void *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)((int)param_1 + 0xc);
  (**(code **)(iVar1 + 0x34))((int)*(int **)((int)param_1 + 0xc) + (int)*(short *)(iVar1 + 0x30));
  return;
}
