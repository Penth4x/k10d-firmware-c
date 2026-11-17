/* @k10d call_d5afc_with_0x55 @ 0x000d6090
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0x55.
 * summary:
 *   This function is a one-line wrapper that invokes toggle_bit_and_call_two_routines
 *   passing the immediate value 0x55. It performs no other operations, has no visible side
 *   effects beyond those of the callee, and returns void. The role of
 *   toggle_bit_and_call_two_routines is unknown, so the semantic meaning of the 0x55
 *   argument cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_d5afc_with_0x55(void)

{
  toggle_bit_and_call_two_routines(0x55);
  return;
}
