/* @k10d dispatch_on_short_code @ 0x1051b0a2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Reads a short code from param_2 and dispatches to one of four callees based on its
 *   value.
 * summary:
 *   The function loads the first short from param_2 and compares it against 0x110, 0x131,
 *   and 0x112. For each match, it calls a specific callee
 *   (process_type2_event_and_store_result, dispatch_param3_handler, or
 *   query_mode_state_if_type_three) passing param_1+0x18 and the value at param_1+8. If no
 *   match is found, it calls dispatch_on_two_byte_code with param_1 and the value at
 *   param_1+0x10. It always returns 1. The callees are not named, so the specific subsystem
 *   is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_short_code(int param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = *param_2;
  if (sVar1 == 0x110) {
    process_type2_event_and_store_result(param_1 + 0x18,*(uint32_t *)(param_1 + 8), __frv_reg_unset(6));
  }
  else if (sVar1 == 0x131) {
    dispatch_param3_handler(param_1 + 0x18,*(uint32_t *)(param_1 + 8), __frv_reg_unset(6));
  }
  else if (sVar1 == 0x112) {
    query_mode_state_if_type_three(param_1 + 0x18,*(uint32_t *)(param_1 + 8), __frv_reg_unset(6));
  }
  else {
    dispatch_on_two_byte_code(param_1,*(uint32_t *)(param_1 + 0x10),(uint16_t *)__frv_reg_unset(6));
  }
  return 1;
}
