/* @k10d clear_flags_and_dispatch @ 0x000c867c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears specific bits in two global byte variables and calls one of three subroutines
 *   based on two other global flags.
 * summary:
 *   The function masks DAT_0003c410 with 0xbf and DAT_0003c4db with 0xed, then zeroes
 *   DAT_0003c4a6. It checks DAT_0003c3c8 and DAT_0003c3ac to select which of three callees
 *   (compute_and_store_offset, compute_aligned_offset_and_call, or
 *   compute_clamped_offset_value_000c8826) to invoke. Finally, it copies the value of
 *   DAT_0003c484 into DAT_0003c485.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flags_and_dispatch(void)

{
  DAT_0003c410 = DAT_0003c410 & 0xbf;
  DAT_0003c4db = DAT_0003c4db & 0xed;
  DAT_0003c4a6 = 0;
  if (DAT_0003c3c8 == '\0') {
    compute_and_store_offset(__frv_reg_unset(4));
  }
  else if (DAT_0003c3ac == '\0') {
    compute_aligned_offset_and_call(__frv_reg_unset(4));
  }
  else {
    compute_clamped_offset_value_000c8826(__frv_reg_unset(4));
  }
  DAT_0003c485 = DAT_0003c484;
  return;
}
