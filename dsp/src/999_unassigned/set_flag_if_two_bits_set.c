/* @k10d set_flag_if_two_bits_set @ 0x000e0506
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets bit 3 of DAT_0003c130 and calls update_status_byte_and_send_000e1af0 when bits 5
 *   and 6 of two other globals are set.
 * summary:
 *   Checks bit 5 of DAT_0003c126 and bit 6 of DAT_0003c143. If both are set, it ORs value 8
 *   into DAT_0003c130 and invokes update_status_byte_and_send_000e1af0. The roles of the
 *   DAT globals and the callee are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_if_two_bits_set(void)

{
  if (((DAT_0003c126 & 0x20) != 0) && ((DAT_0003c143 & 0x40) != 0)) {
    DAT_0003c130 = DAT_0003c130 | 8;
    update_status_byte_and_send_000e1af0();
  }
  return;
}
