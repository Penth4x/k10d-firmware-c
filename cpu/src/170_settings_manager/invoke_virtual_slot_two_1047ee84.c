/* @k10d invoke_virtual_slot_two_1047ee84 @ 0x1047ee84
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_1047ee84(int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))
              ((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,0x51000,param_1[0xb]);
  }
  return;
}
