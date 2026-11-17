/* @k10d clear_status_flag_bytes_000e86ce @ 0x000e86ce
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Zeroes a block of 7 bytes and clears specific bits in three adjacent flag bytes.
 * summary:
 *   The function writes zero to DAT_0003c390 through DAT_0003c396. It then clears bit 5 of
 *   DAT_0003c067, bit 7 of DAT_0003c07e, and bit 4 of DAT_0003c07f. If bit 0 of
 *   DAT_0003c02f is set, it additionally zeroes DAT_0003c3ab and DAT_0003c082. It finally
 *   zeroes DAT_0003c081. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_status_flag_bytes_000e86ce(void)

{
  DAT_0003c390 = 0;
  DAT_0003c391 = 0;
  DAT_0003c392 = 0;
  DAT_0003c393 = 0;
  DAT_0003c394 = 0;
  DAT_0003c395 = 0;
  DAT_0003c396 = 0;
  DAT_0003c067 = DAT_0003c067 & 0xef;
  DAT_0003c07e = DAT_0003c07e & 0x7f;
  if ((DAT_0003c02f & 1) != 0) {
    DAT_0003c3ab = 0;
    DAT_0003c082 = 0;
  }
  DAT_0003c07f = DAT_0003c07f & 0xdf;
  DAT_0003c081 = 0;
  return;
}
