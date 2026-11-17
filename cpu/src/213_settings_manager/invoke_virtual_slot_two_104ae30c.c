/* @k10d invoke_virtual_slot_two_104ae30c @ 0x104ae30c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_104ae30c(void *param_1)

{
  int iVar1;
  
  *(uint8_t *)((int)param_1 + 0x14) = 0;
  iVar1 = **(int **)((int)param_1 + 0x1c);
  (**(code **)(iVar1 + 0x14))
            ((int)*(int **)((int)param_1 + 0x1c) + (int)*(short *)(iVar1 + 0x10),3,0x25,0);
  return;
}
