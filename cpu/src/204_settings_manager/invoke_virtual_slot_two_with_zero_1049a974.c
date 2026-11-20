/* @k10d invoke_virtual_slot_two_with_zero_1049a974 @ 0x1049a974
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_with_zero_1049a974(cls_105b573c *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1->field_0x3c + 0x10);
  (((vtbl_entry*)(iVar1))[3].fn)(param_1->field_0x3c + (int)((vtbl_entry*)(iVar1))[3].adj,0);
  return;
}
