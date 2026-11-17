/* @k10d dispatch_command_by_type_10499896 @ 0x10499896
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Dispatches a command based on the value in param_2 to one of five handler functions.
 * summary:
 *   Reads the first short from param_2 and uses it as a switch key. Depending on the value
 *   (0x100, 0x101, 0x103, 0x201, 0x202), it calls a specific handler function, passing
 *   param_1 + 0x18 and the value at param_1 + 0xc. For the 0x201 case, it also passes
 *   param_2 and 0. Returns 1 unconditionally.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_command_by_type_10499896(int param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = *param_2;
  if (sVar1 == 0x100) {
    dispatch_by_type_field_1051ddee(param_1 + 0x18,*(uint32_t *)(param_1 + 0xc),(void *)__frv_reg_unset(6));
  }
  else if (sVar1 == 0x101) {
    read_value_by_type_1051de34(param_1 + 0x18,*(uint32_t *)(param_1 + 0xc),(void *)__frv_reg_unset(6));
  }
  else if (sVar1 == 0x103) {
    query_status_code_and_map(param_1 + 0x18,*(uint32_t *)(param_1 + 0xc), __frv_reg_unset(6));
  }
  else if (sVar1 == 0x201) {
    compute_offset_if_type_four(param_1 + 0x18,*(int *)(param_1 + 0xc),param_2,0);
  }
  else if (sVar1 == 0x202) {
    check_object_type_and_query(param_1 + 0x18,*(uint32_t *)(param_1 + 0xc),(void *)__frv_reg_unset(6));
  }
  return 1;
}
