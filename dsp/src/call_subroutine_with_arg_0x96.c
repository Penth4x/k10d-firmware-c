/* @k10d call_subroutine_with_arg_0x96 @ 0x000d6202
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0x96.
 * summary:
 *   The function consists solely of a single call to toggle_bit_and_call_two_routines,
 *   passing the immediate value 0x96. No other operations, side effects, or state
 *   modifications are visible in the pseudocode. The role of
 *   toggle_bit_and_call_two_routines is unknown, so the specific behavior of this wrapper
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_arg_0x96(void)

{
  toggle_bit_and_call_two_routines(0x96);
  return;
}
