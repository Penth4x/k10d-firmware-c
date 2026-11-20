/* @k10d copy_and_update_flag_bytes @ 0x000c72dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Copies several byte values between adjacent DAT globals and conditionally sets or
 *   clears specific bits in two flag bytes.
 * summary:
 *   The function performs a series of byte-wise assignments from one DAT address to another
 *   (e.g., DAT_0003c440 to DAT_0003c441). It then updates bits 2 and 3 of DAT_0003c4d7
 *   based on bits 0 and 3 of DAT_0003c4de and DAT_0003c4df, respectively. Finally, it sets
 *   or clears bit 6 of DAT_0003c4db based on bit 4 of DAT_0003c394. No MMIO or external
 *   device interactions are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_and_update_flag_bytes(void)

{
  DAT_0003c441 = DAT_0003c440;
  DAT_0003c445 = DAT_0003c444;
  DAT_0003c472 = DAT_0003c471;
  DAT_0003c448 = DAT_0003c447;
  DAT_0003c44b = DAT_0003c44a;
  DAT_0003c462 = DAT_0003c461;
  DAT_0003c465 = DAT_0003c464;
  _DAT_0003c49c = _DAT_0003c126;
  DAT_0003c3cf = DAT_0003c390;
  if ((DAT_0003c4de & 1) == 0) {
    DAT_0003c4d7 = DAT_0003c4d7 & 0xfb;
  }
  else {
    DAT_0003c4d7 = DAT_0003c4d7 | 4;
  }
  if ((DAT_0003c4df & 8) == 0) {
    DAT_0003c4d7 = DAT_0003c4d7 & 0xf7;
  }
  else {
    DAT_0003c4d7 = DAT_0003c4d7 | 8;
  }
  if ((DAT_0003c394 & 0x10) == 0) {
    DAT_0003c4db = DAT_0003c4db & 0xbf;
  }
  else {
    DAT_0003c4db = DAT_0003c4db | 0x40;
  }
  return;
}
