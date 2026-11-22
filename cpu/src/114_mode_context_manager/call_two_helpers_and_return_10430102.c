/* @k10d call_two_helpers_and_return_10430102 @ 0x10430102
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls app_mode_activate, passes its result and param_1 to get_flag_from_struct_offset,
 *   and returns that result.
 * summary:
 *   A thin wrapper that invokes app_mode_activate with no arguments, then calls
 *   get_flag_from_struct_offset with param_1 and the first function's return value,
 *   returning the second call's result. No other side effects are visible in the
 *   pseudocode. The caller is process_mode_transition_event_1042f7f0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_two_helpers_and_return_10430102(uint32_t param_1)

{
  uint32_t uVar1;
  
  uVar1 = app_mode_activate((int)(param_1)/* B-3: stock r4 = param_1 */, __frv_reg_unset(5));
  uVar1 = get_flag_from_struct_offset(param_1,uVar1);
  return uVar1;
}
