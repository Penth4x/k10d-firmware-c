/* @k10d call_d5afc_with_0x8f @ 0x000d61bc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes toggle_bit_and_call_two_routines with the constant argument 0x8f.
 * summary:
 *   This function is a one-line wrapper that calls toggle_bit_and_call_two_routines passing
 *   the immediate value 0x8f. It has no other logic, local state, or side effects beyond
 *   that single call. The role of toggle_bit_and_call_two_routines is not provided, so the
 *   broader purpose cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_d5afc_with_0x8f(void)

{
  toggle_bit_and_call_two_routines(0x8f);
  return;
}
