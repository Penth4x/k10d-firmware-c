/* @k10d write_ram_config_bytes @ 0x000f30e6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Writes a fixed set of values to low RAM globals and adjusts two bit flags.
 * summary:
 *   Sets DAT_00000063, DAT_00000062, DAT_00000060, DAT_00000420, and DAT_00000067 to
 *   constants. Sets _DAT_00000064 to 0x1f or 3 based on bits 0-1 of DAT_00000484. Clears
 *   bit 2 of DAT_00000400 and bit 6 of bRam00000000. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_ram_config_bytes(void)

{
  DAT_00000063 = 0xb2;
  DAT_00000062 = 0x13;
  DAT_00000060 = 4;
  if ((DAT_00000484 & 3) == 2) {
    _DAT_00000064 = 0x1f;
  }
  else {
    _DAT_00000064 = 3;
  }
  DAT_00000420 = 6;
  DAT_00000067 = 2;
  DAT_00000400 = DAT_00000400 & 0xfe | 4;
  bRam00000000 = bRam00000000 & 0xbf;
  return;
}
