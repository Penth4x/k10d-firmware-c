/* @k10d call_single_helper_104b771e @ 0x104b771e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 220_shutter_trigger (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function and returns.
 * summary:
 *   This function is a thin wrapper that invokes dispatch_event_with_flag and returns
 *   immediately. No arguments are passed and no local state is modified. The specific role
 *   of the helper is unknown, so the wrapper's behavior is purely mechanical delegation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_104b771e(uint32_t param_x0, uint32_t param_x1, uint32_t param_x2, uint32_t param_x3)
{
  dispatch_event_with_flag((int *)(uint32_t)param_x0,(void *)(uint32_t)param_x1,(void *)(uint32_t)param_x2,(void *)(uint32_t)param_x3);
  return;
}
