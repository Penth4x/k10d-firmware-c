/* @k10d call_helper_with_offset_eight_10393bf0 @ 0x10393bf0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the first argument plus an offset of 8.
 * summary:
 *   The function takes one integer parameter and immediately calls
 *   init_object_with_eleven_handles with the value of param_1 + 8. It performs no other
 *   operations and returns void. The specific role of the callee is unknown, so the
 *   behavior is described mechanically as a pass-through with an offset.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_eight_10393bf0(int param_1)

{
  init_object_with_eleven_handles((void *)(param_1 + 8),__frv_reg_unset(5),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  return;
}
