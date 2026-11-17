/* @k10d invoke_virtual_slot_5_on_member @ 0x1051760a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_5_on_member(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 4);
  (**(code **)(iVar1 + 0x2c))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x28));
  return;
}
