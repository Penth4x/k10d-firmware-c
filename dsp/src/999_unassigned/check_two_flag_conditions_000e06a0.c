/* @k10d check_two_flag_conditions_000e06a0 @ 0x000e06a0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Tests specific bits in two global byte variables and conditionally calls one of two
 *   subroutines.
 * summary:
 *   The function checks if bit 5 of DAT_0003c127 and bit 7 of DAT_0003c128 are set. If so,
 *   it branches based on bit 1 of DAT_0003c12c and bit 0 of DAT_0003c02f, calling
 *   clear_bit2_and_bit7_flags or check_and_dispatch_state_flags depending on additional
 *   flags in DAT_0000000b and DAT_00000008. It returns the value of bits 2-3 of
 *   DAT_0000000b.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint check_two_flag_conditions_000e06a0(void)

{
  if (((DAT_0003c127 & 0x20) != 0) && ((DAT_0003c128 & 0x80) != 0)) {
    if (((DAT_0003c12c & 2) == 0) || ((DAT_0003c02f & 1) != 0)) {
      clear_bit2_and_bit7_flags();
    }
    else if ((DAT_0000000b & 4) == 0) {
      check_and_dispatch_state_flags();
    }
    else if ((DAT_00000008 & 4) != 0) {
      clear_bit2_and_bit7_flags();
    }
  }
  return (DAT_0000000b & 7) >> 2;
}
