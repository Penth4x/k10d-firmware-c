/* @k10d clear_and_set_state_flags @ 0x000e7300
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Resets specific bits in multiple DAT globals and sets other bits to update internal
 *   state.
 * summary:
 *   The function performs a series of bitwise operations on several DAT_0003cxxx globals.
 *   It clears bits 0 and 1 of DAT_0003c024 and DAT_0003c028, conditionally modifies
 *   DAT_0003c022 and DAT_0003c02b based on bit 6 of DAT_0003c022, clears bits 1 and 2 of
 *   DAT_0003c330 if bit 4 is clear, sets bits 2 and 3 of DAT_0003c066, clears bit 3 of
 *   DAT_0003c038, sets bit 7 of DAT_0003c4d1, and sets bits 4 and 5 of DAT_0003c022. No
 *   callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_and_set_state_flags(void)

{
  DAT_0003c028 = 0;
  _DAT_0003c024 = 0;
  if ((DAT_0003c022 & 0x40) == 0) {
    DAT_0003c022 = DAT_0003c022 & 0x7f;
  }
  else {
    DAT_0003c02b = DAT_0003c02b & 0xbf;
    DAT_0003c022 = DAT_0003c022 & 0xbf | 0x80;
  }
  if ((DAT_0003c330 & 0x10) == 0) {
    if ((DAT_0003c330 & 2) != 0) {
      DAT_0003c330 = DAT_0003c330 & 0xfd;
    }
    if ((DAT_0003c330 & 4) != 0) {
      DAT_0003c330 = DAT_0003c330 & 0xfb;
    }
  }
  DAT_0003c066 = DAT_0003c066 | 0xc;
  DAT_0003c038 = DAT_0003c038 & 0xdb;
  DAT_0003c4d1 = DAT_0003c4d1 | 0x80;
  DAT_0003c022 = DAT_0003c022 | 0x30;
  return;
}
