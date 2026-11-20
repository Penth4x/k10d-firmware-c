/* @k10d call_d5afc_with_0x8c @ 0x000d619e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes toggle_bit_and_call_two_routines with the constant argument 0x8c and returns.
 * summary:
 *   This function is a thin wrapper that passes the immediate value 0x8c to
 *   toggle_bit_and_call_two_routines. It has no other logic, side effects, or state
 *   modifications. The role of toggle_bit_and_call_two_routines is unknown, so the specific
 *   behavior of this wrapper cannot be determined beyond the call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_d5afc_with_0x8c(void)

{
  toggle_bit_and_call_two_routines(0x8c);
  return;
}
