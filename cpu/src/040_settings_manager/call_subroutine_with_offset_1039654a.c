/* @k10d call_subroutine_with_offset_1039654a @ 0x1039654a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single subroutine with the first argument offset by 0xc.
 * summary:
 *   The function takes a single integer parameter and immediately calls
 *   init_object_with_seventeen_handles_1039ba32 with the parameter plus 0xc. It performs no
 *   other operations and returns void. The specific role of the callee is unknown, so the
 *   behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_1039654a(int param_1)

{
  init_object_with_seventeen_handles_1039ba32((void *)(param_1 + 0xc),__frv_reg_unset(5),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  return;
}
