/* @k10d call_subroutine_with_arg_0x42 @ 0x000d5fd2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes toggle_bit_and_call_two_routines with the constant argument 0x42 and returns.
 * summary:
 *   The function is a one-line wrapper that passes the immediate value 0x42 to
 *   toggle_bit_and_call_two_routines. No other registers, memory, or globals are touched.
 *   The role of toggle_bit_and_call_two_routines is unknown, so the semantic meaning of
 *   0x42 cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subroutine_with_arg_0x42(void)

{
  toggle_bit_and_call_two_routines(0x42);
  return;
}
