/* @k10d FUN_000c5de0 @ 0x000c5de0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int FUN_000c5de0(int param_1)

{
  if (DAT_0003c444 == '\0') {
    if ((DAT_0003c127 & 8) == 0) {
      param_1 = 100;
    }
    else {
      param_1 = compute_and_write_scaled_value();
      param_1 = param_1 + -0x10;
    }
  }
  else if (DAT_0003c444 == '\x01') {
    if ((DAT_0003c127 & 8) != 0) {
      param_1 = compute_and_write_scaled_value();
    }
  }
  else if (DAT_0003c444 == '\x03') {
    param_1 = compute_and_write_scaled_value();
  }
  else if (DAT_0003c444 == '\x02') {
    if ((DAT_0003c127 & 8) != 0) {
      param_1 = compute_and_write_scaled_value();
      param_1 = param_1 + -8;
    }
  }
  else if ((DAT_0003c127 & 8) == 0) {
    param_1 = 100;
  }
  else {
    param_1 = compute_and_write_scaled_value();
    param_1 = param_1 + -0x10;
  }
  return param_1;
}
