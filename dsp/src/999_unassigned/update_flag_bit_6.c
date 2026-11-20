/* @k10d update_flag_bit_6 @ 0x000f6030
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Conditionally sets or clears bit 6 of the byte at DAT_0003c4b5 based on bits in
 *   DAT_0003c4d0 and DAT_0003c4d3.
 * summary:
 *   The function reads DAT_0003c4b5 and conditionally modifies bit 6 (0x40) based on the
 *   state of bit 5 (0x20) in DAT_0003c4d0 and bit 4 (0x10) in DAT_0003c4d3. If specific
 *   conditions are met, it sets bit 6; otherwise, it clears it. The result is written back
 *   to DAT_0003c4b5. No other side effects or callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_flag_bit_6(void)

{
  byte bVar1;
  
  if (((((DAT_0003c4d0 & 0x20) != 0) || (bVar1 = DAT_0003c4b5, (DAT_0003c4d3 & 0x10) != 0)) &&
      (bVar1 = DAT_0003c4b5 | 0x40, (DAT_0003c4d0 & 0x20) != 0)) &&
     (((DAT_0003c4d3 & 0x10) != 0 && ((DAT_0003c028 & 4) == 0)))) {
    bVar1 = DAT_0003c4b5 & 0xbf;
  }
  DAT_0003c4b5 = bVar1;
  return;
}
