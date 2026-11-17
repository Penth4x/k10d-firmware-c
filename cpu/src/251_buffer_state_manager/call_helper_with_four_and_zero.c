/* @k10d call_helper_with_four_and_zero @ 0x104e0886
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper passing the object pointer, 4, and 0.
 * summary:
 *   This is virtual slot 5 of cls_105bce58. It forwards its first argument (the object
 *   pointer) to dispatch_state_handler along with the constants 4 and 0, then returns. No
 *   other state is touched and the callee's role is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_four_and_zero(int *param_1)

{
  dispatch_state_handler(param_1,4,0);
  return;
}
