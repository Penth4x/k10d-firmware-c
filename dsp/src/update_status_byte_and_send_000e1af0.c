/* @k10d update_status_byte_and_send_000e1af0 @ 0x000e1af0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Conditionally sets or clears bits 4, 5, and 6 of DAT_0003c130 based on other status
 *   flags, then sends the byte via send_two_byte_command_with_payload.
 * summary:
 *   The function checks a combination of flags in DAT_0003c126, DAT_0003c143, and
 *   DAT_00000008. If the condition is met, it modifies bits 0x10, 0x20, and 0x40 of
 *   DAT_0003c130 based on the state of DAT_0003c193, DAT_0003c021, DAT_0003c030, and
 *   DAT_0003ce00. Finally, it calls send_two_byte_command_with_payload with parameters
 *   0x89, 0x26, a pointer to DAT_0003c130, and 1, suggesting it transmits the updated
 *   status byte.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_byte_and_send_000e1af0(void)

{
  if ((((DAT_0003c126 & 0x20) != 0) && ((DAT_0003c143 & 0x40) != 0)) || ((DAT_00000008 & 2) != 0)) {
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
  send_two_byte_command_with_payload(0x89,0x26,(void *)&DAT_0003c130,1);
  return;
}
