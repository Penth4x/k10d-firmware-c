/* @k10d call_single_helper_104be856 @ 0x104be856
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single unnamed helper function and returns.
 * summary:
 *   The function consists solely of a call to init_object_with_params_104c0a34 with no
 *   arguments and no local state manipulation. It acts as a thin wrapper or thunk around
 *   the callee. No side effects are visible beyond whatever the callee performs.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_104be856(uint32_t param_x0, uint32_t param_x1, uint32_t param_x2, uint32_t param_x3)
{
  init_object_with_params_104c0a34((uint32_t)param_x0,(void *)(uint32_t)param_x1,(uint32_t)param_x2,(uint32_t)param_x3);
  return;
}
