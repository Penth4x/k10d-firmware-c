/* @k10d call_single_helper_1046d812 @ 0x1046d812
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * purpose:
 *   Forwards its single integer argument to toggle_flag_and_call_handler_1046d81a and
 *   returns.
 * summary:
 *   A one-line wrapper that invokes toggle_flag_and_call_handler_1046d81a with param_1 and
 *   returns void. No local state, no side effects beyond the callee. The callee's role is
 *   unknown, so no subsystem can be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_1046d812(int param_1)

{
  toggle_flag_and_call_handler_1046d81a(param_1);
  return;
}
