/* @k10d call_single_helper_104df376 @ 0x104df376
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single unnamed helper function and returns.
 * summary:
 *   The function consists solely of a call to handle_event_0x50001. No arguments are passed
 *   and no return value is used. The specific role of the callee is unknown, so the
 *   wrapper's behavior is purely mechanical delegation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_104df376(void)

{
  handle_event_0x50001(__frv_reg_unset(4), __frv_reg_unset(5), __frv_reg_unset(6));
  return;
}
