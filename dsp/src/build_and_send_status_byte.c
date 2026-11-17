/* @k10d build_and_send_status_byte @ 0x000f6ec4
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Conditionally assembles a status byte from flag bits and sends it via
 *   send_two_byte_command_with_payload.
 * summary:
 *   Checks bit 6 of DAT_0003c128; if set, constructs a byte in DAT_0003c131 by combining
 *   bits from DAT_0003ce06, DAT_0003ce05, and DAT_0003cb80. If DAT_0003ce00 bit 6 is set,
 *   ORs in either 0x40 or 0x80 based on bit 3 of DAT_0003ce08. Finally calls
 *   send_two_byte_command_with_payload with parameters 0x89, 0x20, pointer to DAT_0003c131,
 *   and length 1, likely transmitting the assembled byte.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_send_status_byte(void)

{
  byte bVar1;
  
  if ((DAT_0003c128 & 0x40) != 0) {
    DAT_0003c131 = DAT_0003ce06 & 0x3c | (DAT_0003ce05 & 1) << 1 | DAT_0003cb80 & 1;
    if ((DAT_0003ce00 & 0x40) != 0) {
      if ((DAT_0003ce08 & 8) == 0) {
        bVar1 = 0x40;
      }
      else {
        bVar1 = 0x80;
      }
      DAT_0003c131 = DAT_0003c131 | bVar1;
    }
    send_two_byte_command_with_payload(0x89,0x20,(void *)&DAT_0003c131,1);
  }
  return;
}
