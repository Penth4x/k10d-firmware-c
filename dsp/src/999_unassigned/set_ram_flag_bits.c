/* @k10d set_ram_flag_bits @ 0x000db25c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets bits 2 and 6 of the bRam00000000 byte around a call to call_d5678_with_0x14.
 * summary:
 *   The function modifies the global byte bRam00000000 by clearing and setting specific
 *   bits: first it sets bit 2 (value 4) while preserving other bits, then calls the
 *   unverified function call_d5678_with_0x14, and finally sets bit 6 (value 0x40) while
 *   preserving other bits. The role of bRam00000000 and call_d5678_with_0x14 is not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_ram_flag_bits(void)

{
  bRam00000000 = bRam00000000 & 0xbf | 4;
  call_d5678_with_0x14();
  bRam00000000 = bRam00000000 & 0xfb | 0x40;
  return;
}
