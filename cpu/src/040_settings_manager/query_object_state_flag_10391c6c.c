/* @k10d query_object_state_flag_10391c6c @ 0x10391c6c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool query_object_state_flag_10391c6c(int *param_1, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1;
  iVar1 = (**(code **)(iVar1 + 0x1c))(*param_1 + (int)*(short *)(iVar1 + 0x18),0);
  return iVar1 != 0;
}
