/* @k10d invoke_virtual_slot_7_10483700 @ 0x10483700
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_7_10483700(void *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)((int)param_1 + 0xc);
  (**(code **)(iVar1 + 0x3c))((int)*(int **)((int)param_1 + 0xc) + (int)*(short *)(iVar1 + 0x38));
  return;
}
