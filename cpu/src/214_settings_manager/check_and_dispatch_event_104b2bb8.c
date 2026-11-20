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
     (iVar2 = (((vtbl_entry*)(*piVar1))[7].fn)((int)((vtbl_entry*)(*piVar1))[7].adj + (int)piVar1),
     iVar2 == 2)) {
    *(uint32_t *)(param_1 + 0x18) = 0;
    iVar2 = **(int **)(param_1 + 4);
    (((vtbl_entry*)(iVar2))[5].fn)
              ((int)*(int **)(param_1 + 4) + (int)((vtbl_entry*)(iVar2))[5].adj,
               *(uint32_t *)(*(int *)(param_1 + 0xc) + 0xc));
    uVar3 = 1;
  }
  return uVar3;
}
