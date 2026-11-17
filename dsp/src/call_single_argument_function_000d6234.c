/* @k10d call_single_argument_function_000d6234 @ 0x000d6234
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0x9b and returns.
 * summary:
 *   This function is a one-line wrapper that invokes toggle_bit_and_call_two_routines with
 *   the immediate value 0x9b. No other operations, memory accesses, or side effects are
 *   visible in the pseudocode. The role of toggle_bit_and_call_two_routines is unknown, so
 *   the specific behavior of this wrapper cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_argument_function_000d6234(void)

{
  toggle_bit_and_call_two_routines(0x9b);
  return;
}
