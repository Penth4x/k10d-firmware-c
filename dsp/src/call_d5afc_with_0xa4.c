/* @k10d call_d5afc_with_0xa4 @ 0x000d628e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0xa4 and returns.
 * summary:
 *   This is a one-line wrapper that invokes toggle_bit_and_call_two_routines with the
 *   immediate value 0xa4. No other operations, side effects, or state changes are visible
 *   in the pseudocode. The role of toggle_bit_and_call_two_routines is unknown, so the
 *   specific behavior of this wrapper cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_d5afc_with_0xa4(void)

{
  toggle_bit_and_call_two_routines(0xa4);
  return;
}
