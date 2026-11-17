/* @k10d call_d5afc_with_0xa5 @ 0x000d6298
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0xa5 and returns.
 * summary:
 *   A one-line wrapper that forwards the fixed value 0xa5 to
 *   toggle_bit_and_call_two_routines. No other side effects, flags, or memory accesses are
 *   visible in the pseudocode. The role of toggle_bit_and_call_two_routines is unknown, so
 *   the semantic meaning of 0xa5 cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_d5afc_with_0xa5(void)

{
  toggle_bit_and_call_two_routines(0xa5);
  return;
}
