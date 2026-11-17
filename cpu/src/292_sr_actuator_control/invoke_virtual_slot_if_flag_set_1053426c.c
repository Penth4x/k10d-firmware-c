/* @k10d invoke_virtual_slot_if_flag_set_1053426c @ 0x1053426c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_if_flag_set_1053426c(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)0x10493dac/*ROM*/)();
  if ((iVar1 == 0) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 0)) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x94))(*(short *)(*(int *)(iVar1 + 0xc) + 0x90) + iVar1);
  }
  return;
}
