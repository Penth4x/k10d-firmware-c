/* @k10d dispatch_on_byte_flag_000d7774 @ 0x000d7774
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Reads a one-byte flag and branches to clear or set low bits of a global, or calls one
 *   of two helpers.
 * summary:
 *   The function inspects DAT_0003c3f7. If it is 0, it clears the low two bits of
 *   DAT_00000002 and calls clear_bit_3_of_global_a. If 1 or 2, it sets bit 0 or bit 1 of
 *   DAT_00000002 respectively. If 3, it calls set_bit5_in_global_flag. No other values are
 *   handled.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_byte_flag_000d7774(void)

{
  if (DAT_0003c3f7 == '\0') {
    DAT_00000002 = DAT_00000002 & 0xfc;
    clear_bit_3_of_global_a();
  }
  else if (DAT_0003c3f7 == '\x01') {
    DAT_00000002 = DAT_00000002 | 1;
  }
  else if (DAT_0003c3f7 == '\x02') {
    DAT_00000002 = DAT_00000002 | 2;
  }
  else if (DAT_0003c3f7 == '\x03') {
    set_bit5_in_global_flag();
  }
  return;
}
