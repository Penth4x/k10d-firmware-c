/* @k10d call_d5afc_with_0xcb @ 0x000d6430
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes toggle_bit_and_call_two_routines with the constant argument 0xcb.
 * summary:
 *   The function consists solely of a single call to toggle_bit_and_call_two_routines,
 *   passing the immediate value 0xcb. No other operations, side effects, or state
 *   modifications are visible in the pseudocode. The role of
 *   toggle_bit_and_call_two_routines is unknown, so the specific behavior of this wrapper
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_d5afc_with_0xcb(void)

{
  toggle_bit_and_call_two_routines(0xcb);
  return;
}
