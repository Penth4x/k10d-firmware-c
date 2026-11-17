/* @k10d invoke_virtual_slot_3_on_member_10466ffa @ 0x10466ffa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_3_on_member_10466ffa(void *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1);
  }
  return;
}
