/* @k10d destroy_object_and_free_members @ 0x104ae782
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_object_and_free_members(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0xd;
  do {
    uVar1 = uVar4 - 1 & 0xff;
    iVar3 = *(int *)(*(int *)(param_1 + 8) + uVar1 * 4);
    if (iVar3 != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 8) + uVar1 * 4);
      iVar5 = *(int *)(iVar2 + 0x18);
      (**(code **)(iVar5 + 0xc))(iVar2 + *(short *)(iVar5 + 8),3);
    }
    *(uint32_t *)(*(int *)(param_1 + 8) + uVar1 * 4) = 0;
    for (uVar1 = uVar4; uVar1 != 0; uVar1 = uVar1 - 1 & 0xff) {
      iVar2 = (uVar1 - 1) * 4;
      if (iVar3 == *(int *)(*(int *)(param_1 + 8) + iVar2)) {
        *(uint32_t *)(*(int *)(param_1 + 8) + iVar2) = 0;
      }
    }
    uVar4 = uVar4 - 1 & 0xff;
  } while (uVar4 != 0);
  heap_free_2(*(int *)(param_1 + 8));
  *(uint32_t *)(param_1 + 8) = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x18) + 0xc))(*(short *)(*(int *)(iVar3 + 0x18) + 8) + iVar3,3);
  }
  *(uint32_t *)(param_1 + 0x10) = 0;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x18) + 0xc))(*(short *)(*(int *)(iVar3 + 0x18) + 8) + iVar3,3);
  }
  *(uint32_t *)(param_1 + 0xc) = 0;
  heap_free_2(*(int *)(param_1 + 4));
  *(uint32_t *)(param_1 + 4) = 0;
  return;
}
