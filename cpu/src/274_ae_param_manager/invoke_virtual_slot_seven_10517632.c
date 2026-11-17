/* @k10d invoke_virtual_slot_seven_10517632 @ 0x10517632
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_seven_10517632(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 4);
  (**(code **)(iVar1 + 0x3c))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x38));
  return;
}
