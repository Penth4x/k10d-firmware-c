/* @k10d iterate_and_apply_virtual_ops @ 0x104a2b06
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint iterate_and_apply_virtual_ops(int param_1)

{
  int iVar1;
  uint32_t *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint32_t uVar6;
  
  uVar6 = **(uint32_t **)(param_1 + 0xc);
  iVar1 = (**(code **)(*(int *)(param_1 + 0x1c) + 0x54))
                    (*(short *)(*(int *)(param_1 + 0x1c) + 0x50) + param_1);
  uVar3 = (uint)(iVar1 != 0);
  uVar5 = 0;
  if ((uVar3 == 1) &&
     (iVar1 = (**(code **)(*(int *)(param_1 + 0x1c) + 0x54))
                        (*(short *)(*(int *)(param_1 + 0x1c) + 0x50) + param_1), iVar1 != 0)) {
    do {
      puVar2 = (uint32_t *)
               (**(code **)(*(int *)(param_1 + 0x1c) + 0x4c))
                         (*(short *)(*(int *)(param_1 + 0x1c) + 0x48) + param_1,uVar5);
      iVar1 = **(int **)(param_1 + 0x10);
      iVar1 = (**(code **)(iVar1 + 0x34))
                        ((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar1 + 0x30),uVar6,
                         *puVar2,0);
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        iVar1 = **(int **)(param_1 + 0x10);
        uVar3 = (**(code **)(iVar1 + 0x2c))
                          ((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar1 + 0x28),uVar6,
                           puVar2[1],puVar2[2]);
      }
      uVar5 = uVar5 + 1;
    } while ((uVar3 == 1) &&
            (uVar4 = (**(code **)(*(int *)(param_1 + 0x1c) + 0x54))
                               (*(short *)(*(int *)(param_1 + 0x1c) + 0x50) + param_1),
            uVar5 < uVar4));
  }
  return uVar3;
}
