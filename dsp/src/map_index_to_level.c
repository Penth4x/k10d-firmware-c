/* @k10d map_index_to_level @ 0x000c857e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Maps an input integer to a 0-6 level stored in DAT_0003c450 based on a mode flag.
 * summary:
 *   The function checks the global flag DAT_0003c3ac to select between two different
 *   threshold-based mapping schemes. If the flag is zero, it maps param_1 to levels 0-3 or
 *   6 using thresholds 5, 9, 13, and 17. If the flag is non-zero, it maps param_1 to levels
 *   0-5 or 6 using thresholds 4, 6, 9, 12, 14, and 17. The resulting level is written to
 *   the global variable DAT_0003c450. No other side effects or callees are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_index_to_level(int param_1)

{
  if (DAT_0003c3ac == '\0') {
    if (param_1 < 5) {
      DAT_0003c450 = 0;
    }
    else if (param_1 < 9) {
      DAT_0003c450 = 1;
    }
    else if (param_1 < 0xd) {
      DAT_0003c450 = 2;
    }
    else if (param_1 < 0x11) {
      DAT_0003c450 = 3;
    }
    else {
      DAT_0003c450 = 6;
    }
  }
  else if (param_1 < 4) {
    DAT_0003c450 = 0;
  }
  else if (param_1 < 6) {
    DAT_0003c450 = 1;
  }
  else if (param_1 < 9) {
    DAT_0003c450 = 2;
  }
  else if (param_1 < 0xc) {
    DAT_0003c450 = 3;
  }
  else if (param_1 < 0xe) {
    DAT_0003c450 = 4;
  }
  else if (param_1 < 0x11) {
    DAT_0003c450 = 5;
  }
  else {
    DAT_0003c450 = 6;
  }
  return;
}
