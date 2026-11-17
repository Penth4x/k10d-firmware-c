/* @k10d invoke_virtual_slot_two_with_zero_104a2d72 @ 0x104a2d72
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_with_zero_104a2d72(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0x1c);
  (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 0x3c) + (int)*(short *)(iVar1 + 0x18),0);
  return;
}
