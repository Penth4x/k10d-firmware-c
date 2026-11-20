/* @k10d invoke_virtual_slot_3_on_two_members_1047a836 @ 0x1047a836
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_3_on_two_members_1047a836(cls_105aa710 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x8;
  (((vtbl_entry*)(iVar1))[3].fn)
            ((void *)((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar1))[3].adj),0);
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[3].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[3].adj),0);
  return;
}
