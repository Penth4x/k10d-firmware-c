/* @k10d invoke_virtual_method_if_flag_clear_104949c6 @ 0x104949c6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_if_flag_clear_104949c6(cls_105b4ad4 *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)0x10493dba/*ROM*/)();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1->field_0x48 + 0xc);
    (((vtbl_entry*)(iVar1))[22].fn)(param_1->field_0x48 + (int)((vtbl_entry*)(iVar1))[22].adj);
  }
  return;
}
