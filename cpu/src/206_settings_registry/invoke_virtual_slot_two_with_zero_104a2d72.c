/* @k10d invoke_virtual_slot_two_with_zero_104a2d72 @ 0x104a2d72
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_with_zero_104a2d72(cls_105b63b0 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1->field_0x3c + 0x1c);
  (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0x3c + (int)((vtbl_entry*)(iVar1))[3].adj,0);
  return;
}
