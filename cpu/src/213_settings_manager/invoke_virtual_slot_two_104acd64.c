/* @k10d invoke_virtual_slot_two_104acd64 @ 0x104acd64
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_104acd64(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x10);
  (**(code **)(iVar1 + 0x1c))((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar1 + 0x18));
  return;
}
