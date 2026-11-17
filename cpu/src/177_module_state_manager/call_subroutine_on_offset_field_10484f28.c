/* @k10d call_subroutine_on_offset_field_10484f28 @ 0x10484f28
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a function pointer stored at a fixed address, passing a pointer offset by 0x14
 *   from the input argument.
 * summary:
 *   The function takes a single integer parameter and calls the function pointer located at
 *   0x10428d54. It passes the value of param_1 plus 0x14 as the argument to that callee. No
 *   other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_on_offset_field_10484f28(int param_1)

{
  (*(code *)0x10428d54/*ROM*/)(param_1 + 0x14);
  return;
}
