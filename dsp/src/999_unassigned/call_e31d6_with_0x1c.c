/* @k10d call_e31d6_with_0x1c @ 0x000ed850
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls write_masked_field_and_call_two_routines with arguments 0x1c and DAT_0003c00d.
 * summary:
 *   This function is a thin wrapper that invokes write_masked_field_and_call_two_routines,
 *   passing the constant 0x1c as the first argument and the global DAT_0003c00d as the
 *   second. It returns immediately after the call. The specific role of
 *   write_masked_field_and_call_two_routines and the meaning of the arguments are not
 *   determinable from the provided pseudocode and callee list.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_e31d6_with_0x1c(void)

{
  write_masked_field_and_call_two_routines(0x1c,DAT_0003c00d);
  return;
}
