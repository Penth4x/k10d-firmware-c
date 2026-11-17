/* @k10d invoke_virtual_slot_8_103b915a @ 0x103b915a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 053_settings_context_mgr (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_8_103b915a(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
  (**(code **)(iVar1 + 0x44))(*(int *)(param_1 + 0x50) + (int)*(short *)(iVar1 + 0x40));
  return;
}
