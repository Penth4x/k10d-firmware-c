/* @k10d call_helper_with_offset_eight_103926b2 @ 0x103926b2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes param_1 plus 8 to a single callee and returns.
 * summary:
 *   The function takes one integer argument, adds 8 to it, and forwards the result to
 *   forward_param_to_helper_1039c4f2. No other operations, globals, or side effects are
 *   visible. The callee's role is unknown, so the subsystem cannot be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_eight_103926b2(cls_105627d4 *param_1)

{
  forward_param_to_helper_1039c4f2((void *)((char *)param_1 + 8));
  return;
}
