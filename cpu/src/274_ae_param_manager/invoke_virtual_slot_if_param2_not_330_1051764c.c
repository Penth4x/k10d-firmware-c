/* @k10d invoke_virtual_slot_if_param2_not_330_1051764c @ 0x1051764c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_if_param2_not_330_1051764c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0x14a) {
    iVar1 = **(int **)(param_1 + 4);
    (**(code **)(iVar1 + 0x4c))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x48));
  }
  return;
}
