/* @k10d dispatch_by_type_field_104af7e6 @ 0x104af7e6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool dispatch_by_type_field_104af7e6(int *param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = param_1[1];
  if (iVar1 == 1) {
    uVar2 = dispatch_control_command(param_1,param_2,param_3);
  }
  else if (iVar1 == 2) {
    uVar2 = dispatch_param_two_handler(param_1,param_2,param_3);
  }
  else if (iVar1 == 3) {
    uVar2 = handle_state_transition_request(param_1,param_2);
  }
  else {
    bVar3 = set_flag_on_param_0x80(param_1,param_2);
    uVar2 = (uint)bVar3;
  }
  bVar3 = set_flag_and_return_bool(param_1,uVar2);
  return bVar3;
}
