/* @k10d call_function_with_offset_arg_10393018 @ 0x10393018
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Indirectly calls a function pointer at 0x10398bda with param_1 plus 8 as the argument.
 * summary:
 *   The function performs a single indirect call through the code pointer located at
 *   0x10398bda. It passes the value of param_1 incremented by 8 to the target function. No
 *   other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_function_with_offset_arg_10393018(int param_1, uint32_t param_x1)

{
  (*(code *)0x10398bda/*ROM*/)(param_1 + 8);
  return;
}
