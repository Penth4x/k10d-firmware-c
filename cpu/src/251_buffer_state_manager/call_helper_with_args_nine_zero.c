/* @k10d call_helper_with_args_nine_zero @ 0x104e08c2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with the object pointer, 9, and 0 as arguments.
 * summary:
 *   This function is a thin wrapper that calls dispatch_state_handler with param_1, 9, and
 *   0. It is virtual method slot 10 of class cls_105bce58. No other operations or side
 *   effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_args_nine_zero(cls_105bce58 *param_1)

{
  dispatch_state_handler((void *)param_1,9,0);
  return;
}
