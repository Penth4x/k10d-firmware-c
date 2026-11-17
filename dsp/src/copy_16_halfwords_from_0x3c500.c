/* @k10d copy_16_halfwords_from_0x3c500 @ 0x000f0dcc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies 16 consecutive 16-bit words from 0x3c500 to 0x3c2ca in reverse order.
 * summary:
 *   The function performs a 16-iteration loop that reads a 16-bit value from the source
 *   region starting at 0x3c500 and writes it to the destination region starting at 0x3c2ca.
 *   The loop counter is decremented from 0x10 to 0, and the memory offsets are calculated
 *   using the current counter value, resulting in a reverse-order copy of the 16 halfwords.
 *   No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_16_halfwords_from_0x3c500(void)

{
  uint uVar1;
  
  uVar1 = 0x10;
  do {
    uVar1 = uVar1 - 1 & 0xffff;
    *(uint16_t *)(&DAT_0003c2ca + uVar1 * 2) = *(uint16_t *)(uVar1 * 2 + 0x3c500);
  } while (uVar1 != 0);
  return;
}
