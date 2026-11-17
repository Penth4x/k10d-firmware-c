/* @k10d invoke_virtual_slot_two_on_two_objects_104b3bca @ 0x104b3bca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_two_objects_104b3bca(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x2c);
  (**(code **)(iVar1 + 0x14))((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x10));
  iVar1 = **(int **)(param_1 + 0x30);
  (**(code **)(iVar1 + 0x14))((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar1 + 0x10));
  return;
}
