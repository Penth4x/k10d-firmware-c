/* @k10d invoke_virtual_slot_on_six_members @ 0x104a304a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_six_members(cls_105b6424 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1->field_0x8 + 0x1c);
  (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0x8 + ((vtbl_entry*)(iVar1))[3].adj,0);
  iVar1 = *(int *)(param_1->field_0xc + 0x1c);
  (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0xc + ((vtbl_entry*)(iVar1))[3].adj,0);
  iVar1 = *(int *)(param_1->field_0x10 + 0x1c);
  (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0x10 + ((vtbl_entry*)(iVar1))[3].adj,0);
  iVar1 = *(int *)(param_1->field_0x14 + 0x1c);
  (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0x14 + ((vtbl_entry*)(iVar1))[3].adj,0);
  iVar1 = *(int *)(param_1->field_0x18 + 0x1c);
  (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0x18 + ((vtbl_entry*)(iVar1))[3].adj,0);
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[3].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[3].adj),0);
  return;
}
