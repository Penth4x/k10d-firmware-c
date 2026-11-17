/* @k10d invoke_virtual_slot_8_with_zero @ 0x103c7248
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_8_with_zero(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1;
  (**(code **)(iVar1 + 0x44))(*param_1 + (int)*(short *)(iVar1 + 0x40),0);
  return;
}
