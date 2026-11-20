/* @k10d invoke_virtual_slot_two_1049467c @ 0x1049467c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_1049467c(int param_1, uint32_t param_x1)

{
  int *piVar1;
  uint32_t uVar2;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1);
  }
  return uVar2;
}
