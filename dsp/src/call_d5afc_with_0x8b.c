/* @k10d call_d5afc_with_0x8b @ 0x000d6194
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0x8b and returns.
 * summary:
 *   A one-line wrapper that forwards the immediate value 0x8b to
 *   toggle_bit_and_call_two_routines. No other side effects, globals, or MMIO accesses are
 *   visible in this function. The role of toggle_bit_and_call_two_routines is unknown, so
 *   the semantic meaning of 0x8b cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_d5afc_with_0x8b(void)

{
  toggle_bit_and_call_two_routines(0x8b);
  return;
}
