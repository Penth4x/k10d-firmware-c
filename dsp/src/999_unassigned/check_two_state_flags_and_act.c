/* @k10d check_two_state_flags_and_act @ 0x000e0238
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Evaluates two independent bit-flag conditions and calls associated handlers if they are
 *   newly satisfied.
 * summary:
 *   The function checks a primary gate condition involving DAT_0003c127, DAT_0003c114, and
 *   DAT_0003c023. If passed, it tests two sub-conditions: one involving DAT_0003c130 and
 *   another involving DAT_0003c128 and DAT_0003c12d. For each sub-condition that is met and
 *   not already flagged, it calls clear_bit7_and_call_helper, sets a specific bit in a
 *   state variable (DAT_0003c130 or DAT_0003c123), and calls a secondary handler
 *   (update_status_byte_and_send_000e1b62 or check_key_enabled_and_dispatch). Finally, it
 *   calls wait_for_flag_clear_with_timeout or wait_for_status_bit_clear_000e042c based on
 *   which sub-condition was triggered.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_two_state_flags_and_act(void)

{
  bool bVar1;
  bool bVar2;
  
  if ((((DAT_0003c127 & 0x80) != 0) && ((DAT_0003c114 & 0x40) != 0)) && ((DAT_0003c023 & 1) == 0)) {
    bVar1 = false;
    if (((DAT_0003c130 & 0x80) == 0) && ((DAT_0003c02f & 1) == 0)) {
      clear_bit7_and_call_helper();
      DAT_0003c130 = DAT_0003c130 | 0x80;
      update_status_byte_and_send_000e1b62();
      bVar1 = true;
    }
    bVar2 = false;
    if ((DAT_0003c128 & 0x80) != 0) {
      if ((DAT_0003c12d & 4) == 0) {
        DAT_0003c123 = DAT_0003c123 & 0xbf;
      }
      else if (((DAT_0003c123 & 0x40) == 0) && ((DAT_0003c02f & 1) == 0)) {
        clear_bit7_and_call_helper();
        check_key_enabled_and_dispatch(0xda);
        DAT_0003c123 = DAT_0003c123 | 0x40;
        bVar2 = true;
      }
    }
    if (bVar1) {
      wait_for_flag_clear_with_timeout();
    }
    if (bVar2) {
      wait_for_status_bit_clear_000e042c();
    }
  }
  return;
}
