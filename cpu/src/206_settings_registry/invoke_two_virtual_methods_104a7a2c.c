/* @k10d invoke_two_virtual_methods_104a7a2c @ 0x104a7a2c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_virtual_methods_104a7a2c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 4);
  (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar2 + 0x20));
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  return;
}
