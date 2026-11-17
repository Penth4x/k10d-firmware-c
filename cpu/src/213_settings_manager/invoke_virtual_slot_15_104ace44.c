/* @k10d invoke_virtual_slot_15_104ace44 @ 0x104ace44
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_15_104ace44(void *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)((int)param_1 + 0x10);
  (**(code **)(iVar1 + 0x7c))((int)*(int **)((int)param_1 + 0x10) + (int)*(short *)(iVar1 + 0x78));
  return;
}
