/* @k10d call_subroutine_with_0x40 @ 0x000d5fc8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes toggle_bit_and_call_two_routines with the constant argument 0x40 and returns.
 * summary:
 *   This is a one-line wrapper that passes the immediate value 0x40 to
 *   toggle_bit_and_call_two_routines. No other registers, globals, or side effects are
 *   visible in the pseudocode. The role of toggle_bit_and_call_two_routines is unknown, so
 *   the semantic meaning of the 0x40 argument cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_0x40(void)

{
  toggle_bit_and_call_two_routines(0x40);
  return;
}
