/* @k10d update_object_state_and_dispatch_104b3ade @ 0x104b3ade
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_state_and_dispatch_104b3ade(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != *(int *)(param_1 + 0x40)) {
    *(int *)(param_1 + 0x40) = param_2;
    check_entry_condition_in_table(*(byte **)(param_1 + 0x34));
  }
  invoke_virtual_slot_two_and_notify(*(void **)(param_1 + 0x28));
  iVar1 = **(int **)(param_1 + 0x2c);
  (**(code **)(iVar1 + 0x14))((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x10));
  iVar1 = **(int **)(param_1 + 0x30);
  (**(code **)(iVar1 + 0x14))((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar1 + 0x10));
  return;
}
