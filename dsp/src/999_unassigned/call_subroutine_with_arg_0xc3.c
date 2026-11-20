/* @k10d call_subroutine_with_arg_0xc3 @ 0x000d63c0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0xc3 and returns.
 * summary:
 *   This function is a one-line wrapper that invokes toggle_bit_and_call_two_routines
 *   passing the immediate value 0xc3. It has no other logic, side effects, or state
 *   manipulation. The role of toggle_bit_and_call_two_routines is unknown, so the specific
 *   behavior of this wrapper cannot be determined beyond the call itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_arg_0xc3(void)

{
  toggle_bit_and_call_two_routines(0xc3);
  return;
}
