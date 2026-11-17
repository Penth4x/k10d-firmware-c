/* @k10d call_subroutine_with_0x58 @ 0x000d60ae
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Invokes toggle_bit_and_call_two_routines with the constant argument 0x58.
 * summary:
 *   This function is a one-line wrapper that calls toggle_bit_and_call_two_routines passing
 *   the immediate value 0x58. It has no other logic, local variables, or side effects
 *   beyond the callee's behavior. The role of toggle_bit_and_call_two_routines is not
 *   provided, so the specific effect of this call cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_0x58(void)

{
  toggle_bit_and_call_two_routines(0x58);
  return;
}
