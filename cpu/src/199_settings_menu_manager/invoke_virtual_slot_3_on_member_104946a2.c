/* @k10d invoke_virtual_slot_3_on_member_104946a2 @ 0x104946a2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_3_on_member_104946a2(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (((vtbl_entry*)(*piVar1))[3].fn)
              ((int)((vtbl_entry*)(*piVar1))[3].adj + (int)piVar1,*(uint32_t *)(param_1 + 4));
  }
  return;
}
