/* @k10d call_d5afc_with_0x4f @ 0x000d6054
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0x4f.
 * summary:
 *   A one-line wrapper that invokes toggle_bit_and_call_two_routines passing the immediate
 *   value 0x4f. No other operations, side effects, or state changes are visible in this
 *   function. The role of toggle_bit_and_call_two_routines is unknown, so the semantic
 *   meaning of this call cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_d5afc_with_0x4f(void)

{
  toggle_bit_and_call_two_routines(0x4f);
  return;
}
