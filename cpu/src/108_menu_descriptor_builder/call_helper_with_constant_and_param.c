/* @k10d call_helper_with_constant_and_param @ 0x10429b1e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Calls a single helper with a fixed negative constant and the second argument.
 * summary:
 *   The function is a one-line wrapper that invokes copy_structured_data_to_buffer, passing
 *   the constant -0x7ffe2124 as the first argument and param_2 as the second. No other
 *   operations, side effects, or state changes are visible in this function itself. The
 *   role of the callee is unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_constant_and_param(uint32_t param_1,int *param_2)

{
  copy_structured_data_to_buffer(-0x7ffe2124,param_2);
  return;
}
