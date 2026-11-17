/* @k10d call_single_function_104df33e @ 0x104df33e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single function pointer at a fixed address and returns.
 * summary:
 *   The function performs a single indirect call to the code located at 0x104dec8e. It has
 *   no other logic, arguments, or side effects visible in the pseudocode. The target of the
 *   call is not identified in the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_function_104df33e(void)

{
  (*(code *)0x104dec8e/*ROM*/)();
  return;
}
