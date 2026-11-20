/* @k10d invoke_virtual_slot_3_on_two_members_104ed0aa @ 0x104ed0aa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_3_on_two_members_104ed0aa(cls_105c2b94 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[3].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[3].adj),0);
  iVar1 = *(int *)param_1->field_0x8;
  (((vtbl_entry*)(iVar1))[3].fn)
            ((void *)((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar1))[3].adj),0);
  return 1;
}
