/* @k10d invoke_virtual_slot_5_with_zero @ 0x1047d084
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_5_with_zero(void *param_1)

{
  int iVar1;
  
  iVar1 = **(int **)((int)param_1 + 4);
  (**(code **)(iVar1 + 0x2c))((int)*(int **)((int)param_1 + 4) + (int)*(short *)(iVar1 + 0x28),0);
  return;
}
