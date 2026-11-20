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

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */
/* WARNING: Struct "cls_105bb0ec": ignoring overlapping field "field_0x8" */

void call_single_helper_104df35a(cls_105bb314 *param_1)

{
  drain_flagged_queue((cls_105bb0ec *)param_1);
  return;
}
