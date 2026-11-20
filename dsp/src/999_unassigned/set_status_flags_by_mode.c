/* @k10d set_status_flags_by_mode @ 0x000f5fb8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets specific bits in three global flag variables based on the value of a mode
 *   selector.
 * summary:
 *   The function reads a global variable DAT_0003c46d and uses a switch statement to OR
 *   specific bit patterns into three adjacent global variables (DAT_0003c4b7, DAT_0003c4bb,
 *   DAT_0003c4bf). The bit patterns set (0x20, 2, 0x22) vary depending on the case value
 *   (1-10). No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_status_flags_by_mode(void)

{
  switch(DAT_0003c46d) {
  case 1:
    DAT_0003c4bb = DAT_0003c4bb | 0x20;
    break;
  case 2:
    DAT_0003c4bf = DAT_0003c4bf | 0x20;
    break;
  case 3:
    DAT_0003c4bb = DAT_0003c4bb | 0x20;
    DAT_0003c4bf = DAT_0003c4bf | 0x20;
    break;
  case 5:
  case 6:
  case 7:
    DAT_0003c4b7 = DAT_0003c4b7 | 2;
    break;
  case 8:
  case 10:
    DAT_0003c4b7 = DAT_0003c4b7 | 0x22;
    break;
  case 9:
    DAT_0003c4bb = DAT_0003c4bb | 0x20;
    DAT_0003c4b7 = DAT_0003c4b7 | 0x22;
  }
  return;
}
