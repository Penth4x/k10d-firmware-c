/* @k10d call_subroutine_with_offset_1039653a @ 0x1039653a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single subroutine with the first argument offset by 0xc.
 * summary:
 *   The function takes one integer parameter and immediately calls
 *   forward_param_to_helper_1039c4f2 with that parameter plus 0xc. It performs no other
 *   operations, local variable manipulation, or side effects. The role of the callee is
 *   unknown, so the behavior is described purely mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_1039653a(int param_1)

{
  forward_param_to_helper_1039c4f2((void *)(param_1 + 0xc));
  return;
}
