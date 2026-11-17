/* @k10d clear_byte_array_if_flag_unset @ 0x000d8628
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Zeroes a 16-byte region and 12 adjacent bytes in memory when bit 4 of a global flag is
 *   clear.
 * summary:
 *   Checks bit 4 (0x10) of DAT_0003f324. If the bit is not set, it performs a loop that
 *   writes zero to 16 bytes at offsets 0x3c6c0-0x3c6cf (relative to base 0), followed by
 *   zeroing 12 specific bytes at offsets 0x3c6e0-0x3c6f7. The function has no callees and
 *   only performs memory writes to these specific locations. The role of the data at these
 *   addresses is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_byte_array_if_flag_unset(void)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_0003f324 & 0x10) == 0) {
    iVar1 = 0;
    iVar2 = 4;
    do {
      *(uint8_t *)(iVar1 + 0x3c6c0) = 0;
      *(uint8_t *)(iVar1 + 0x3c6d0) = 0;
      *(uint8_t *)(iVar1 + 0x3c6c1) = 0;
      *(uint8_t *)(iVar1 + 0x3c6d1) = 0;
      *(uint8_t *)(iVar1 + 0x3c6c2) = 0;
      *(uint8_t *)(iVar1 + 0x3c6d2) = 0;
      *(uint8_t *)(iVar1 + 0x3c6c3) = 0;
      *(uint8_t *)(iVar1 + 0x3c6d3) = 0;
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (0 < iVar2);
    DAT_0003c6f7 = 0;
    DAT_0003c6e2 = 0;
    DAT_0003c6e3 = 0;
    DAT_0003c6f4 = 0;
    DAT_0003c6ea = 0;
    DAT_0003c6eb = 0;
    DAT_0003c6e8 = 0;
    DAT_0003c6e9 = 0;
    DAT_0003c6e0 = 0;
    DAT_0003c6e1 = 0;
    DAT_0003c6ec = 0;
    DAT_0003c6ed = 0;
  }
  return;
}
