/* @k10d invoke_virtual_slot_3_on_two_members_10516ddc @ 0x10516ddc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_3_on_two_members_10516ddc(cls_105d6450 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[3].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[3].adj),0);
  iVar1 = *(int *)param_1->field_0xc;
  (((vtbl_entry*)(iVar1))[3].fn)
            ((void *)((int)param_1->field_0xc + (int)((vtbl_entry*)(iVar1))[3].adj),0);
  return 1;
}
