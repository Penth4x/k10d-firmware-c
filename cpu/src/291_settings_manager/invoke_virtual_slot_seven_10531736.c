/* @k10d invoke_virtual_slot_seven_10531736 @ 0x10531736
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 291_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_seven_10531736(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 4);
  (**(code **)(iVar1 + 0x4c))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x48));
  return;
}
