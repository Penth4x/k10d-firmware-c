/* @k10d call_helper_with_arg_six @ 0x104e089e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper function passing the first argument, the constant 6, and the second
 *   argument.
 * summary:
 *   This function is a thin wrapper that forwards its two parameters to
 *   dispatch_state_handler, inserting the constant 6 as the second argument. It is virtual
 *   method slot 7 of class cls_105bce58. No other side effects or state changes are visible
 *   in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_arg_six(cls_105bce58 *param_1,uint32_t param_2)

{
  dispatch_state_handler((void*)param_1,6,param_2);
  return;
}
