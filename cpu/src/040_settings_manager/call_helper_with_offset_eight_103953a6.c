/* @k10d call_helper_with_offset_eight_103953a6 @ 0x103953a6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes param_1 plus 8 to a single callee and returns.
 * summary:
 *   One-line wrapper that forwards its argument (offset by 8) to
 *   init_buffer_chain_with_handles. No other operations, globals, or side effects are
 *   visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_eight_103953a6(int param_1)

{
  init_buffer_chain_with_handles((void *)(param_1 + 8),__frv_reg_unset(5),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  return;
}
