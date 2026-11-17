/* @k10d map_raw_value_to_byte_level @ 0x000c2154
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Maps a raw value from compute_signed_fixed_point_value to a discrete 8-bit level based
 *   on threshold comparisons and modifier flags.
 * summary:
 *   The function initializes a return value from DAT_0003c182. If specific bits in
 *   DAT_0003c127 and DAT_0003c126 are set, it calls compute_signed_fixed_point_value and
 *   maps the result to one of seven discrete values (0x20 to 0xe0) using a series of
 *   threshold checks. It then ORs in a shifted value from DAT_0003c565 if that global is
 *   non-zero, and returns the result masked to 8 bits.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint map_raw_value_to_byte_level(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_0003c182;
  if (((DAT_0003c127 & 8) != 0) && ((DAT_0003c126 & 8) == 0)) {
    uVar1 = compute_signed_fixed_point_value();
    if (uVar1 < 0x92) {
      uVar1 = 0xe0;
    }
    else if (uVar1 < 0xab) {
      uVar1 = 0xc0;
    }
    else if (uVar1 < 0xfb) {
      uVar1 = 0xa0;
    }
    else if (uVar1 < 0x155) {
      uVar1 = 0x80;
    }
    else if (uVar1 < 0x1a5) {
      uVar1 = 0x60;
    }
    else if (uVar1 < 0x231) {
      uVar1 = 0x40;
    }
    else {
      uVar1 = 0x20;
    }
  }
  if (DAT_0003c565 != 0) {
    uVar1 = uVar1 | DAT_0003c565 - 0x43 >> 2;
  }
  return uVar1 & 0xff;
}
