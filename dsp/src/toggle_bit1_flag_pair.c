/* @k10d toggle_bit1_flag_pair @ 0x000c755c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Toggles bit 1 of DAT_0003c4d5 and adjusts DAT_0003c49b based on bit 2 of DAT_0003c035.
 * summary:
 *   Checks bit 2 of DAT_0003c035. If clear, sets bit 1 of DAT_0003c4d5 and decrements
 *   DAT_0003c49b (or sets it to 2 if zero). If set, clears bit 1 of DAT_0003c4d5. No MMIO
 *   or external calls are made.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_bit1_flag_pair(void)

{
  if ((DAT_0003c035 & 4) == 0) {
    if ((DAT_0003c4d5 & 2) == 0) {
      DAT_0003c4d5 = DAT_0003c4d5 | 2;
      if (DAT_0003c49b == '\0') {
        DAT_0003c49b = '\x02';
      }
      else {
        DAT_0003c49b = DAT_0003c49b + -1;
      }
    }
  }
  else {
    DAT_0003c4d5 = DAT_0003c4d5 & 0xfd;
  }
  return;
}
