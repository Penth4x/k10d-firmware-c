/* @k10d call_d5afc_with_0x8a @ 0x000d618a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0x8a.
 * summary:
 *   This function is a one-line wrapper that invokes toggle_bit_and_call_two_routines
 *   passing the immediate value 0x8a. It has no other logic, local state, or side effects
 *   beyond the callee's behavior. The role of toggle_bit_and_call_two_routines is unknown,
 *   so the semantic meaning of the 0x8a argument cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_d5afc_with_0x8a(void)

{
  toggle_bit_and_call_two_routines(0x8a);
  return;
}
