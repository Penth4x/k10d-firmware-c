/* @k10d call_function_with_offset_arg_10484dec @ 0x10484dec
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls a function at 0x104284dc with the first argument plus 0x14.
 * summary:
 *   The function takes a single integer parameter and immediately invokes an indirect
 *   function pointer located at 0x104284dc. The argument passed to the callee is the input
 *   parameter incremented by 0x14. No other operations or side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_function_with_offset_arg_10484dec(int param_1)

{
  (*(code *)0x104284dc/*ROM*/)(param_1 + 0x14);
  return;
}
