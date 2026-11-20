/* @k10d clear_status_flag_bits_000e63c2 @ 0x000e63c2
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Clears specific bits in several status/control words and zeroes a small group of
 *   counters.
 * summary:
 *   Calls clear_flag_and_run_cleanup, then clears bit 2 of DAT_0003c32c and bit 2 of
 *   DAT_0003c066. It zeroes DAT_000000f6, DAT_0003c072, DAT_0003c073, and DAT_0003c074. If
 *   bit 5 of DAT_0003c030 is set, it also zeroes _DAT_0003c398.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_status_flag_bits_000e63c2(void)

{
  clear_flag_and_run_cleanup();
  DAT_000000f6 = 0;
  DAT_0003c32c = DAT_0003c32c & 0xfd;
  DAT_0003c066 = DAT_0003c066 & 0xcf;
  DAT_0003c072 = 0;
  DAT_0003c073 = 0;
  DAT_0003c074 = 0;
  if ((DAT_0003c030 & 0x20) != 0) {
    _DAT_0003c398 = 0;
  }
  return;
}
