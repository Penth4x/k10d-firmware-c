/* @k10d invoke_virtual_then_call_helper_105341d4 @ 0x105341d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_then_call_helper_105341d4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  (**(code **)(iVar1 + 0x54))(*(int *)(param_1 + 0x10) + (int)*(short *)(iVar1 + 0x50));
  call_virtual_slot_if_flag_set_1049477e(param_1);
  return;
}
