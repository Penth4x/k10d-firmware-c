/* @k10d call_subroutine_with_arg_0x92 @ 0x000d61da
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0x92.
 * summary:
 *   The function is a one-line wrapper that invokes toggle_bit_and_call_two_routines
 *   passing the immediate value 0x92. No other operations, memory accesses, or side effects
 *   are visible in the pseudocode. The role of toggle_bit_and_call_two_routines is unknown,
 *   so the overall purpose cannot be determined beyond the mechanical call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_arg_0x92(void)

{
  toggle_bit_and_call_two_routines(0x92);
  return;
}
