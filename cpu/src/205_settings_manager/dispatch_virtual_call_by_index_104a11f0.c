/* @k10d dispatch_virtual_call_by_index_104a11f0 @ 0x104a11f0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_call_by_index_104a11f0(int param_1,uint32_t param_2,int param_3,int param_4)

{
  uint32_t uVar1;
  
  if (param_3 == 0) {
    if (param_4 == 0) {
      uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x4c))
                        (*(short *)(*(int *)(param_1 + 4) + 0x48) + param_1,param_2,
                         *(uint32_t *)(param_1 + 0x58),0);
      return uVar1;
    }
    if (param_4 == 1) {
      uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x4c))
                        (*(short *)(*(int *)(param_1 + 4) + 0x48) + param_1,param_2,
                         *(uint32_t *)(param_1 + 0x5c),1);
      return uVar1;
    }
    if (param_4 == 2) {
      uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x4c))
                        (*(short *)(*(int *)(param_1 + 4) + 0x48) + param_1,param_2,
                         *(uint32_t *)(param_1 + 0x60),0);
      return uVar1;
    }
  }
  return 0;
}
