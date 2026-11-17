/* @k10d adjust_clamped_value_and_notify @ 0x000c2564
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Updates a clamped state variable based on a computed offset and calls two notification
 *   functions.
 * summary:
 *   The function checks two flag bits in DAT_0003c129 and DAT_0003c582. If clear, it calls
 *   clamp_offset_to_range to get a value, computes a signed offset relative to 0x40, and
 *   clamps it against DAT_0003c3ad. It then updates DAT_0003c566 with this offset, clamping
 *   it between DAT_0003c3ad and DAT_0003c3ae, setting bits 2 or 3 in DAT_0003c581 if limits
 *   are hit. Finally, it updates several derived values (DAT_0003c568, 0x56a, 0x56b) and
 *   calls FUN_000c145c and dispatch_state_handler_000c599c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_clamped_value_and_notify(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  if (((DAT_0003c129 & 1) == 0) && ((DAT_0003c582 & 4) == 0)) {
    iVar2 = clamp_offset_to_range(DAT_0003c47d,DAT_0003c480);
    iVar3 = 0;
    if (iVar2 != 0x40) {
      bVar1 = true;
      iVar3 = iVar2 + -0x40;
      if (iVar2 + -0x40 < (int)-(uint)DAT_0003c3ad) {
        iVar3 = -(uint)DAT_0003c3ad;
      }
    }
    if ((DAT_0003c581 & 0x40) == 0) {
      if (bVar1) {
        DAT_0003c566 = DAT_0003c566 + (char)iVar3;
        if (DAT_0003c3ae < DAT_0003c566) {
          DAT_0003c566 = DAT_0003c3ae;
          DAT_0003c581 = DAT_0003c581 | 4;
        }
        if (DAT_0003c566 < DAT_0003c3ad) {
          DAT_0003c566 = DAT_0003c3ad;
          DAT_0003c581 = DAT_0003c581 | 8;
        }
        if ((DAT_0003c4de & 0x20) == 0) {
          DAT_0003c568 = DAT_0003c48a + DAT_0003c566 + DAT_0003c569;
          DAT_0003c56a = (DAT_0003c48a + DAT_0003c566 + DAT_0003c569) - DAT_0003c48d;
          DAT_0003c56b = (DAT_0003c48a + DAT_0003c566 + DAT_0003c569) - DAT_0003c48d;
          if ((DAT_0003c589 & 1) != 0) {
            DAT_0003c56a = DAT_0003c56a + DAT_0003c567;
          }
        }
        else {
          DAT_0003c568 = DAT_0003c566 + 0x40 + DAT_0003c569;
          DAT_0003c56a = DAT_0003c566 + 0x40 + DAT_0003c569;
          DAT_0003c56b = DAT_0003c566 + 0x40 + DAT_0003c569;
        }
        DAT_0003c580 = DAT_0003c580 & 0xf3;
        FUN_000c145c();
        dispatch_state_handler_000c599c();
      }
    }
    else {
      DAT_0003c566 = DAT_0003c57f;
      DAT_0003c580 = DAT_0003c580 & 0xf3;
      FUN_000c145c();
      dispatch_state_handler_000c599c();
    }
  }
  return;
}
