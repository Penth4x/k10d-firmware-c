/* @k10d clear_status_flag_bytes_000f329e @ 0x000f329e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Zeroes a set of byte fields in two DAT blocks while preserving specific bits in two
 *   others.
 * summary:
 *   The function writes zero to a series of consecutive bytes at DAT_0003c4d0 through
 *   DAT_0003c4d7, DAT_0003c4db, DAT_0003c4de, DAT_0003c4df, DAT_0003c37d, and DAT_0003c37e.
 *   It masks DAT_0003c4d5 with 0x20 and DAT_0003c330 with 0xcf, clearing all other bits in
 *   those bytes. No MMIO writes or function calls are made; the role of the DAT globals is
 *   not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_status_flag_bytes_000f329e(void)

{
  DAT_0003c4d0 = 0;
  DAT_0003c4d1 = 0;
  DAT_0003c4d2 = 0;
  DAT_0003c4d3 = 0;
  DAT_0003c4d4 = 0;
  DAT_0003c4d5 = DAT_0003c4d5 & 0x20;
  DAT_0003c4d6 = 0;
  DAT_0003c4d7 = 0;
  DAT_0003c4db = 0;
  DAT_0003c4de = 0;
  DAT_0003c4df = 0;
  DAT_0003c37d = 0;
  DAT_0003c37e = 0;
  DAT_0003c330 = DAT_0003c330 & 0xcf;
  return;
}
