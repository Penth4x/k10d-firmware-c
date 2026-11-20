/* @k10d initialize_seven_byte_globals @ 0x000d5bc2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets seven global byte variables to fixed initial values and modifies two bit flags.
 * summary:
 *   The function writes specific constants to DAT_000000c2, DAT_000000c0, DAT_000000c3,
 *   DAT_000000c7, and DAT_00000423. It also sets bit 1 of DAT_00000003 and sets bits 0 and
 *   1 of DAT_00000403. No callees are invoked, and the role of these specific globals is
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_seven_byte_globals(void)

{
  DAT_000000c2 = 0x10;
  DAT_000000c0 = 0;
  DAT_000000c3 = 0xb2;
  DAT_000000c7 = 0;
  DAT_00000003 = DAT_00000003 & 0xfe | 2;
  DAT_00000403 = DAT_00000403 | 3;
  DAT_00000423 = 0;
  return;
}
