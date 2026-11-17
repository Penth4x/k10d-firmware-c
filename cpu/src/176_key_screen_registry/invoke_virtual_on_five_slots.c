/* @k10d invoke_virtual_on_five_slots @ 0x10481952
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_on_five_slots(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x14);
  (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar2 + 0x20));
  iVar2 = **(int **)(param_1 + 0x10);
  (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar2 + 0x20));
  iVar2 = **(int **)(param_1 + 0xc);
  (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar2 + 0x20));
  iVar2 = **(int **)(param_1 + 8);
  (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar2 + 0x20));
  iVar2 = **(int **)(param_1 + 4);
  (**(code **)(iVar2 + 0x24))((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar2 + 0x20));
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
  }
  return;
}
