/* @k10d call_d5afc_with_0xc1 @ 0x000d63a4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes toggle_bit_and_call_two_routines with the constant argument 0xc1 and returns.
 * summary:
 *   The function is a one-line wrapper that passes the immediate value 0xc1 to
 *   toggle_bit_and_call_two_routines. No other registers, memory, or state are touched. The
 *   role of toggle_bit_and_call_two_routines is unknown, so the semantic meaning of this
 *   call cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_d5afc_with_0xc1(void)

{
  toggle_bit_and_call_two_routines(0xc1);
  return;
}
