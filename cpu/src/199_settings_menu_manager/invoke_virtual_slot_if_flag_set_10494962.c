/* @k10d invoke_virtual_slot_if_flag_set_10494962 @ 0x10494962
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_if_flag_set_10494962(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)0x10493dac/*ROM*/)();
  if ((iVar1 == 0) && (iVar1 = *(int *)(param_1 + 0x48), iVar1 != 0)) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x94))(*(short *)(*(int *)(iVar1 + 0xc) + 0x90) + iVar1);
  }
  return;
}
