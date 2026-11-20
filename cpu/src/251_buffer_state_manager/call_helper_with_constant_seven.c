/* @k10d call_helper_with_constant_seven @ 0x104e08aa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Forwards its two arguments to dispatch_state_handler, inserting the constant 7 as the
 *   second parameter.
 * summary:
 *   A one-line wrapper that calls dispatch_state_handler with param_1, the literal 7, and
 *   param_2. It is virtual slot 8 of cls_105bce58. No other side effects or globals are
 *   touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_constant_seven(cls_105bce58 *param_1,uint32_t param_2)

{
  dispatch_state_handler((void *)param_1,7,param_2);
  return;
}
