/* @k10d dispatch_by_type_field_10473d3c @ 0x10473d3c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_by_type_field_10473d3c(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x18) = param_2;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  dispatch_state_handler_and_notify(__frv_reg_unset(4));
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    iVar1 = execute_two_step_operation(param_1,*(uint16_t *)(param_2 + 8),*(uint16_t *)(param_2 + 10),
                         *(uint32_t *)(param_2 + 0xc));
  }
  else if (iVar1 == 1) {
    iVar1 = attempt_two_step_operation(param_1,*(uint16_t *)(param_2 + 8),*(uint16_t *)(param_2 + 10));
  }
  else if (iVar1 == 3) {
    iVar1 = iterate_until_match_or_done(param_1);
  }
  else if (iVar1 == 2) {
    iVar1 = iterate_and_apply_list_entries(param_1,(uint)*(ushort *)(param_2 + 8),*(int **)(param_2 + 0x10));
  }
  else if (iVar1 == 4) {
    iVar1 = iterate_until_match_or_stop(param_1,*(uint16_t *)(param_2 + 8));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
