/* @k10d invoke_virtual_slot_7_104acd80 @ 0x104acd80
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_7_104acd80(void *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)((int)param_1 + 0x10);
  (**(code **)(iVar1 + 0x3c))((int)*(int **)((int)param_1 + 0x10) + (int)*(short *)(iVar1 + 0x38));
  return;
}
