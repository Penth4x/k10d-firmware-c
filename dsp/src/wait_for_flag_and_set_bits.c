/* @k10d wait_for_flag_and_set_bits @ 0x000daf30
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Writes configuration values to DAT_00000050-0x56, polls DAT_000000cf for bit 2, then
 *   sets bit 0 in two registers.
 * summary:
 *   Calls write_byte_to_ram_and_call_two_routines with a computed value derived from
 *   DAT_0003c00d. Sets DAT_00000050=0xff, DAT_00000056=0x82, DAT_000000c8=0x62,
 *   DAT_000000ce=2. Busy-waits until bit 2 of DAT_000000cf is set. Then sets bit 0 of
 *   DAT_00000057 and DAT_000000cf. Finally computes a 16-bit complement of half of
 *   DAT_00000052 into DAT_0003c57a. The role of these DAT globals is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_for_flag_and_set_bits(void)

{
  write_byte_to_ram_and_call_two_routines(0xc,DAT_0003c00d & 0x7c | 0x81);
  DAT_00000050 = 0xff;
  DAT_00000056 = 0x82;
  DAT_000000c8 = 0x62;
  DAT_000000ce = 2;
  do {
  } while ((DAT_000000cf & 4) == 0);
  DAT_00000057 = DAT_00000057 & 0xfd | 1;
  DAT_000000cf = DAT_000000cf & 0xfd | 1;
  _DAT_0003c57a = (short)(0xffffU - _DAT_00000052 >> 1);
  return;
}
