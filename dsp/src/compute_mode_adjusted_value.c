/* @k10d compute_mode_adjusted_value @ 0x000c5d36
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Returns a value derived from a mode selector and several global state variables.
 * summary:
 *   The function branches on the value of DAT_0003c444 (0, 1, or 3) to determine a return
 *   value. It reads from globals like DAT_0003c576, DAT_0003c577, and DAT_0003c127,
 *   performing arithmetic that suggests calculating a position or size. The result is
 *   clamped or adjusted based on the specific mode and state flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_mode_adjusted_value(uint param_1)

{
  int iVar1;
  
  if (DAT_0003c444 == '\0') {
    if (DAT_0003c575 < 0x55) {
      param_1 = DAT_0003c576 + 8;
    }
  }
  else if (DAT_0003c444 == '\x01') {
    if ((DAT_0003c127 & 8) != 0) {
      param_1 = DAT_0003c576 + 8;
    }
  }
  else if (DAT_0003c444 == '\x03') {
    if (((DAT_0003c127 & 0x20) == 0) && ((DAT_0003c127 & 0x10) == 0)) {
      if (DAT_0003c576 < 0x6d) {
        iVar1 = 0x6c - (uint)DAT_0003c576;
      }
      else {
        iVar1 = 0;
      }
      param_1 = (uint)DAT_0003c576 + iVar1 / 2 + 8;
    }
    else {
      param_1 = ((DAT_0003c119 & 0xf0) >> 2) + 0x4c;
    }
    if ((int)(uint)DAT_0003c577 < (int)param_1) {
      param_1 = (uint)DAT_0003c577;
    }
  }
  return param_1;
}
