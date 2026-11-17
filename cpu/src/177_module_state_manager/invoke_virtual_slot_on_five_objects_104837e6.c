/* @k10d invoke_virtual_slot_on_five_objects_104837e6 @ 0x104837e6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_five_objects_104837e6(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 5;
  do {
    piVar1 = (int *)module_array_getter(param_1,iVar2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x34))((int)*(short *)(*piVar1 + 0x30) + (int)piVar1);
    }
    piVar1 = (int *)module_array_getter(param_1,iVar2 + 1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x34))((int)*(short *)(*piVar1 + 0x30) + (int)piVar1);
    }
    piVar1 = (int *)module_array_getter(param_1,iVar2 + 2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x34))((int)*(short *)(*piVar1 + 0x30) + (int)piVar1);
    }
    piVar1 = (int *)module_array_getter(param_1,iVar2 + 3);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x34))((int)*(short *)(*piVar1 + 0x30) + (int)piVar1);
    }
    piVar1 = (int *)module_array_getter(param_1,iVar2 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x34))((int)*(short *)(*piVar1 + 0x30) + (int)piVar1);
    }
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 5;
  } while (-1 < iVar3);
  return;
}
