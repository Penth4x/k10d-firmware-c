/* @k10d invoke_two_virtual_methods_1049a994 @ 0x1049a994
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_virtual_methods_1049a994(cls_105b573c *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1->field_0x3c + 0x10);
  (((vtbl_entry*)(iVar1))[4].fn)(param_1->field_0x3c + (int)((vtbl_entry*)(iVar1))[4].adj);
  iVar1 = param_1->field_0x3c;
  if (iVar1 != 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0x10)))[1].fn)(*(short *)(*(int *)(iVar1 + 0x10) + 8) + iVar1,3);
  }
  return;
}
