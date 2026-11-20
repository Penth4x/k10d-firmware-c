/* @k10d pack_two_byte_fields @ 0x000c9596
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Combines low nibble of one global with a shifted second global into a packed byte, and
 *   copies another global.
 * summary:
 *   Writes to DAT_0003c379 the bitwise OR of the low 4 bits of DAT_0003c474 and
 *   DAT_0003c47a shifted left by 5, packing two 5-bit fields into one byte. Also copies
 *   DAT_0003c477 into DAT_0003c37a. No callees; pure register/global manipulation with no
 *   MMIO or control flow.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void pack_two_byte_fields(void)

{
  DAT_0003c379 = DAT_0003c474 & 0xf | DAT_0003c47a << 5;
  DAT_0003c37a = DAT_0003c477;
  return;
}
