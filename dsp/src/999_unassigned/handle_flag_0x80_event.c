/* @k10d handle_flag_0x80_event @ 0x000e056c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks bit 7 of DAT_0003c127 and, if set, clears bit 3 of DAT_0003c130 and calls three
 *   helper functions.
 * summary:
 *   The function tests bit 7 (0x80) of the global byte DAT_0003c127. If the bit is set, it
 *   calls check_key_enabled_and_dispatch with argument 0xd1, clears bit 3 (0x08) of
 *   DAT_0003c130, and calls update_status_byte_and_send_000e1b62. It then conditionally
 *   calls wait_for_flag_clear_with_timeout if bit 6 (0x40) of DAT_0003c114 is set. The
 *   specific roles of the DAT globals and callee functions are not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void handle_flag_0x80_event(void)

{
  if ((DAT_0003c127 & 0x80) != 0) {
    check_key_enabled_and_dispatch(0xd1);
    DAT_0003c130 = DAT_0003c130 & 0xf7;
    update_status_byte_and_send_000e1b62();
    if ((DAT_0003c114 & 0x40) != 0) {
      wait_for_flag_clear_with_timeout();
    }
  }
  return;
}
