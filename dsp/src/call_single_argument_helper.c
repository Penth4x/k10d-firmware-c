/* @k10d call_single_argument_helper @ 0x000d6318
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0xb7.
 * summary:
 *   The function consists solely of a call to toggle_bit_and_call_two_routines passing the
 *   immediate value 0xb7. No other operations, memory accesses, or state changes are
 *   visible in the pseudocode. The role of toggle_bit_and_call_two_routines is unknown, so
 *   the specific behavior of this wrapper cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_argument_helper(void)

{
  toggle_bit_and_call_two_routines(0xb7);
  return;
}
