/* @k10d call_d5afc_with_0xd6 @ 0x000d64ae
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0xd6.
 * summary:
 *   The function consists solely of a single call to toggle_bit_and_call_two_routines,
 *   passing the immediate value 0xd6. No other operations, side effects, or state
 *   modifications are visible in the pseudocode. The role of
 *   toggle_bit_and_call_two_routines is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_d5afc_with_0xd6(void)

{
  toggle_bit_and_call_two_routines(0xd6);
  return;
}
