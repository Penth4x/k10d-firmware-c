/* @k10d map_mode_byte_to_value @ 0x000e7484
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Maps a 3-state selector byte to a specific value and stores it with a derived half-
 *   value.
 * summary:
 *   Reads the byte at DAT_0003c3b7 and sets DAT_0003c05a to 0x50, 0x18, or 0xf0 based on
 *   whether the input is 0, 1, or 2, defaulting to 0x50 for other values. It then stores
 *   the upper 7 bits of DAT_0003c05a into DAT_0003c05b. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_mode_byte_to_value(void)

{
  if (DAT_0003c3b7 == '\0') {
    DAT_0003c05a = 0x50;
  }
  else if (DAT_0003c3b7 == '\x01') {
    DAT_0003c05a = 0x18;
  }
  else if (DAT_0003c3b7 == '\x02') {
    DAT_0003c05a = 0xf0;
  }
  else {
    DAT_0003c05a = 0x50;
  }
  DAT_0003c05b = (char)((int)(uint)DAT_0003c05a >> 1);
  return;
}
