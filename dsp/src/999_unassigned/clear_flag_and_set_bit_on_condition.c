/* @k10d clear_flag_and_set_bit_on_condition @ 0x000e0202
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears bit 5 of DAT_00000403 and sets bit 4 of DAT_00000503 when two specific bits in
 *   DAT_0003c126 and DAT_0003c143 are set.
 * summary:
 *   The function checks if bit 5 of DAT_0003c126 and bit 6 of DAT_0003c143 are both set. If
 *   so, it clears bit 5 of DAT_00000403 and sets bit 4 of DAT_00000503. It then checks bit
 *   1 of DAT_00000008; if set, it sets bit 7 of DAT_0003c130 and calls
 *   update_status_byte_and_send_000e1af0. The roles of the DAT globals are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_set_bit_on_condition(void)

{
  if (((DAT_0003c126 & 0x20) != 0) && ((DAT_0003c143 & 0x40) != 0)) {
    DAT_00000403 = DAT_00000403 & 0xef;
    DAT_00000503 = DAT_00000503 | 0x10;
    if ((DAT_00000008 & 2) != 0) {
      DAT_0003c130 = DAT_0003c130 | 0x80;
      update_status_byte_and_send_000e1af0();
    }
  }
  return;
}
