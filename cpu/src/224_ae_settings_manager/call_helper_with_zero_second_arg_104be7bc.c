/* @k10d call_helper_with_zero_second_arg_104be7bc @ 0x104be7bc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Forwards its three arguments to init_event_handler_context, forcing the second argument
 *   to zero.
 * summary:
 *   This is a thin wrapper that calls init_event_handler_context with param_1, a constant
 *   0, param_2, and param_3. No other logic, state changes, or side effects are visible in
 *   this function itself. The specific role of the underlying operation is unknown because
 *   the callee is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_zero_second_arg_104be7bc(int param_1,uint param_2,int *param_3)

{
  init_event_handler_context(param_1,0,param_2,param_3);
  return;
}
