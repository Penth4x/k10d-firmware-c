/* @k10d invoke_virtual_slot_5_with_zero @ 0x1047d084
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_5_with_zero(cls_105aabd0 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[5].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[5].adj),0);
  return;
}
