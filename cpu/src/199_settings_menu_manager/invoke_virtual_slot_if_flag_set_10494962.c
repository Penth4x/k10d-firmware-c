/* @k10d invoke_virtual_slot_if_flag_set_10494962 @ 0x10494962
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_if_flag_set_10494962(cls_105b4ad4 *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)0x10493dac/*ROM*/)();
  if ((iVar1 == 0) && (iVar1 = param_1->field_0x48, iVar1 != 0)) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[18].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[18].adj + iVar1);
  }
  return;
}
