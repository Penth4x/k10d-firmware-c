/* @k10d compute_clamped_index_000c7f98 @ 0x000c7f98
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes a clamped index from param_1 and DAT_0003c480, storing the result in
 *   DAT_0003c481.
 * summary:
 *   The function branches on the sign of param_1 and several flag bits in DAT_0003c440,
 *   DAT_0003c58a, and DAT_0003c58b. It performs arithmetic on DAT_0003c480 and param_1,
 *   clamping the result against bounds in DAT_0003c575, DAT_0003c576, and DAT_0003c577. The
 *   final value is truncated to a byte and written to DAT_0003c481. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_clamped_index_000c7f98(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (uint)DAT_0003c480;
  if (param_1 < 0) {
    if (((((DAT_0003c440 != '\x04') || ((DAT_0003c58a & 0x80) == 0)) || ((DAT_0003c58b & 1) != 0))
        && ((DAT_0003c440 != '\b' || ((DAT_0003c58a & 0x80) == 0)))) &&
       ((DAT_0003c440 != '\a' || ((DAT_0003c58a & 0x80) == 0)))) {
      uVar3 = uVar1 & 3;
      if (uVar3 == 3) {
        iVar2 = uVar1 - 3;
      }
      else if (uVar3 == 2) {
        iVar2 = uVar1 - 2;
      }
      else if (uVar3 == 1) {
        iVar2 = uVar1 - 1;
      }
      else {
        iVar2 = uVar1 - 4;
      }
      uVar1 = (param_1 + 1) * 4 + iVar2;
      if (uVar1 <= DAT_0003c575) {
        uVar1 = (uint)DAT_0003c576;
      }
    }
  }
  else if (((((DAT_0003c440 != '\x04') || ((DAT_0003c58a & 0x40) == 0)) || ((DAT_0003c58b & 1) != 0)
            ) && ((DAT_0003c440 != '\b' || ((DAT_0003c58a & 0x40) == 0)))) &&
          ((DAT_0003c440 != '\a' || ((DAT_0003c58a & 0x40) == 0)))) {
    if (((((DAT_0003c118 & 0x20) == 0x20) && (uVar1 <= DAT_0003c576)) ||
        ((DAT_0003c113 == '\x03' && (uVar1 <= DAT_0003c576)))) ||
       ((DAT_0003c113 == '\x18' && (uVar1 <= DAT_0003c576)))) {
      uVar3 = uVar1 & 3;
      if (uVar3 == 3) {
        iVar2 = uVar1 + 1;
      }
      else if (uVar3 == 2) {
        iVar2 = uVar1 + 2;
      }
      else if (uVar3 == 1) {
        iVar2 = uVar1 + 3;
      }
      else {
        iVar2 = uVar1 + 4;
      }
      uVar1 = iVar2 + (param_1 + -1) * 4;
    }
    else {
      if (uVar1 <= DAT_0003c575) {
        uVar1 = (uint)DAT_0003c575;
      }
      uVar1 = uVar1 + param_1 * 4;
    }
    if (DAT_0003c577 <= uVar1) {
      uVar1 = (uint)DAT_0003c577;
    }
  }
  DAT_0003c481 = (char)uVar1;
  return;
}
