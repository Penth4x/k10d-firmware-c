/* @k10d call_single_helper_1051b986 @ 0x1051b986
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single unnamed helper function and returns.
 * summary:
 *   The function consists solely of a call to call_virtual_slot_if_flag_set_1049477e with
 *   no arguments and no local state manipulation. It acts as a thin wrapper or thunk around
 *   the callee. No camera-specific behavior or side effects are visible in this function's
 *   own code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_1051b986(void)

{
  call_virtual_slot_if_flag_set_1049477e(__frv_reg_unset(4));
  return;
}
