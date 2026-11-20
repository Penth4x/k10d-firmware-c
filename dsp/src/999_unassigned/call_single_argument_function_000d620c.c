/* @k10d call_single_argument_function_000d620c @ 0x000d620c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0x97.
 * summary:
 *   The function consists solely of a call to toggle_bit_and_call_two_routines passing the
 *   immediate value 0x97. No other operations, side effects, or state modifications are
 *   visible in the pseudocode. The role of toggle_bit_and_call_two_routines is unknown, so
 *   the specific behavior of this wrapper cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_argument_function_000d620c(void)

{
  toggle_bit_and_call_two_routines(0x97);
  return;
}
