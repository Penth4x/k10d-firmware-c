/* @k10d dispatch_command_by_id_10477d70 @ 0x10477d70
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_command_by_id_10477d70(int param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((param_2 == 0x61000) || (param_2 == 0x62000)) {
    *(uint32_t *)(param_1 + 0x80) = param_3;
  }
  else if (param_2 == 0x61001) {
    uVar1 = invoke_virtual_method_with_params(param_1,param_3);
  }
  else if (param_2 == 0x62001) {
    uVar1 = invoke_virtual_method_0x60003(param_1);
  }
  return uVar1;
}
