/* @k10d invoke_virtual_slot_two_on_two_objects_104e0fd8 @ 0x104e0fd8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_two_objects_104e0fd8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0xc);
  (**(code **)(iVar1 + 0x14))(*(int *)(param_1 + 0x40) + (int)*(short *)(iVar1 + 0x10));
  iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0xc);
  (**(code **)(iVar1 + 0x14))(*(int *)(param_1 + 0x3c) + (int)*(short *)(iVar1 + 0x10));
  return;
}
