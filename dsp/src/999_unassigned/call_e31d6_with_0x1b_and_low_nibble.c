/* @k10d call_e31d6_with_0x1b_and_low_nibble @ 0x000ed822
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Calls write_masked_field_and_call_two_routines with constant 0x1b and the low nibble of
 *   DAT_0003c00c.
 * summary:
 *   The function extracts the lower 4 bits of the global DAT_0003c00c and passes them as
 *   the second argument to write_masked_field_and_call_two_routines, along with the
 *   constant 0x1b. It performs no other operations and returns immediately. The role of
 *   write_masked_field_and_call_two_routines and DAT_0003c00c is not specified in the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_e31d6_with_0x1b_and_low_nibble(void)

{
  write_masked_field_and_call_two_routines(0x1b,DAT_0003c00c & 0xf);
  return;
}
