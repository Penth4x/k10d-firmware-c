/* @k10d dispatch_state_handler @ 0x104e09a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool dispatch_state_handler(int *param_1, int param_2, uint32_t param_x2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = param_1[1];
  if (iVar1 == 1) {
    uVar2 = dispatch_state_command_104e0a14(param_1,param_2);
  }
  else if (iVar1 == 2) {
    uVar2 = dispatch_state_command_104e0a68(param_1,param_2);
  }
  else if (iVar1 == 3) {
    uVar2 = dispatch_state_command_104e0ac6(param_1,param_2);
  }
  else {
    bVar3 = set_flag_if_param_is_two(param_1,param_2);
    uVar2 = (uint)bVar3;
  }
  bVar3 = set_flag_and_return_bool(param_1,uVar2);
  return bVar3;
}
