/* @k10d call_helper_with_two_args_104b55d8 @ 0x104b55d8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Calls a helper with the argument and its successor, returning the helper's boolean
 *   result.
 * summary:
 *   The function takes a single pointer argument and immediately calls
 *   invoke_virtual_method_with_result, passing the pointer and the next element (param_1 +
 *   1) as the second argument. It returns the boolean value produced by that callee. No
 *   other operations, side effects, or state modifications are visible in this function
 *   itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_helper_with_two_args_104b55d8(int *param_1)

{
  bool bVar1;
  
  bVar1 = invoke_virtual_method_with_result(param_1,param_1 + 1);
  return bVar1;
}
