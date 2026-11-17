/* @k10d forward_two_args_to_helper_1039ca88 @ 0x1039ca88
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes its second and third arguments to a single helper function and returns.
 * summary:
 *   The function takes three parameters but only forwards param_2 and param_3 to
 *   glyph_draw, ignoring param_1. It acts as a thin wrapper or thunk around the callee. No
 *   other side effects or global accesses are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_args_to_helper_1039ca88(uint32_t param_1,void *param_2,byte *param_3)

{
  glyph_draw(param_2,param_3);
  return;
}
