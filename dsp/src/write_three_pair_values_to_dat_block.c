/* @k10d write_three_pair_values_to_dat_block @ 0x000dd42a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Writes three 16-bit value pairs into DAT_0003f3a0..0x3f3ac based on the low two bits of
 *   DAT_0003f362.
 * summary:
 *   The function branches on (DAT_0003f362 & 3). When the value is 0, it stores fixed
 *   constants (0x900/0x1e00, 0x900/0x1e00, 0xa00/0x1e00) into three consecutive 16-bit
 *   slots. When the value is 2, it derives the first element of each pair from bytes at
 *   DAT_0003f548..0x3f54a (masked with 0xf8 and shifted left 4) while keeping the second
 *   element at 0x1e00. No callees are invoked and no MMIO addresses are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_three_pair_values_to_dat_block(void)

{
  if ((DAT_0003f362 & 3) == 0) {
    _DAT_0003f3a0 = 0x900;
    _DAT_0003f3a2 = 0x1e00;
    _DAT_0003f3a4 = 0x133;
    _DAT_0003f3a6 = 0x900;
    _DAT_0003f3a8 = 0x1e00;
    _DAT_0003f3aa = 0x166;
    _DAT_0003f3ac = 0xa00;
    _DAT_0003f3ae = 0x1e00;
    _DAT_0003f38e = 0x166;
  }
  if ((DAT_0003f362 & 3) == 2) {
    _DAT_0003f3a0 = (DAT_0003f548 & 0xf8) << 4;
    _DAT_0003f3a6 = (DAT_0003f549 & 0xf8) << 4;
    _DAT_0003f3ac = (DAT_0003f54a & 0xf8) << 4;
    _DAT_0003f3a2 = 0x1e00;
    _DAT_0003f3a4 = 0x133;
    _DAT_0003f3a8 = 0x1e00;
    _DAT_0003f3aa = 0x166;
    _DAT_0003f3ae = 0x1e00;
    _DAT_0003f38e = 0x166;
  }
  return;
}
