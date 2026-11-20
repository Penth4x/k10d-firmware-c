/* @k10d invoke_virtual_slot_two_on_four_members_104cfdba @ 0x104cfdba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 242_event_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_four_members_104cfdba(cls_105b9afc *param_1)

{
  int iVar1;
  
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
