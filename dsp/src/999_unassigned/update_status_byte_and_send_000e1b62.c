/* @k10d update_status_byte_and_send_000e1b62 @ 0x000e1b62
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Conditionally sets or clears bits 4, 5, and 6 of a status byte based on other flags,
 *   then sends it via a helper function.
 * summary:
 *   The function checks bit 7 of DAT_0003c127. If set, it modifies bits 4, 5, and 6 of
 *   DAT_0003c130 based on the state of DAT_0003c193, DAT_0003c021, DAT_0003c030, and
 *   DAT_0003ce00. It then calls check_key_and_dispatch with arguments 0xb0 and the updated
 *   value of DAT_0003c130. The specific meaning of the DAT globals and the helper function
 *   is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_byte_and_send_000e1b62(void)

{
  if ((DAT_0003c127 & 0x80) != 0) {
    if (((DAT_0003c193 & 0x80) == 0) && ((DAT_0003c021 & 2) == 0)) {
      DAT_0003c130 = DAT_0003c130 & 0xef;
    }
    else {
      DAT_0003c130 = DAT_0003c130 | 0x10;
    }
    if ((DAT_0003c030 & 1) == 0) {
      DAT_0003c130 = DAT_0003c130 | 0x20;
    }
    else {
      DAT_0003c130 = DAT_0003c130 & 0xdf;
    }
    if ((DAT_0003ce00 & 0x40) == 0) {
      DAT_0003c130 = DAT_0003c130 & 0xbf;
    }
    else {
      DAT_0003c130 = DAT_0003c130 | 0x40;
    }
  }
  check_key_and_dispatch(0xb0,DAT_0003c130);
  return;
}
