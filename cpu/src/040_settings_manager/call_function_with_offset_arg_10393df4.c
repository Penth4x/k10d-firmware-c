/* @k10d call_function_with_offset_arg_10393df4 @ 0x10393df4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a function pointer at 0x10399fb8 with the first argument plus 8.
 * summary:
 *   The function takes a single integer parameter, adds 8 to it, and passes the result to a
 *   function whose address is stored at 0x10399fb8. This is a simple trampoline or wrapper
 *   that adjusts the argument before delegating to another routine. No other operations or
 *   side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_function_with_offset_arg_10393df4(int param_1)

{
  (*(code *)0x10399fb8/*ROM*/)(param_1 + 8);
  return;
}
