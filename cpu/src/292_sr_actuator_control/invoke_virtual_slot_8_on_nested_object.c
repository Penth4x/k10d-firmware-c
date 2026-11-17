/* @k10d invoke_virtual_slot_8_on_nested_object @ 0x10534138
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_8_on_nested_object(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  (**(code **)(iVar1 + 0x44))(*(int *)(param_1 + 0x10) + (int)*(short *)(iVar1 + 0x40));
  return;
}
