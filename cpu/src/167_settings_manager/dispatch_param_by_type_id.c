/* @k10d dispatch_param_by_type_id @ 0x104748da
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_param_by_type_id(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  bool bVar3;
  
  *(int *)(param_1 + 0x18) = param_2;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  dispatch_mode_handler_and_notify(__frv_reg_unset(4));
  bVar3 = *(int *)(param_2 + 0xc) == 1;
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 1) {
    uVar2 = call_two_helpers_and_return_status(param_1,*(uint16_t *)(param_2 + 8),*(uint16_t *)(param_2 + 10),bVar3);
  }
  else if (iVar1 == 3) {
    uVar2 = retry_operation_until_state_changes(param_1,bVar3);
  }
  else if (iVar1 == 4) {
    uVar2 = iterate_list_until_error(param_1,*(uint16_t *)(param_2 + 8),bVar3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
