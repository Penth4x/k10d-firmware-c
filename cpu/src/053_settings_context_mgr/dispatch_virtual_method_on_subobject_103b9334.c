/* @k10d dispatch_virtual_method_on_subobject_103b9334 @ 0x103b9334
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 053_settings_context_mgr (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_on_subobject_103b9334(cls_10594c54 *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1->field_0x50 + 0x10);
  iVar2 = (((vtbl_entry*)(iVar2))[16].fn)(param_1->field_0x50 + (int)((vtbl_entry*)(iVar2))[16].adj);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1->field_0x50 + 0x10);
    uVar1 = (((vtbl_entry*)(iVar2))[12].fn)(param_1->field_0x50 + (int)((vtbl_entry*)(iVar2))[12].adj);
    iVar2 = *(int *)(param_1->field_0x50 + 0x10);
    (((vtbl_entry*)(iVar2))[13].fn)(param_1->field_0x50 + (int)((vtbl_entry*)(iVar2))[13].adj,0);
    uVar1 = lookup_value_by_code((uint32_t)(param_1),uVar1);
    call_helper_with_0x50000((uint32_t)(param_1),uVar1);
  }
  return;
}
