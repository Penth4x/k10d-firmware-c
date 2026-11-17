/* @k10d call_helper_with_offset_arg_10395478 @ 0x10395478
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper function with the first argument offset by 8 and the second argument
 *   unchanged.
 * summary:
 *   This function is a thin wrapper that forwards its two parameters to
 *   store_value_at_offset_0x24_1039aba4, adding 8 to the first argument before the call. It
 *   performs no other operations or side effects. The specific role of the callee is
 *   unknown, so the wrapper's behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_arg_10395478(int param_1,uint32_t param_2)

{
  store_value_at_offset_0x24_1039aba4(param_1 + 8,param_2);
  return;
}
