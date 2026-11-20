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

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */
/* WARNING: Struct "cls_105bb0ec": ignoring overlapping field "field_0x8" */

void call_single_helper_104df376(cls_105bb314 *param_1,int param_2,int param_3)

{
  handle_event_0x50001((cls_105bb0ec *)param_1,param_2,param_3);
  return;
}
