/* @k10d invoke_virtual_slot_7_on_object @ 0x104a2e5c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_7_on_object(uint32_t param_x0, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = read_struct_field_or_array(__frv_reg_unset(4), __frv_reg_unset(5));
  (**(code **)(*(int *)(iVar1 + 0x1c) + 0x3c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x1c) + 0x38));
  return;
}
