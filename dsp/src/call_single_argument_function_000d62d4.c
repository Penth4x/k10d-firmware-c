/* @k10d call_single_argument_function_000d62d4 @ 0x000d62d4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes toggle_bit_and_call_two_routines with the constant argument 0xb1.
 * summary:
 *   This function is a one-line wrapper that calls toggle_bit_and_call_two_routines passing
 *   the immediate value 0xb1. No other operations, memory accesses, or state changes are
 *   visible in the pseudocode. The role of toggle_bit_and_call_two_routines is unknown, so
 *   the specific behavior of this wrapper cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_argument_function_000d62d4(void)

{
  toggle_bit_and_call_two_routines(0xb1);
  return;
}
