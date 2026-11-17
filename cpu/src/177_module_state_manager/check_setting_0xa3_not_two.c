/* @k10d check_setting_0xa3_not_two @ 0x104832cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_setting_0xa3_not_two(int param_1)

{
  int iVar1;
  
  settings_refresh_working_copy(*(void **)(param_1 + 4));
  iVar1 = setting_get(*(int *)(param_1 + 4),0xa3);
  return iVar1 != 2;
}
