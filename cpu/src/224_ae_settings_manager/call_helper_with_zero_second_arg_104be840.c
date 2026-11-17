/* @k10d call_helper_with_zero_second_arg_104be840 @ 0x104be840
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Forwards three parameters to init_object_with_params_104c0a34, forcing the second
 *   argument to zero.
 * summary:
 *   The function is a thin wrapper that calls init_object_with_params_104c0a34 with
 *   param_1, a constant 0, param_2, and param_3. No other operations or side effects are
 *   visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_zero_second_arg_104be840(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  init_object_with_params_104c0a34(param_1,0,param_2,param_3);
  return;
}
