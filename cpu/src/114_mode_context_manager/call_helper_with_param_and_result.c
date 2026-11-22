/* @k10d call_helper_with_param_and_result @ 0x10430116
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls get_or_init_cached_value and passes its return value along with param_1 to
 *   get_flag_from_struct_offset.
 * summary:
 *   This function acts as a thin wrapper. It invokes get_or_init_cached_value to obtain a
 *   value, then immediately calls get_flag_from_struct_offset, providing the original
 *   parameter and the result from the first call as arguments. No other operations or side
 *   effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_param_and_result(uint32_t param_1, uint32_t param_x1)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_cached_value((int)(param_1)/* B-3: stock r4 = param_1 */, __frv_reg_unset(5));
  get_flag_from_struct_offset(param_1,uVar1);
  return;
}
