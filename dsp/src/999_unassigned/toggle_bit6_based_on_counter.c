/* @k10d toggle_bit6_based_on_counter @ 0x000ddc2a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Modifies bits 5 and 6 of DAT_0003c804 based on a comparison between DAT_0003f3b8 and
 *   DAT_0003c806.
 * summary:
 *   The function compares two global variables. If DAT_0003f3b8 is less than DAT_0003c806,
 *   it sets bit 6 (0x40) in DAT_0003c804; if bit 5 (0x20) is already set, it also sets bit
 *   7 (0x80) and returns early. Otherwise, it clears bit 6. The final value is masked with
 *   0x7f, clearing bit 7. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_bit6_based_on_counter(void)

{
  byte bVar1;
  
  if (_DAT_0003f3b8 < _DAT_0003c806) {
    bVar1 = DAT_0003c804 | 0x40;
    if ((DAT_0003c804 & 0x20) != 0) {
      DAT_0003c804 = DAT_0003c804 | 0xc0;
      return;
    }
  }
  else {
    bVar1 = DAT_0003c804 & 0xbf;
  }
  DAT_0003c804 = bVar1 & 0x7f;
  return;
}
