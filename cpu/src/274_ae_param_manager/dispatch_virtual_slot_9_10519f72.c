/* @k10d dispatch_virtual_slot_9_10519f72 @ 0x10519f72
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_slot_9_10519f72(int param_1,uint32_t param_2,int param_3,int param_4)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_3 == 0) {
    if (param_4 == 0) {
      uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x4c))
                        (*(short *)(*(int *)(param_1 + 4) + 0x48) + param_1,param_2,
                         *(uint32_t *)(param_1 + 0x58),1);
    }
    else if (param_4 == 1) {
      uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x4c))
                        (*(short *)(*(int *)(param_1 + 4) + 0x48) + param_1,param_2,
                         *(uint32_t *)(param_1 + 0x5c),0);
    }
    else if (param_4 == 2) {
      uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x4c))
                        (*(short *)(*(int *)(param_1 + 4) + 0x48) + param_1,param_2,
                         *(uint32_t *)(param_1 + 0x60),1);
    }
  }
  return uVar1;
}
