/* @k10d compute_status_code_from_flags @ 0x000e8230
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Derives a 0-4 status code in DAT_0003c061 based on bit patterns in DAT_0003c02b and
 *   DAT_0003c391.
 * summary:
 *   The function first checks if specific bits in DAT_0003c066, DAT_0003c067, or
 *   DAT_0003c391 are set; if so, it forces DAT_0003c061 to 0. Otherwise, it evaluates the
 *   state of bit 7 in DAT_0003c02b. If that bit is clear, it maps the combination of bits 7
 *   and 6 in DAT_0003c391 to values 0, 1, 2, or 3. If bit 7 of DAT_0003c02b is set, it sets
 *   DAT_0003c061 to 4. No external functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_status_code_from_flags(void)

{
  if ((((DAT_0003c066 & 0x40) != 0) || ((DAT_0003c067 & 0x40) != 0)) || ((DAT_0003c391 & 2) != 0)) {
    DAT_0003c061 = 0;
  }
  if ((DAT_0003c02b & 0x80) == 0) {
    if (((DAT_0003c391 & 0x80) == 0) && ((DAT_0003c391 & 0x40) == 0)) {
      DAT_0003c061 = 0;
    }
    if (((DAT_0003c391 & 0x80) == 0) && ((DAT_0003c391 & 0x40) != 0)) {
      DAT_0003c061 = 1;
    }
    if (((DAT_0003c391 & 0x80) != 0) && ((DAT_0003c391 & 0x40) == 0)) {
      DAT_0003c061 = 2;
    }
    if (((DAT_0003c391 & 0x80) != 0) && ((DAT_0003c391 & 0x40) != 0)) {
      DAT_0003c061 = 3;
    }
  }
  else {
    DAT_0003c061 = 4;
  }
  return;
}
