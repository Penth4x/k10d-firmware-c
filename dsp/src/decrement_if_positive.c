/* @k10d decrement_if_positive @ 0x000cd8a6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Decments a global counter if it is non-negative and returns the new value.
 * summary:
 *   Checks if the global DAT_0003ce15 is greater than -1. If so, it decrements the value by
 *   1. It then returns the current value of DAT_0003ce15 as an integer. No other side
 *   effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int decrement_if_positive(void)

{
  if (-1 < DAT_0003ce15) {
    DAT_0003ce15 = DAT_0003ce15 + -1;
  }
  return (int)DAT_0003ce15;
}
