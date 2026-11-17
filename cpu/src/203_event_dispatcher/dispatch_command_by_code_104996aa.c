/* @k10d dispatch_command_by_code_104996aa @ 0x104996aa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_command_by_code_104996aa(int param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_2;
  if (uVar1 == 0x110) {
    process_type2_event_and_store_result(param_1 + 0x18,*(uint32_t *)(param_1 + 8), __frv_reg_unset(6));
  }
  else if (uVar1 < 0x111) {
    if (uVar1 == 0x100) {
      dispatch_by_type_field_1051ddee(param_1 + 0x18,*(uint32_t *)(param_1 + 0x14),(void *)__frv_reg_unset(6));
    }
    else if (uVar1 == 0x101) {
      read_value_by_type_1051de34(param_1 + 0x18,*(uint32_t *)(param_1 + 0x14),(void *)__frv_reg_unset(6));
    }
    else if (uVar1 == 0x103) {
      query_status_code_and_map(param_1 + 0x18,*(uint32_t *)(param_1 + 0x14), __frv_reg_unset(6));
    }
    else if (uVar1 == 0x106) {
      check_status_and_set_result(param_1 + 0x18,*(uint32_t *)(param_1 + 0x14), __frv_reg_unset(6));
    }
  }
  else if (uVar1 == 0x117) {
    accumulate_array_values_by_type(param_1 + 0x18,*(uint32_t *)(param_1 + 0x14),(void *)__frv_reg_unset(6));
  }
  else if (uVar1 < 0x118) {
    if (uVar1 == 0x111) {
      compute_offset_by_type(param_1 + 0x18,*(int *)(param_1 + 0x14),param_2,0);
    }
    else if (uVar1 == 0x112) {
      query_mode_state_if_type_three(param_1 + 0x18,*(uint32_t *)(param_1 + 8), __frv_reg_unset(6));
    }
  }
  else if (uVar1 == 0x11c) {
    check_status_and_set_flag(param_1 + 0x18,*(uint32_t *)(param_1 + 0x14), __frv_reg_unset(6));
  }
  else if (uVar1 == 0x131) {
    dispatch_param3_handler(param_1 + 0x18,*(uint32_t *)(param_1 + 8), __frv_reg_unset(6));
  }
  return 1;
}
