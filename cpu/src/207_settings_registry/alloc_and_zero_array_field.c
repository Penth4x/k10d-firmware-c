/* @k10d alloc_and_zero_array_field @ 0x104a9c20
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 207_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t alloc_and_zero_array_field(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  iVar2 = dispatch_three_virtual_writes(param_1,param_2,param_3);
  if ((iVar2 != 0) && (*(int *)(param_1 + 4) != 0)) {
    iVar2 = heap_alloc_2(*(int *)(param_1 + 4) << 2);
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar2 != 0) {
      uVar1 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        iVar2 = 0;
        do {
          *(uint32_t *)(*(int *)(param_1 + 0x14) + iVar2) = 0;
          uVar1 = uVar1 + 1;
          iVar2 = iVar2 + 4;
        } while (uVar1 < *(uint *)(param_1 + 4));
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}
