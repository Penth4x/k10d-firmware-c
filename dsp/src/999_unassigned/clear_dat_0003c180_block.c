/* @k10d clear_dat_0003c180_block @ 0x000c2028
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Masks specific bits in DAT_0003c180/181/186 and zeroes the remaining bytes in the
 *   0x0003c180-0x0003c18c range.
 * summary:
 *   The function performs bitwise AND operations on DAT_0003c180 (keeping bit 3),
 *   DAT_0003c181 (keeping bits 6-7), and DAT_0003c186 (keeping bits 6-7). It then sets
 *   DAT_0003c182 through DAT_0003c185 and DAT_0003c187 through DAT_0003c18c to zero. No
 *   callees are invoked, and the role of the DAT_0003c180 block is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_dat_0003c180_block(void)

{
  DAT_0003c180 = DAT_0003c180 & 8;
  DAT_0003c181 = DAT_0003c181 & 0xc0;
  DAT_0003c186 = DAT_0003c186 & 0xc0;
  DAT_0003c182 = 0;
  DAT_0003c183 = 0;
  DAT_0003c184 = 0;
  DAT_0003c185 = 0;
  DAT_0003c187 = 0;
  DAT_0003c188 = 0;
  DAT_0003c189 = 0;
  DAT_0003c18a = 0;
  DAT_0003c18b = 0;
  DAT_0003c18c = 0;
  return;
}
