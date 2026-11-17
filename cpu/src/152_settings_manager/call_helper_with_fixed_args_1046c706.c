/* @k10d call_helper_with_fixed_args_1046c706 @ 0x1046c706
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 152_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper passing the two input parameters plus two fixed constants.
 * summary:
 *   The function is a thin wrapper that forwards param_1 and param_2 to copy_struct_array,
 *   appending the constant 0x214 as the third argument and 0 as the fourth. No other logic,
 *   state changes, or side effects are visible in this function itself. The role of the
 *   callee is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_1046c706(int param_1,void *param_2)

{
  copy_struct_array(param_1,param_2,0x214,0);
  return;
}
