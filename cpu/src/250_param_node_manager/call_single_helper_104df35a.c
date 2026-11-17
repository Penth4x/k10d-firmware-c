/* @k10d call_single_helper_104df35a @ 0x104df35a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single unnamed helper function and returns.
 * summary:
 *   The function consists solely of a call to drain_flagged_queue with no arguments and no
 *   return value handling. No other operations, memory accesses, or side effects are
 *   visible in the pseudocode. The role of the callee is unknown, so the wrapper's specific
 *   purpose cannot be determined beyond forwarding the call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_104df35a(void)

{
  drain_flagged_queue(__frv_reg_unset(4));
  return;
}
