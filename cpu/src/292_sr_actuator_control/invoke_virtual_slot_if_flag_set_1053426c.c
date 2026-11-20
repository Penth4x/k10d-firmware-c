/* @k10d invoke_virtual_slot_if_flag_set_1053426c @ 0x1053426c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_if_flag_set_1053426c(cls_1061e4c0 *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)0x10493dac/*ROM*/)();
  if ((iVar1 == 0) && (iVar1 = param_1->field_0x10, iVar1 != 0)) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[18].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[18].adj + iVar1);
  }
  return;
}
