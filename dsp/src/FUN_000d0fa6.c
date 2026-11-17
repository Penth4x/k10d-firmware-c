/* @k10d FUN_000d0fa6 @ 0x000d0fa6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000d0fa6(uint16_t param_1)

{
  DAT_00000400 = DAT_00000400 | 0x1f;
  DAT_00000062 = 0x10;
  update_ram_byte_bits(0xb);
  bRam00000000 = (bRam00000000 & 0xe0 | 0x60) & 0xbf | 0x14;
  write_two_byte_status_pair(param_1);
  bRam00000000 = bRam00000000 & 0xfb | 0x40;
  return;
}
