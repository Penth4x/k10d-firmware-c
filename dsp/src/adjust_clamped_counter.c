/* @k10d adjust_clamped_counter @ 0x000c8600
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Increments or decrements a 16-bit counter based on a signed parameter, clamping the
 *   result to a 5-bit range.
 * summary:
 *   The function modifies the global variable DAT_0003c49a by adding or subtracting 1
 *   depending on the sign of param_1. It uses clamp_value_to_range_000d9ac0 to clamp the
 *   resulting value, likely to a range defined by the constants 0xffffffe1 and 0x1f. It
 *   also manipulates specific bits (0x40 and 0x80) in the global flag variable DAT_0003c4d7
 *   before and after the adjustment.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_clamped_counter(int param_1)

{
  short sVar1;
  
  if ((DAT_0003c4d7 & 0x40) == 0) {
    if ((DAT_0003c4d7 & 0x80) == 0) {
      DAT_0003c4d7 = DAT_0003c4d7 & 0x3f;
      if (param_1 < 1) {
        sVar1 = DAT_0003c49a + -1;
      }
      else {
        sVar1 = DAT_0003c49a + 1;
      }
      DAT_0003c49a = clamp_value_to_range_000d9ac0((int)sVar1,0xffffffe1,0x1f);
    }
    else if (param_1 < 0) {
      DAT_0003c4d7 = DAT_0003c4d7 & 0x7f;
      DAT_0003c49a = clamp_value_to_range_000d9ac0((int)(short)(DAT_0003c49a + -1),0xffffffe1,0x1f);
    }
  }
  else if (0 < param_1) {
    DAT_0003c4d7 = DAT_0003c4d7 & 0xbf;
    DAT_0003c49a = clamp_value_to_range_000d9ac0((int)(short)(DAT_0003c49a + 1),0xffffffe1,0x1f);
  }
  return;
}
