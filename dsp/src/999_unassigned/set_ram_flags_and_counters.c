/* @k10d set_ram_flags_and_counters @ 0x000e0dd8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets specific bits in two RAM flags and initializes several adjacent RAM variables to
 *   fixed values.
 * summary:
 *   The function performs a series of direct writes to RAM addresses. It sets bit 6 of
 *   bRam00000000 and bits 0 and 2 of DAT_00000400. It then zeroes DAT_00000420,
 *   DAT_00000067, and DAT_00000060, while setting DAT_00000062 to 0x10 and DAT_00000063 to
 *   0xb2. No MMIO operations or function calls are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_ram_flags_and_counters(void)

{
  bRam00000000 = bRam00000000 | 0x40;
  DAT_00000400 = DAT_00000400 | 5;
  DAT_00000420 = 0;
  DAT_00000067 = 0;
  DAT_00000062 = 0x10;
  DAT_00000063 = 0xb2;
  DAT_00000060 = 0;
  return;
}
