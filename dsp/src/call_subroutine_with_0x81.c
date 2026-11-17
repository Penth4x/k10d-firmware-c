/* @k10d call_subroutine_with_0x81 @ 0x000d6130
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes toggle_bit_and_call_two_routines with the constant argument 0x81.
 * summary:
 *   This function is a one-line wrapper that calls toggle_bit_and_call_two_routines passing
 *   the immediate value 0x81. It has no other logic, local variables, or side effects. The
 *   role of toggle_bit_and_call_two_routines is unknown, so the specific behavior of this
 *   wrapper cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_0x81(void)

{
  toggle_bit_and_call_two_routines(0x81);
  return;
}
