/* @k10d call_helper_with_args_5_0 @ 0x104e0892
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with the object pointer and constants 5 and 0.
 * summary:
 *   This function is a thin wrapper that invokes dispatch_state_handler, passing the input
 *   pointer as the first argument, the integer 5 as the second, and 0 as the third. It is
 *   virtual method slot 6 of class cls_105bce58. No other operations or side effects are
 *   visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_args_5_0(cls_105bce58 *param_1)

{
  dispatch_state_handler((void *)param_1,5,0);
  return;
}
