/* @k10d check_and_set_state_flag_000e01b0 @ 0x000e01b0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Evaluates multiple bit flags in global state variables and conditionally sets a
 *   specific bit in DAT_0003c123.
 * summary:
 *   The function checks a combination of bits in DAT_0003c127, DAT_0003c128, DAT_0003c023,
 *   and DAT_0003c12c. If the initial conditions are met and DAT_0003c12c bit 5 is set, it
 *   calls check_and_dispatch_state_flags. If that returns 1 and DAT_0003c123 bit 6 is
 *   clear, it calls dispatch_event_if_enabled_000e1470, wait_for_status_bit_clear_000e042c,
 *   and clear_bit2_and_bit7_flags, then sets bit 6 of DAT_0003c123. Otherwise, if
 *   DAT_0003c12c bit 5 is clear, it clears bit 6 of DAT_0003c123.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_set_state_flag_000e01b0(void)

{
  int iVar1;
  
  if ((((DAT_0003c127 & 0x20) != 0) && ((DAT_0003c128 & 0x80) != 0)) && ((DAT_0003c023 & 1) == 0)) {
    if ((DAT_0003c12c & 0x20) == 0) {
      DAT_0003c123 = DAT_0003c123 & 0xbf;
    }
    else if (((DAT_0003c123 & 0x40) == 0) && (iVar1 = check_and_dispatch_state_flags(), iVar1 == 1)) {
      dispatch_event_if_enabled_000e1470(199);
      wait_for_status_bit_clear_000e042c();
      clear_bit2_and_bit7_flags();
      DAT_0003c123 = DAT_0003c123 | 0x40;
    }
  }
  return;
}
