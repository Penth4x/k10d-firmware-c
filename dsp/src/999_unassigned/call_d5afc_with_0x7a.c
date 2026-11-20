/* @k10d call_d5afc_with_0x7a @ 0x000d6108
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0x7a and returns.
 * summary:
 *   This function is a one-line wrapper that invokes toggle_bit_and_call_two_routines with
 *   the immediate value 0x7a. It has no other logic, no local state, and no visible side
 *   effects beyond the callee's behavior. The role of toggle_bit_and_call_two_routines is
 *   unknown, so the specific meaning of 0x7a cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_d5afc_with_0x7a(void)

{
  toggle_bit_and_call_two_routines(0x7a);
  return;
}
