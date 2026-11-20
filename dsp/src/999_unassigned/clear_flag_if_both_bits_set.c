/* @k10d clear_flag_if_both_bits_set @ 0x000e054a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears bit 3 of DAT_0003c130 and calls update_status_byte_and_send_000e1af0 if specific
 *   bits in two other globals are set.
 * summary:
 *   Checks if bit 5 of DAT_0003c126 and bit 6 of DAT_0003c143 are both set. If true, it
 *   clears bit 3 of DAT_0003c130 (via AND with 0xf7) and invokes
 *   update_status_byte_and_send_000e1af0. The role of the globals and the callee is
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_if_both_bits_set(void)

{
  if (((DAT_0003c126 & 0x20) != 0) && ((DAT_0003c143 & 0x40) != 0)) {
    DAT_0003c130 = DAT_0003c130 & 0xf7;
    update_status_byte_and_send_000e1af0();
  }
  return;
}
