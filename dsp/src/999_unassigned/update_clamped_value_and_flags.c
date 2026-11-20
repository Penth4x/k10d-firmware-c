/* @k10d update_clamped_value_and_flags @ 0x000c26f8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Computes a clamped value from two inputs, stores it and derived offsets, and clears
 *   specific bits in two flag words.
 * summary:
 *   The function checks a bit in DAT_0003c129 and a bit in DAT_0003c581. If conditions are
 *   met, it calculates a difference between DAT_0003c564 and DAT_0003c565, clamps it
 *   against limits in DAT_0003c3ad and DAT_0003c3ae, and stores the result in DAT_0003c566.
 *   It then computes three related values (DAT_0003c568, DAT_0003c56a, DAT_0003c56b) based
 *   on DAT_0003c566 and other globals, clearing bits 4 and 5 in DAT_0003c580 and
 *   DAT_0003c581 before calling FUN_000c145c and dispatch_on_state_value_000c3740.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_clamped_value_and_flags(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if ((DAT_0003c129 & 1) == 0) {
    iVar2 = ((uint)DAT_0003c564 + (uint)DAT_0003c565) - (uint)_DAT_0003c562;
    if ((uint)DAT_0003c564 + (uint)DAT_0003c565 != (uint)_DAT_0003c562) {
      bVar1 = true;
      if (iVar2 < (int)-(uint)DAT_0003c3ad) {
        iVar2 = -(uint)DAT_0003c3ad;
      }
    }
    if ((DAT_0003c581 & 0x40) == 0) {
      if (bVar1) {
        DAT_0003c566 = (char)iVar2 + DAT_0003c566;
        if (DAT_0003c3ae < DAT_0003c566) {
          DAT_0003c566 = DAT_0003c3ae;
        }
        if (DAT_0003c566 < DAT_0003c3ad) {
          DAT_0003c566 = DAT_0003c3ad;
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
        DAT_0003c581 = DAT_0003c581 & 0xf3;
        FUN_000c145c();
        dispatch_on_state_value_000c3740();
      }
    }
    else {
      DAT_0003c566 = DAT_0003c57f;
      DAT_0003c580 = DAT_0003c580 & 0xf3;
      FUN_000c145c();
      dispatch_on_state_value_000c3740();
    }
  }
  return;
}
