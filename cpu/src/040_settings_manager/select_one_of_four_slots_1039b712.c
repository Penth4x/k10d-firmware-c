/* @k10d select_one_of_four_slots_1039b712 @ 0x1039b712
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_one_of_four_slots_1039b712(void *param_1,int param_2)

{
  int iVar1;
  
  *(int *)((int)param_1 + 0x40) = param_2;
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x58),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x5c),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 0x60),0);
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)((int)param_1 + 100),0);
  if (param_2 == 0) {
    iVar1 = 0x58;
  }
  else if (param_2 == 1) {
    iVar1 = 0x5c;
  }
  else if (param_2 == 2) {
    iVar1 = 0x60;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    iVar1 = 100;
  }
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)(iVar1 + (int)param_1),1);
  return;
}
