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

void call_single_helper_104b771e(void)

{
  dispatch_event_with_flag((int *)__frv_reg_unset(4),(void *)__frv_reg_unset(5),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  return;
}
