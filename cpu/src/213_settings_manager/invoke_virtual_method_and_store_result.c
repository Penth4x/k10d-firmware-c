/* @k10d invoke_virtual_method_and_store_result @ 0x104af6ba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_method_and_store_result(int *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 4);
  iVar2 = (**(code **)(iVar2 + 0x4c))(*param_1 + (int)*(short *)(iVar2 + 0x48));
  if (iVar2 == 0) {
    uVar1 = 3;
  }
  else {
    param_1[3] = param_2;
    uVar1 = 0;
  }
  return uVar1;
}
