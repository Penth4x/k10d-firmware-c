/* @k10d update_state_flags_000f37ec @ 0x000f37ec
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Updates a set of global state variables and flag bits based on the value of a mode
 *   selector.
 * summary:
 *   The function branches on the value of DAT_0003c455. If it is 5 or 3, it sets
 *   DAT_0003c44a to 2 or 1 respectively, and conditionally sets bit 5 of DAT_0003c4d0 while
 *   clearing several adjacent variables and bit 2 of DAT_0003c4d3. If the value is neither,
 *   it clears bit 5 of DAT_0003c4d0 and sets DAT_0003c44a to 0. No external functions are
 *   called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_state_flags_000f37ec(void)

{
  if (DAT_0003c455 == '\x05') {
    DAT_0003c44a = 2;
    if (((DAT_0003c4de & 1) == 0) && ((DAT_0003c4df & 8) == 0)) {
      DAT_0003c4d0 = DAT_0003c4d0 | 0x20;
      DAT_0003c45c = 0;
      DAT_0003c459 = 0;
      DAT_0003c460 = 0;
      DAT_0003c45d = 0;
      DAT_0003c4d3 = DAT_0003c4d3 & 0xf7;
    }
    else {
      DAT_0003c4d0 = DAT_0003c4d0 & 0xdf;
    }
  }
  else if (DAT_0003c455 == '\x03') {
    DAT_0003c44a = 1;
    if (((DAT_0003c4de & 1) == 0) && ((DAT_0003c4df & 8) == 0)) {
      DAT_0003c4d0 = DAT_0003c4d0 | 0x20;
      DAT_0003c45c = 0;
      DAT_0003c459 = 0;
      DAT_0003c460 = 0;
      DAT_0003c45d = 0;
      DAT_0003c4d3 = DAT_0003c4d3 & 0xf7;
    }
    else {
      DAT_0003c4d0 = DAT_0003c4d0 & 0xdf;
    }
  }
  else {
    DAT_0003c4d0 = DAT_0003c4d0 & 0xdf;
    DAT_0003c44a = 0;
  }
  return;
}
