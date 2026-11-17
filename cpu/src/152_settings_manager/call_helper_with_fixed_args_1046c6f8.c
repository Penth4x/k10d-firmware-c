/* @k10d call_helper_with_fixed_args_1046c6f8 @ 0x1046c6f8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 152_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the two input parameters and two fixed constants.
 * summary:
 *   This function is a thin wrapper that forwards param_1 and param_2 to
 *   copy_words_with_offset, appending the constant 0x214 as the third argument and 0 as the
 *   fourth. It performs no other operations or side effects. The specific role of the
 *   underlying helper is unknown as it is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_1046c6f8(uint32_t param_1,uint32_t param_2)

{
  copy_words_with_offset(param_1,param_2,0x214,0);
  return;
}
