/* @k10d dispatch_control_command @ 0x104af868
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_control_command(int *param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
    return 1;
  }
  if (param_2 == 0x40) {
    if (*param_1 == 1) {
      invoke_virtual_update_callback(param_1[3]);
      return 1;
    }
  }
  else {
    if (param_2 != 0x20) {
      if (param_2 != 1) {
        return 0;
      }
      uVar1 = call_subroutine_and_return_status(param_1,param_3);
      return uVar1;
    }
    if (*param_1 == 1) {
      invoke_virtual_update_callback(param_1[3]);
      return 1;
    }
  }
  return 0;
}
