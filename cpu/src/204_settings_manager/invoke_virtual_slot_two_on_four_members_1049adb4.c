/* @k10d invoke_virtual_slot_two_on_four_members_1049adb4 @ 0x1049adb4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_four_members_1049adb4(cls_105b57ac *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1->field_0x8 + 0x10);
  (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0x8 + ((vtbl_entry*)(iVar1))[3].adj,0);
  iVar1 = *(int *)(param_1->field_0xc + 0x10);
  (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0xc + ((vtbl_entry*)(iVar1))[3].adj,0);
  iVar1 = *(int *)(param_1->field_0x10 + 0x10);
  (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0x10 + ((vtbl_entry*)(iVar1))[3].adj,0);
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[3].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[3].adj),0);
  return;
}
