/* @k10d call_helper_with_fixed_args_1051a654 @ 0x1051a654
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper with param_2 and two fixed constants (0, 0x11).
 * summary:
 *   The function forwards its second argument to write_word_to_dynamic_array along with the
 *   constants 0 and 0x11, then returns. No other operations or side effects are visible in
 *   the pseudocode. The role of the callee is unknown, so the camera subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_1051a654(uint32_t param_1,int param_2)

{
  write_word_to_dynamic_array(param_2,0,0x11);
  return;
}
