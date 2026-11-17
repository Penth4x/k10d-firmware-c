/* @k10d dispatch_virtual_if_flag_clear @ 0x10534238
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_if_flag_clear(int param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)0x10493dc4/*ROM*/)();
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
    (**(code **)(iVar1 + 0xcc))(*(int *)(param_1 + 0x10) + (int)*(short *)(iVar1 + 200),param_2);
  }
  return;
}
