/* @k10d invoke_virtual_slot_5_and_1 @ 0x1047d0a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 168_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_5_and_1(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 4);
  (**(code **)(iVar2 + 0x34))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar2 + 0x30));
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  return;
}
