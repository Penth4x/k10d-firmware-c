/* @k10d call_helper_with_offset_eight_10393ffe @ 0x10393ffe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes param_1 plus 8 to a single callee and returns.
 * summary:
 *   One-line wrapper that forwards its argument (offset by 8) to
 *   forward_param_to_helper_1039c4f2. No other operations, globals, or side effects are
 *   visible in this function. The callee's role is unknown, so no subsystem can be
 *   inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_eight_10393ffe(int param_1)

{
  forward_param_to_helper_1039c4f2((void *)(param_1 + 8));
  return;
}
