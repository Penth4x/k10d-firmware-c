/* @k10d dispatch_virtual_slot_by_mode_1051ce00 @ 0x1051ce00
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 276_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_slot_by_mode_1051ce00(int param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  if (param_3 == 1) {
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x4c))
                      (*(short *)(*(int *)(param_1 + 4) + 0x48) + param_1);
  }
  else if (param_3 == 2) {
    uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x54))
                      (*(short *)(*(int *)(param_1 + 4) + 0x50) + param_1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
