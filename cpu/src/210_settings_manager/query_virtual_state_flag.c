/* @k10d query_virtual_state_flag @ 0x104ab6e4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 210_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_virtual_state_flag(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x3c))
                    (*(short *)(*(int *)(param_1 + 4) + 0x38) + param_1);
  if ((iVar1 != 0) && (uVar2 = 1, (**(uint **)(param_1 + 0x2c) & 0x30000) != 0x10000)) {
    uVar2 = 2;
  }
  return uVar2;
}
