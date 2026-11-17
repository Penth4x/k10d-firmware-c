/* @k10d dispatch_command_by_type_1047abb6 @ 0x1047abb6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_command_by_type_1047abb6(int param_1,int param_2,void *param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == 0x60000) {
    uVar1 = dispatch_event_if_pending(param_1,param_3);
  }
  else if (param_2 < 0x60001) {
    if (param_2 == 0x41000) {
      uVar1 = set_flag_from_state_and_update(param_1,param_3);
    }
    else if (param_2 == 0x50000) {
      uVar1 = copy_struct_and_invoke_virtual(param_1,(int)param_3);
    }
  }
  else if (param_2 == 0x60001) {
    uVar1 = update_object_state_and_notify_1047c5f4(param_1,(int)param_3);
  }
  else if ((param_2 != 0x60002) && (param_2 == 0x60003)) {
    uVar1 = copy_and_notify_state_change(param_1,(int)param_3);
  }
  return uVar1;
}
