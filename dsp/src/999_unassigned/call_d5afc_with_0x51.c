/* @k10d call_d5afc_with_0x51 @ 0x000d6068
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes toggle_bit_and_call_two_routines with the constant argument 0x51.
 * summary:
 *   The function is a one-line wrapper that calls toggle_bit_and_call_two_routines passing
 *   the immediate value 0x51. No other operations, side effects, or state changes are
 *   visible in the pseudocode. The role of toggle_bit_and_call_two_routines is unknown, so
 *   the semantic meaning of this call cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_d5afc_with_0x51(void)

{
  toggle_bit_and_call_two_routines(0x51);
  return;
}
