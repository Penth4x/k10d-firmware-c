/* @k10d call_subroutine_with_arg_0x4e @ 0x000d604a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0x4e.
 * summary:
 *   This function is a thin wrapper that invokes toggle_bit_and_call_two_routines passing
 *   the immediate value 0x4e. It has no other logic, side effects, or state manipulation.
 *   The role of toggle_bit_and_call_two_routines is unknown, so the specific behavior of
 *   this call cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_arg_0x4e(void)

{
  toggle_bit_and_call_two_routines(0x4e);
  return;
}
