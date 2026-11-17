/* @k10d compute_char_from_flag_bits @ 0x000c2c14
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Computes a single character in DAT_0003c575 from bit fields in DAT_0003c109,
 *   DAT_0003c118, DAT_0003c11e, and DAT_0003c582.
 * summary:
 *   The function initializes DAT_0003c575 with the upper nibble of DAT_0003c109 shifted
 *   right by 2 plus the ASCII code for 'D'. It then adds or subtracts a value derived from
 *   DAT_0003c11e based on bits 4 and 5 of DAT_0003c118. If bit 5 of DAT_0003c118 is clear,
 *   it overwrites the result with 'R' or 'S' based on bits 0 and 1 of DAT_0003c582. No
 *   callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_char_from_flag_bits(void)

{
  DAT_0003c575 = (char)((DAT_0003c109 & 0xf0) >> 2) + 'D';
  if ((DAT_0003c118 & 0x20) == 0x20) {
    if ((DAT_0003c118 & 0x10) == 0x10) {
      DAT_0003c575 = DAT_0003c575 - (char)((DAT_0003c11e & 0x30) >> 4);
    }
    else {
      DAT_0003c575 = (char)((DAT_0003c11e & 0x30) >> 4) + DAT_0003c575;
    }
  }
  else if ((DAT_0003c582 & 1) == 0) {
    if ((DAT_0003c582 & 2) != 0) {
      DAT_0003c575 = 'R';
    }
  }
  else {
    DAT_0003c575 = 'S';
  }
  return;
}
