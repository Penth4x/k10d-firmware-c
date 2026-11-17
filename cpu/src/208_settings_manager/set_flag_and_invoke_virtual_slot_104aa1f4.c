/* @k10d set_flag_and_invoke_virtual_slot_104aa1f4 @ 0x104aa1f4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 208_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_invoke_virtual_slot_104aa1f4(int param_1)

{
  int *piVar1;
  
  *(uint8_t *)(param_1 + 0x18) = 1;
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0xd0003,0);
  }
  return;
}
