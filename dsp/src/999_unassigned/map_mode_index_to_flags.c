/* @k10d map_mode_index_to_flags @ 0x000c91a8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Maps a mode index from DAT_0003c447 to a bitmask in DAT_0003c376 and ORs in two
 *   additional status bits.
 * summary:
 *   The function uses a switch statement on DAT_0003c447 to assign a specific bitmask value
 *   (0, 1, 4, 8, 0x20, or 0x10) to DAT_0003c376. It then checks bit 5 of DAT_0003c4d0 and
 *   bit 3 of DAT_0003c4d3, setting bits 6 and 7 of DAT_0003c376 respectively if those
 *   source bits are set. No external functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_mode_index_to_flags(void)

{
  switch(DAT_0003c447) {
  case 0:
    DAT_0003c376 = 0;
    break;
  case 1:
    DAT_0003c376 = 1;
    break;
  case 2:
    DAT_0003c376 = 4;
    break;
  case 3:
    DAT_0003c376 = 8;
    break;
  case 4:
    DAT_0003c376 = 0x20;
    break;
  case 5:
    DAT_0003c376 = 0x10;
    break;
  default:
    DAT_0003c376 = 0;
  }
  if ((DAT_0003c4d0 & 0x20) != 0) {
    DAT_0003c376 = DAT_0003c376 | 0x40;
  }
  if ((DAT_0003c4d3 & 8) != 0) {
    DAT_0003c376 = DAT_0003c376 | 0x80;
  }
  return;
}
