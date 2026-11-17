/* @k10d dispatch_on_code_0x41100 @ 0x1049a9d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_code_0x41100(uint32_t param_1,int param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == 0x41100) {
    uVar1 = update_object_state_and_notify_1049ac60(param_1,param_3);
  }
  return uVar1;
}
