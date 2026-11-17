/* @k10d invoke_virtual_slot_13_1052ca38 @ 0x1052ca38
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 288_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_13_1052ca38(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 4);
  (**(code **)(iVar1 + 0x34))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x30));
  return 2;
}
