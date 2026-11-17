/* @k10d update_flag_bit_from_state_000c7488 @ 0x000c7488
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears bit 6 of DAT_0003c4d3 and conditionally sets it based on values in DAT_0003c390,
 *   DAT_0003c393, DAT_0003c394, DAT_0003c396, DAT_0003c3c3, and DAT_0003c410.
 * summary:
 *   The function first clears bit 6 (0x40) of the global variable DAT_0003c4d3. It then
 *   evaluates a series of conditional branches involving several other global variables
 *   (DAT_0003c390, DAT_0003c393, DAT_0003c394, DAT_0003c396, DAT_0003c3c3, DAT_0003c410).
 *   If any of the specific conditions are met, bit 6 of DAT_0003c4d3 is set again. No
 *   memory-mapped I/O operations or function calls are present in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_flag_bit_from_state_000c7488(void)

{
  DAT_0003c4d3 = DAT_0003c4d3 & 0xbf;
  if (DAT_0003c390 == '\x03') {
    DAT_0003c4d3 = DAT_0003c4d3 | 0x40;
  }
  else if ((DAT_0003c390 == '\x04') && ((DAT_0003c393 & 0x10) != 0)) {
    DAT_0003c4d3 = DAT_0003c4d3 | 0x40;
  }
  else if ((DAT_0003c390 == '\x02') &&
          (((DAT_0003c393 & 0x10) != 0 && ((DAT_0003c394 & 0x10) != 0)))) {
    DAT_0003c4d3 = DAT_0003c4d3 | 0x40;
  }
  else if ((DAT_0003c396 & 8) == 0) {
    if (DAT_0003c3c3 == '\x01') {
      DAT_0003c4d3 = DAT_0003c4d3 | 0x40;
    }
    else if ((DAT_0003c410 & 2) == 0) {
      DAT_0003c4d3 = DAT_0003c4d3 | 0x40;
    }
  }
  else {
    DAT_0003c4d3 = DAT_0003c4d3 | 0x40;
  }
  return;
}
