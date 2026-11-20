/* @k10d call_helper_with_offset_eight_10396b3a @ 0x10396b3a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes param_1 plus 8 to a single helper function and returns.
 * summary:
 *   The function takes one integer argument, adds 8 to it, and forwards the result to
 *   forward_param_to_helper_1039c4f2. No other operations, globals, or side effects are
 *   visible. The role of the callee is unknown, so the behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_eight_10396b3a(cls_10562f68 *param_1)

{
  forward_param_to_helper_1039c4f2((void *)&param_1->field_0x8);
  return;
}
