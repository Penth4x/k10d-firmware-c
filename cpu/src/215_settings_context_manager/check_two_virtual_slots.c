/* @k10d check_two_virtual_slots @ 0x104b3c84
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_virtual_slots(int param_1)

{
  int *piVar1;
  int iVar2;
  uint32_t uVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  uVar3 = 1;
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (**(code **)(*piVar1 + 0x2c))((int)*(short *)(*piVar1 + 0x28) + (int)piVar1),
     iVar2 == 0)) {
    uVar3 = 0;
  }
  piVar1 = *(int **)(param_1 + 4);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (**(code **)(*piVar1 + 0x2c))((int)*(short *)(*piVar1 + 0x28) + (int)piVar1),
     iVar2 == 0)) {
    uVar3 = 0;
  }
  return uVar3;
}
