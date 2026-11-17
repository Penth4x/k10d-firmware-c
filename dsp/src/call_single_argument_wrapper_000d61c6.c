/* @k10d call_single_argument_wrapper_000d61c6 @ 0x000d61c6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0x90.
 * summary:
 *   This function is a one-line wrapper that invokes toggle_bit_and_call_two_routines with
 *   the immediate value 0x90 and returns. No other operations, memory accesses, or side
 *   effects are visible in the pseudocode. The role of toggle_bit_and_call_two_routines is
 *   unknown, so the specific behavior of this call cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_argument_wrapper_000d61c6(void)

{
  toggle_bit_and_call_two_routines(0x90);
  return;
}
