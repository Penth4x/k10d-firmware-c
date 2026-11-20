/* @k10d dispatch_virtual_method_on_two_objects @ 0x1052176a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_on_two_objects(cls_105d7b7c *param_1)

{
  int iVar1;
  
  if (param_1->field_0x24 == 0) {
    iVar1 = *(int *)param_1->field_0x2c;
    (((vtbl_entry*)(iVar1))[3].fn)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[3].adj);
  }
  else {
    (((vtbl_entry*)(param_1->field_0xc))[20].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[20].adj,
               param_1->field_0x0);
    iVar1 = *(int *)param_1->field_0x2c;
    (((vtbl_entry*)(iVar1))[3].fn)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[3].adj);
  }
  return;
}
