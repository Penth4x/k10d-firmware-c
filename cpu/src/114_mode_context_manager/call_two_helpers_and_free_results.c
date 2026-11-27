/* @k10d call_two_helpers_and_free_results @ 0x104301ba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions and conditionally calls a cleanup routine on their non-
 *   zero return values.
 * summary:
 *   The function calls app_mode_activate and get_or_init_cached_value (passing param_1 and
 *   param_3). If either returns a non-zero value, it calls
 *   call_helper_with_offset_and_flag_104279d4 with the return value plus 8. The specific
 *   roles of the callees are unknown, so the behavior is described mechanically as a
 *   sequence of calls with conditional cleanup.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_and_free_results(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = app_mode_activate((uint32_t)param_1, (uint32_t)param_2);
  if (iVar1 != 0) {
    call_helper_with_offset_and_flag_104279d4(iVar1 + 8);
  }
  iVar1 = get_or_init_cached_value(param_1,param_3);
  if (iVar1 != 0) {
    call_helper_with_offset_and_flag_104279d4(iVar1 + 8);
  }
  return;
}
