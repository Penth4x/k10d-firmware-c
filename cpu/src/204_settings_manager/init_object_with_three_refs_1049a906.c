/* @k10d init_object_with_three_refs_1049a906 @ 0x1049a906
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_three_refs_1049a906(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  alloc_pool_and_init_task((int *)(param_1 + 8),0x14,0x2000,4);
  iVar2 = (int)cls_105b56ec_new((uint32_t *)0x0);
  *(int *)(param_1 + 0x3c) = iVar2;
  (**(code **)(*(int *)(iVar2 + 0x10) + 0x14))(iVar2 + *(short *)(*(int *)(iVar2 + 0x10) + 0x10),0);
  iVar1 = 1;
  iVar2 = 0;
  do {
    iVar3 = param_1 + 0x24;
    *(uint32_t *)(iVar3 + iVar2) = *(uint32_t *)(param_1 + 0x3c);
    *(uint32_t *)(iVar3 + iVar2 + 4) = *(uint32_t *)(param_1 + 0x3c);
    *(uint32_t *)(iVar3 + iVar2 + 8) = *(uint32_t *)(param_1 + 0x3c);
    iVar1 = iVar1 + -1;
    iVar2 = iVar2 + 0xc;
  } while (-1 < iVar1);
  return;
}
