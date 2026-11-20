/* @k10d call_subroutine_with_offset_1039205e @ 0x1039205e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the first argument plus a 12-byte offset.
 * summary:
 *   The function takes one integer parameter and immediately calls
 *   forward_param_to_helper_1039c4f2 with param_1 + 0xc. It performs no other operations,
 *   has no visible side effects beyond the callee, and returns void. The role of the callee
 *   is unknown, so the behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_1039205e(cls_10562758 *param_1)

{
  forward_param_to_helper_1039c4f2((void *)(&param_1->field_0xc));
  return;
}
