/* @k10d call_single_argument_function_000d61ee @ 0x000d61ee
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0x94.
 * summary:
 *   The function is a one-line wrapper that invokes toggle_bit_and_call_two_routines
 *   passing the immediate value 0x94. No other operations, memory accesses, or side effects
 *   are visible in the pseudocode. The role of toggle_bit_and_call_two_routines is unknown,
 *   so the specific behavior of this wrapper cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_argument_function_000d61ee(void)

{
  toggle_bit_and_call_two_routines(0x94);
  return;
}
