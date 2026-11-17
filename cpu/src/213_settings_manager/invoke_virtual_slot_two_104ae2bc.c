/* @k10d invoke_virtual_slot_two_104ae2bc @ 0x104ae2bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_104ae2bc(int param_1)

{
  int iVar1;
  
  *(uint8_t *)(param_1 + 0x14) = 0;
  iVar1 = **(int **)(param_1 + 0x1c);
  (**(code **)(iVar1 + 0x14))
            ((int)*(int **)(param_1 + 0x1c) + (int)*(short *)(iVar1 + 0x10),5,0x20,0);
  return;
}
