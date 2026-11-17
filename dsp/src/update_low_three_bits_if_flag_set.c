/* @k10d update_low_three_bits_if_flag_set @ 0x000e0672
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Merges the low 3 bits of param_1 into DAT_0003c130 if bit 7 of DAT_0003c127 is set,
 *   then calls update_status_byte_and_send_000e1b62.
 * summary:
 *   Checks bit 7 of the global DAT_0003c127. If set, it preserves the upper 5 bits of
 *   DAT_0003c130 and replaces the lower 3 bits with the lower 3 bits of param_1. It then
 *   invokes update_status_byte_and_send_000e1b62. The specific roles of the globals and the
 *   callee are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_low_three_bits_if_flag_set(byte param_1)

{
  if ((DAT_0003c127 & 0x80) != 0) {
    DAT_0003c130 = DAT_0003c130 & 0xf8 | param_1 & 7;
    update_status_byte_and_send_000e1b62();
  }
  return;
}
