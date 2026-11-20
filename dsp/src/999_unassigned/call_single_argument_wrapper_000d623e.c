/* @k10d call_single_argument_wrapper_000d623e @ 0x000d623e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0x9c.
 * summary:
 *   This function is a one-line wrapper that invokes toggle_bit_and_call_two_routines with
 *   the immediate value 0x9c and returns. No other operations, side effects, or state
 *   modifications are visible in the pseudocode. The role of
 *   toggle_bit_and_call_two_routines is unknown, so the specific behavior of this wrapper
 *   cannot be determined beyond the mechanical call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_argument_wrapper_000d623e(void)

{
  toggle_bit_and_call_two_routines(0x9c);
  return;
}
