/* @k10d call_helper_with_fixed_arg @ 0x10429b32
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function with a fixed first argument and a passed pointer.
 * summary:
 *   The function is a thin wrapper that invokes copy_structured_data_blocks with the
 *   constant -0x7ffe2124 as the first argument and param_2 as the second argument. It
 *   performs no other operations and returns immediately after the call. The role of the
 *   callee is unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_arg(uint32_t param_1,int *param_2)

{
  copy_structured_data_blocks(-0x7ffe2124,param_2);
  return;
}
