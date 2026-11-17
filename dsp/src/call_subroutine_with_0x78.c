/* @k10d call_subroutine_with_0x78 @ 0x000d60f4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes toggle_bit_and_call_two_routines with the constant argument 0x78.
 * summary:
 *   This function is a one-line wrapper that calls toggle_bit_and_call_two_routines passing
 *   the immediate value 0x78. It has no other logic, local variables, or side effects
 *   beyond the callee's behavior. The role of toggle_bit_and_call_two_routines is not
 *   provided, so the specific effect of this call cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_0x78(void)

{
  toggle_bit_and_call_two_routines(0x78);
  return;
}
