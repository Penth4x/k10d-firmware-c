/* @k10d invoke_virtual_method_if_flag_clear_105342ce @ 0x105342ce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_if_flag_clear_105342ce(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)0x10493dba/*ROM*/)();
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
    (**(code **)(iVar1 + 0xb4))(*(int *)(param_1 + 0x10) + (int)*(short *)(iVar1 + 0xb0));
  }
  return;
}
