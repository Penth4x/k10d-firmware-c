/* @k10d call_subroutine_with_arg_0x56 @ 0x000d609a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0x56.
 * summary:
 *   A one-line wrapper that invokes toggle_bit_and_call_two_routines passing the immediate
 *   value 0x56. No other operations, side effects, or state changes are visible in this
 *   function. The role of toggle_bit_and_call_two_routines is unknown, so the overall
 *   purpose cannot be determined beyond the mechanical call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_arg_0x56(void)

{
  toggle_bit_and_call_two_routines(0x56);
  return;
}
