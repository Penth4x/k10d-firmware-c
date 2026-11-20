/* @k10d call_single_argument_function_000d62e8 @ 0x000d62e8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0xb3.
 * summary:
 *   This function is a one-line wrapper that invokes toggle_bit_and_call_two_routines with
 *   the immediate value 0xb3. No other operations, memory accesses, or side effects are
 *   visible in the pseudocode. The role of toggle_bit_and_call_two_routines is unknown, so
 *   the purpose of this wrapper cannot be determined beyond the mechanical call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_argument_function_000d62e8(void)

{
  toggle_bit_and_call_two_routines(0xb3);
  return;
}
