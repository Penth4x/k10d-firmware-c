/* @k10d adjust_scroll_position @ 0x000c80be
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Updates a scroll/offset value in DAT_0003c481 based on a signed step parameter and
 *   current state flags.
 * summary:
 *   The function reads a current offset from DAT_0003c480 and applies a variable increment
 *   or decrement based on the sign of param_1 and the lower 3 bits of the current offset.
 *   It consults several state flags (DAT_0003c440, DAT_0003c58a, DAT_0003c58b) to determine
 *   if the adjustment is allowed. It uses lookup tables at 0x000fa1e8, 0x000fa1f1, and
 *   0x000fa1f7 to add or subtract additional values when param_1 is greater than 1. The
 *   result is clamped between DAT_0003c575 and DAT_0003c577 (or DAT_0003c576) and stored in
 *   DAT_0003c481.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_scroll_position(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)DAT_0003c480;
  if (param_1 < 0) {
    if (((((DAT_0003c440 != '\x04') || ((DAT_0003c58a & 0x80) == 0)) || ((DAT_0003c58b & 1) != 0))
        && ((DAT_0003c440 != '\b' || ((DAT_0003c58a & 0x80) == 0)))) &&
       ((DAT_0003c440 != '\a' || ((DAT_0003c58a & 0x80) == 0)))) {
      uVar2 = uVar1 & 7;
      if ((((DAT_0003c480 & 7) == 0) || (uVar2 == 2)) || (uVar2 == 5)) {
        uVar1 = uVar1 - 1;
      }
      else if (((uVar2 == 1) || (uVar2 == 3)) || (uVar2 == 6)) {
        uVar1 = uVar1 - 2;
      }
      else {
        uVar1 = uVar1 - 3;
      }
      param_1 = -param_1;
      if (1 < param_1) {
        if ((uVar1 & 3) == 3) {
          uVar2 = (uint)*(byte *)((int)&DAT_000fa1e8 + param_1 + 3);
        }
        else if ((uVar1 & 3) == 0) {
          uVar2 = (uint)(byte)(&DAT_000fa1f1)[param_1];
        }
        else {
          uVar2 = (uint)(byte)(&DAT_000fa1f7)[param_1];
        }
        uVar1 = uVar1 - uVar2;
      }
      if (uVar1 <= DAT_0003c575) {
        uVar1 = (uint)DAT_0003c576;
      }
    }
  }
  else if ((((DAT_0003c440 != '\x04') || ((DAT_0003c58a & 0x40) == 0)) || ((DAT_0003c58b & 1) != 0))
          && (((DAT_0003c440 != '\b' || ((DAT_0003c58a & 0x40) == 0)) &&
              ((DAT_0003c440 != '\a' || ((DAT_0003c58a & 0x40) == 0)))))) {
    if ((((DAT_0003c118 & 0x20) != 0x20) || (DAT_0003c576 < uVar1)) &&
       (((DAT_0003c113 != '\x03' || (DAT_0003c576 < uVar1)) &&
        ((((DAT_0003c113 != '\x18' || (DAT_0003c576 < uVar1)) && (uVar1 <= DAT_0003c575)) &&
         (uVar1 = (uint)DAT_0003c575, (DAT_0003c480 & 7) == 0)))))) {
      uVar1 = uVar1 + 1;
    }
    uVar2 = uVar1 & 7;
    if (((uVar2 == 0) || (uVar2 == 3)) || (uVar2 == 6)) {
      uVar1 = uVar1 + 1;
    }
    else if ((uVar2 == 1) || (uVar2 == 4)) {
      uVar1 = uVar1 + 3;
    }
    else {
      uVar1 = uVar1 + 2;
    }
    if (1 < param_1) {
      if ((uVar1 & 3) == 3) {
        uVar2 = (uint)(byte)(&DAT_000fa1f7)[param_1];
      }
      else if ((uVar1 & 3) == 0) {
        uVar2 = (uint)(byte)(&DAT_000fa1f1)[param_1];
      }
      else {
        uVar2 = (uint)*(byte *)((int)&DAT_000fa1e8 + param_1 + 3);
      }
      uVar1 = uVar1 + uVar2;
    }
    if (DAT_0003c577 <= uVar1) {
      uVar1 = (uint)DAT_0003c577;
    }
  }
  DAT_0003c481 = (char)uVar1;
  return;
}
