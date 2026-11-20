/* @k10d poll_byte_until_change @ 0x000e11aa
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Polls a byte at DAT_0003c128 via poll_input_and_fill_buffer until it changes or a retry
 *   limit is reached.
 * summary:
 *   Checks bit 1 of DAT_00000008 as a gate. If set, it repeatedly calls
 *   poll_input_and_fill_buffer(0x82,5,&DAT_0003c128,1) up to two times, comparing the new
 *   value against the initial snapshot cVar1. After the loop, it calls
 *   poll_input_and_fill_buffer(0x82,1,&DAT_0003c12d,1) and
 *   update_low_nibble_if_flags_set(7). If bit 0 of DAT_0003c022 is set, it sets bit 3 of
 *   DAT_0003c130 and calls update_status_byte_and_send_000e1af0. The specific hardware or
 *   protocol role of the 0x82 command and the DAT globals is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void poll_byte_until_change(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = DAT_0003c128;
  if ((DAT_00000008 & 2) != 0) {
    iVar2 = 2;
    do {
      poll_input_and_fill_buffer(0x82,5,(void *)&DAT_0003c128,1);
      if (cVar1 == DAT_0003c128) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + -1;
      }
    } while (iVar2 != 0);
    poll_input_and_fill_buffer(0x82,1,(void *)&DAT_0003c12d,1);
    update_low_nibble_if_flags_set(7);
    if ((DAT_0003c022 & 1) != 0) {
      DAT_0003c130 = DAT_0003c130 | 8;
      update_status_byte_and_send_000e1af0();
    }
  }
  return;
}
