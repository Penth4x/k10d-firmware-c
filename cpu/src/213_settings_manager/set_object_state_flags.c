/* @k10d set_object_state_flags @ 0x104af42e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_object_state_flags(int *param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 4);
  iVar2 = (**(code **)(iVar2 + 0x4c))(*param_1 + (int)*(short *)(iVar2 + 0x48));
  if (iVar2 == 0) {
    uVar1 = 3;
  }
  else {
    *(char *)((int)param_1 + 0x15) = (char)param_2;
    *(bool *)((int)param_1 + 0x16) = param_3 != 0 || param_2 != 0;
    uVar1 = 0;
  }
  return uVar1;
}
