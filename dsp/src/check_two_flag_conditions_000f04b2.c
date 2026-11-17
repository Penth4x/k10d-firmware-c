/* @k10d check_two_flag_conditions_000f04b2 @ 0x000f04b2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Tests two bit flags in DAT_0003c066 and one in DAT_0003c395, calling
 *   call_d5afc_with_0x7a if all match.
 * summary:
 *   The function checks that bit 1 of DAT_0003c066 is clear, bit 0 is set, and bit 5 of
 *   DAT_0003c395 is clear. If all three conditions hold, it invokes call_d5afc_with_0x7a.
 *   No other side effects or state modifications are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_two_flag_conditions_000f04b2(void)

{
  if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) {
    call_d5afc_with_0x7a();
  }
  return;
}
