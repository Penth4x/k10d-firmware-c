/* @k10d invoke_virtual_slot_two_1039fd58 @ 0x1039fd58
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_1039fd58(cls_1056ac8c *param_1)

{
  int iVar1;
  
  iVar1 = param_1->field_0x2c;
  (((vtbl_entry*)(iVar1))[2].fn)((int)((char*)param_1 + 0x2c) + (int)((vtbl_entry*)(iVar1))[2].adj);
  return;
}
