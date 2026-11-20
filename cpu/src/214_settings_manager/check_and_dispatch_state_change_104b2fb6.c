/* @k10d check_and_dispatch_state_change_104b2fb6 @ 0x104b2fb6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_dispatch_state_change_104b2fb6(int param_1)

{
  int *piVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 8);
  uVar2 = 0;
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x18) == 3)) {
    iVar3 = (((vtbl_entry*)(*piVar1))[7].fn)((int)((vtbl_entry*)(*piVar1))[7].adj + (int)piVar1);
    if ((iVar3 == 2) || (iVar3 == 4)) {
      *(uint32_t *)(param_1 + 0x18) = 0;
      iVar4 = **(int **)(param_1 + 4);
      (((vtbl_entry*)(iVar4))[11].fn)
                ((int)*(int **)(param_1 + 4) + (int)((vtbl_entry*)(iVar4))[11].adj,iVar3 == 4,
                 *(uint32_t *)(*(int *)(param_1 + 0xc) + 0xc));
    }
    uVar2 = 1;
  }
  return uVar2;
}
