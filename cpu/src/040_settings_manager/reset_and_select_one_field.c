/* @k10d reset_and_select_one_field @ 0x103989ba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_and_select_one_field(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x40),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x44),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x48),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x4c),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x50),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x54),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x58),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x5c),0);
  if (param_2 == 0x5060003) {
    if (param_3 == 0) {
      iVar1 = 0x50;
    }
    else {
      iVar1 = 0x40;
    }
  }
  else if (param_2 == 0x5060013) {
    if (param_3 == 0) {
      iVar1 = 0x54;
    }
    else {
      iVar1 = 0x44;
    }
  }
  else if (param_2 == 0x5060022) {
    if (param_3 == 0) {
      iVar1 = 0x58;
    }
    else {
      iVar1 = 0x48;
    }
  }
  else {
    if (param_2 != 0x5060031) {
      return;
    }
    iVar1 = 0x4c;
    if (param_3 == 0) {
      iVar1 = 0x5c;
    }
  }
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)(iVar1 + (int)param_1),1);
  return;
}
