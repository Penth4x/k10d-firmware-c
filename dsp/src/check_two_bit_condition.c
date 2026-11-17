/* @k10d check_two_bit_condition @ 0x000f05b4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Tests two bits in DAT_0003c066 and one bit in DAT_0003c395, calling
 *   call_subroutine_with_0x40 if the pattern matches.
 * summary:
 *   The function checks that bit 1 of DAT_0003c066 is clear, bit 0 is set, and bit 5 of
 *   DAT_0003c395 is clear. If all three conditions hold, it invokes
 *   call_subroutine_with_0x40. No other side effects or state modifications are visible in
 *   the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_two_bit_condition(void)

{
  if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) {
    call_subroutine_with_0x40();
  }
  return;
}
