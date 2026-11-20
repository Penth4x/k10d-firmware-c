/* @k10d invoke_virtual_slot_two_on_five_members @ 0x104818d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_five_members(cls_105ab50c *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[3].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[3].adj),0);
  iVar1 = *(int *)param_1->field_0x8;
  (((vtbl_entry*)(iVar1))[3].fn)
            ((void *)((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar1))[3].adj),0);
  iVar1 = *(int *)param_1->field_0xc;
  (((vtbl_entry*)(iVar1))[3].fn)
            ((void *)((int)param_1->field_0xc + (int)((vtbl_entry*)(iVar1))[3].adj),0);
  iVar1 = *(int *)param_1->field_0x10;
  (((vtbl_entry*)(iVar1))[3].fn)
            ((void *)((int)param_1->field_0x10 + (int)((vtbl_entry*)(iVar1))[3].adj),0);
  iVar1 = *(int *)param_1->field_0x14;
  (((vtbl_entry*)(iVar1))[3].fn)
            ((void *)((int)param_1->field_0x14 + (int)((vtbl_entry*)(iVar1))[3].adj),0);
  return;
}
