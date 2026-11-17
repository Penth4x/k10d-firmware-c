/* @k10d invoke_virtual_slot_11_10533990 @ 0x10533990
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_11_10533990(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 4);
  (**(code **)(iVar1 + 0x2c))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar1 + 0x28));
  return;
}
