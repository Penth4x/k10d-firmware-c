/* @k10d dispatch_three_param_handlers @ 0x10498c9c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 202_ae_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Dispatches to one of three handler functions based on a 16-bit code read from param_2.
 * summary:
 *   Reads the first short from param_2 and compares it against 0x112, 0x110, and 0x131.
 *   Depending on the match, it calls one of three distinct functions
 *   (query_mode_state_if_type_three, process_type2_event_and_store_result, or
 *   dispatch_param3_handler), passing param_1 + 0x14 and the value at param_1 + 8 as
 *   arguments. Returns 1 unconditionally.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_three_param_handlers(int param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = *param_2;
  if (sVar1 == 0x112) {
    query_mode_state_if_type_three(param_1 + 0x14,*(uint32_t *)(param_1 + 8), __frv_reg_unset(6));
  }
  else if (sVar1 == 0x110) {
    process_type2_event_and_store_result(param_1 + 0x14,*(uint32_t *)(param_1 + 8), __frv_reg_unset(6));
  }
  else if (sVar1 == 0x131) {
    dispatch_param3_handler(param_1 + 0x14,*(uint32_t *)(param_1 + 8), __frv_reg_unset(6));
  }
  return 1;
}
