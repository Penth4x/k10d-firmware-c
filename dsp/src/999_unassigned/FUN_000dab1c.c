/* @k10d FUN_000dab1c @ 0x000dab1c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000dab1c(void)

{
  if ((DAT_0003c492 == '\x04') && ((DAT_0003c181 & 0x40) != 0)) {
    update_ram_byte_bits(0xb);
    bRam00000000 = bRam00000000 | 8;
    DAT_0003c00c = DAT_0003c00c | 8;
  }
  DAT_00000420 = 0;
  call_e31d6_with_masked_dat();
  bRam00000000 = bRam00000000 & 0xbf;
  toggle_ram0_bit1_with_calls();
  toggle_ram0_bit1_with_calls();
  toggle_ram0_bit1_with_calls();
  toggle_ram0_bit1_with_calls();
  bRam00000000 = bRam00000000 | 0x40;
  return;
}
