/* @k10d call_subroutine_with_offset_arg_10484e58 @ 0x10484e58
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single function pointer at 0x104288bc with param_1 plus 0x14 as the argument.
 * summary:
 *   The function performs a single indirect call through the code pointer at 0x104288bc,
 *   passing the first argument incremented by 0x14. No other operations, memory accesses,
 *   or side effects are visible in the pseudocode. The target of the indirect call is
 *   unknown, so the specific subsystem role cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_offset_arg_10484e58(int param_1)

{
  (*(code *)0x104288bc/*ROM*/)(param_1 + 0x14);
  return;
}
