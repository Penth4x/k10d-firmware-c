/* @k10d notify_four_child_objects @ 0x1045d19a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 130_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void notify_four_child_objects(int param_1,uint32_t param_2,uint32_t param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x5c);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1),
     iVar2 != 0)) {
    piVar1 = *(int **)(param_1 + 0x5c);
    iVar2 = *piVar1;
    (**(code **)(iVar2 + 0x1c))((int)piVar1 + (int)*(short *)(iVar2 + 0x18),0x90001,param_3);
  }
  piVar1 = *(int **)(param_1 + 0x60);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1),
     iVar2 != 0)) {
    iVar2 = **(int **)(param_1 + 0x60);
    (**(code **)(iVar2 + 0x1c))
              ((int)*(int **)(param_1 + 0x60) + (int)*(short *)(iVar2 + 0x18),0x90001,param_3);
  }
  piVar1 = *(int **)(param_1 + 100);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1),
     iVar2 != 0)) {
    iVar2 = **(int **)(param_1 + 100);
    (**(code **)(iVar2 + 0x1c))
              ((int)*(int **)(param_1 + 100) + (int)*(short *)(iVar2 + 0x18),0x90001,param_3);
  }
  piVar1 = *(int **)(param_1 + 0x68);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1),
     iVar2 != 0)) {
    iVar2 = **(int **)(param_1 + 0x68);
    (**(code **)(iVar2 + 0x1c))
              ((int)*(int **)(param_1 + 0x68) + (int)*(short *)(iVar2 + 0x18),0x90001,param_3);
  }
  return;
}
