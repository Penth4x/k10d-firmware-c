/* @k10d invoke_virtual_methods_on_nine_members @ 0x104785e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_methods_on_nine_members(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = *piVar1;
  (**(code **)(iVar2 + 0x24))((int)piVar1 + (int)*(short *)(iVar2 + 0x20));
  piVar1 = *(int **)(param_1 + 8);
  iVar2 = *piVar1;
  (**(code **)(iVar2 + 0x24))((int)piVar1 + (int)*(short *)(iVar2 + 0x20));
  piVar1 = *(int **)(param_1 + 0xc);
  iVar2 = *piVar1;
  (**(code **)(iVar2 + 0x24))((int)piVar1 + (int)*(short *)(iVar2 + 0x20));
  piVar1 = *(int **)(param_1 + 0x18);
  iVar2 = *piVar1;
  (**(code **)(iVar2 + 0x24))((int)piVar1 + (int)*(short *)(iVar2 + 0x20));
  piVar1 = *(int **)(param_1 + 0x10);
  iVar2 = *piVar1;
  (**(code **)(iVar2 + 0x24))((int)piVar1 + (int)*(short *)(iVar2 + 0x20));
  piVar1 = *(int **)(param_1 + 0x14);
  iVar2 = *piVar1;
  (**(code **)(iVar2 + 0x24))((int)piVar1 + (int)*(short *)(iVar2 + 0x20));
  iVar2 = **(int **)(param_1 + 0x1c);
  (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x1c) + (int)*(short *)(iVar2 + 0x20));
  iVar2 = **(int **)(param_1 + 0x20);
  (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x20) + (int)*(short *)(iVar2 + 0x20));
  iVar2 = **(int **)(param_1 + 0x24);
  (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x24) + (int)*(short *)(iVar2 + 0x20));
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = **(int **)(param_1 + 0x14);
    (**(code **)(iVar2 + 0xc))((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar2 + 8),3);
  }
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  return;
}
