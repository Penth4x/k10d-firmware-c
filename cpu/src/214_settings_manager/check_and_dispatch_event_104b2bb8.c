/* @k10d check_and_dispatch_event_104b2bb8 @ 0x104b2bb8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_dispatch_event_104b2bb8(int param_1)

{
  int *piVar1;
  int iVar2;
  uint32_t uVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  uVar3 = 0;
  if (((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x18) == 3)) &&
     (iVar2 = (**(code **)(*piVar1 + 0x3c))((int)*(short *)(*piVar1 + 0x38) + (int)piVar1),
     iVar2 == 2)) {
    *(uint32_t *)(param_1 + 0x18) = 0;
    iVar2 = **(int **)(param_1 + 4);
    (**(code **)(iVar2 + 0x2c))
              ((int)*(int **)(param_1 + 4) + (int)*(short *)(iVar2 + 0x28),
               *(uint32_t *)(*(int *)(param_1 + 0xc) + 0xc));
    uVar3 = 1;
  }
  return uVar3;
}
