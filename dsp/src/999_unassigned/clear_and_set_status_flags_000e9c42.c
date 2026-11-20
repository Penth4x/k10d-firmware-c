/* @k10d clear_and_set_status_flags_000e9c42 @ 0x000e9c42
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Resets a global counter, clears bit 0 of a status word, and sets bits in two other
 *   global variables.
 * summary:
 *   The function writes 0 to DAT_00000420, clears the least significant bit of
 *   bRam00000000, calls wait_if_flag_is_two, then clears bit 0 of DAT_0000040a, sets bits 1
 *   and 2 of bRam00000000, sets bit 0 of DAT_00000400, and writes 0x10 to DAT_00000062. The
 *   specific roles of these globals are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_and_set_status_flags_000e9c42(void)

{
  DAT_00000420 = 0;
  bRam00000000 = bRam00000000 & 0x7f;
  wait_if_flag_is_two();
  DAT_0000040a = DAT_0000040a & 0xfe;
  bRam00000000 = bRam00000000 | 6;
  DAT_00000400 = DAT_00000400 | 1;
  DAT_00000062 = 0x10;
  return;
}
