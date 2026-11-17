/* @k10d call_helper_if_check_passes_1051ce40 @ 0x1051ce40
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an initialization routine, then conditionally calls a second routine based on the
 *   result of a check function.
 * summary:
 *   The function first calls clear_field_at_offset_0x30 unconditionally. It then calls
 *   call_init_then_query_param with the input parameter. If call_init_then_query_param
 *   returns 0, the function returns 0. Otherwise, it calls store_second_field_result with
 *   the input parameter and returns its result. The specific roles of the callees are
 *   unknown, so the behavior is described mechanically as a conditional dispatch.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_if_check_passes_1051ce40(uint32_t *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  clear_field_at_offset_0x30(__frv_reg_unset(4));
  iVar1 = call_init_then_query_param(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = store_second_field_result(param_1);
  }
  return uVar2;
}
