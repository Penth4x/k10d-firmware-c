/* @k10d dispatch_five_virtual_calls_per_group @ 0x10483ce0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_five_virtual_calls_per_group(void *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint32_t uStack_c;
  
  iVar3 = 0;
  uStack_c = 5;
  iVar2 = 0;
  do {
    piVar1 = (int *)module_array_getter(param_1,iVar3);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x24))
                ((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,*(uint32_t *)(param_2 + iVar2));
    }
    piVar1 = (int *)module_array_getter(param_1,iVar3 + 1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x24))
                ((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,*(uint32_t *)(param_2 + iVar2 + 4))
      ;
    }
    piVar1 = (int *)module_array_getter(param_1,iVar3 + 2);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x24))
                ((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,*(uint32_t *)(param_2 + iVar2 + 8))
      ;
    }
    piVar1 = (int *)module_array_getter(param_1,iVar3 + 3);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x24))
                ((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,
                 *(uint32_t *)(param_2 + iVar2 + 0xc));
    }
    piVar1 = (int *)module_array_getter(param_1,iVar3 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x24))
                ((int)*(short *)(*piVar1 + 0x20) + (int)piVar1,
                 *(uint32_t *)(param_2 + iVar2 + 0x10));
    }
    iVar3 = iVar3 + 5;
    uStack_c = uStack_c + -1;
    iVar2 = iVar2 + 0x14;
  } while (-1 < uStack_c);
  return;
}
