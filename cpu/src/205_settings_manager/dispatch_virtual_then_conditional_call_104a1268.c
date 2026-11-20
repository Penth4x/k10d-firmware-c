/* @k10d dispatch_virtual_then_conditional_call_104a1268 @ 0x104a1268
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_then_conditional_call_104a1268(cls_105b5c6c *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  (((vtbl_entry*)(param_1->field_0x4))[7].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[7].adj);
  iVar1 = call_helper_and_branch_on_result((cls_105d6c2c *)param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (((vtbl_entry*)(param_1->field_0x4))[8].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[8].adj);
  }
  return uVar2;
}
