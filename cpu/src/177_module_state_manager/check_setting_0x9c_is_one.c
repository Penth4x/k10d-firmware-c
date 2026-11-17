/* @k10d check_setting_0x9c_is_one @ 0x1048329c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_setting_0x9c_is_one(int param_1)

{
  int iVar1;
  
  settings_refresh_working_copy(*(void **)(param_1 + 4));
  iVar1 = setting_get(*(int *)(param_1 + 4),0x9c);
  return iVar1 == 1;
}
