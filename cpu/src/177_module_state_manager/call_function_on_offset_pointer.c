/* @k10d call_function_on_offset_pointer @ 0x104848c0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unknown function at 0x104282d0 with param_1 plus 0x14 as the argument.
 * summary:
 *   The function takes a single pointer-like parameter, adds the offset 0x14 to it, and
 *   passes the result to a function located at 0x104282d0. No other operations or side
 *   effects are visible in the pseudocode. The role of the callee at 0x104282d0 is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_function_on_offset_pointer(int param_1)

{
  (*(code *)0x104282d0/*ROM*/)(param_1 + 0x14);
  return;
}
