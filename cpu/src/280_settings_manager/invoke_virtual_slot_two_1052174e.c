/* @k10d invoke_virtual_slot_two_1052174e @ 0x1052174e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_1052174e(cls_105d7b7c *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x2c;
  (((vtbl_entry*)(iVar1))[2].fn)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[2].adj);
  return;
}
