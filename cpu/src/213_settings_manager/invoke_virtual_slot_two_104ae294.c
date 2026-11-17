/* @k10d invoke_virtual_slot_two_104ae294 @ 0x104ae294
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_104ae294(void *param_1)

{
  int iVar1;
  
  *(uint8_t *)((int)param_1 + 0x14) = 1;
  iVar1 = **(int **)((int)param_1 + 0x1c);
  (**(code **)(iVar1 + 0x14))
            ((int)*(int **)((int)param_1 + 0x1c) + (int)*(short *)(iVar1 + 0x10),0,0,0);
  return;
}
