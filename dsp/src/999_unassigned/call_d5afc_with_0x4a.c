/* @k10d call_d5afc_with_0x4a @ 0x000d6022
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls toggle_bit_and_call_two_routines with the constant argument 0x4a.
 * summary:
 *   This function is a one-line wrapper that invokes toggle_bit_and_call_two_routines
 *   passing the immediate value 0x4a. It has no other logic, local state, or side effects
 *   beyond that single call. The role of toggle_bit_and_call_two_routines is not provided,
 *   so the broader purpose cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_d5afc_with_0x4a(void)

{
  toggle_bit_and_call_two_routines(0x4a);
  return;
}
