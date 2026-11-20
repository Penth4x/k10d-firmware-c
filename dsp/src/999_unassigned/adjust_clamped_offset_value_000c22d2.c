/* @k10d adjust_clamped_offset_value_000c22d2 @ 0x000c22d2
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Computes a delta based on a mode selector, adds it to a clamped offset variable, and
 *   derives three related values.
 * summary:
 *   The function checks several status flags and a mode selector (DAT_0003c440). If
 *   conditions are met, it calls compute_and_write_scaled_value to get a value, adjusts it,
 *   and computes a delta (cVar2) based on the current mode. It then updates DAT_0003c566
 *   (clamped between DAT_0003c3ad and DAT_0003c3ae) and derives DAT_0003c568, DAT_0003c56a,
 *   and DAT_0003c56b from this new offset. Finally, it clears a bit in DAT_0003c580 and
 *   calls three other functions (clear_flag_and_conditional_call, FUN_000c145c,
 *   dispatch_state_handler_000c599c).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adjust_clamped_offset_value_000c22d2(void)

{
  int iVar1;
  char cVar2;
  
  DAT_0003c581 = DAT_0003c581 & 0xef;
  if (((((DAT_0003c410 & 0x40) != 0) && ((DAT_0003c4de & 2) == 0)) && ((DAT_0003c582 & 4) == 0)) &&
     (DAT_0003c440 != '\x06')) {
    iVar1 = compute_and_write_scaled_value();
    iVar1 = iVar1 + -8;
    if (0x80 < iVar1) {
      iVar1 = 0x80;
    }
    switch(DAT_0003c440) {
    case '\0':
    case '\x01':
      if ((int)(uint)DAT_0003c564 < iVar1) {
        cVar2 = (char)iVar1 - DAT_0003c564;
        DAT_0003c581 = DAT_0003c581 | 0x10;
      }
      else {
        cVar2 = '\0';
      }
      break;
    case '\x02':
    case '\x04':
    case '\t':
    case '\n':
    case '\v':
    case '\f':
    case '\r':
    case '\x0e':
    case '\x0f':
    case '\x10':
      if ((int)(uint)DAT_0003c564 < iVar1) {
        cVar2 = (char)iVar1 - DAT_0003c564;
        DAT_0003c581 = DAT_0003c581 | 0x10;
      }
      else {
        cVar2 = '\0';
      }
      break;
    case '\x03':
    case '\x05':
      if ((DAT_0003c58a & 4) == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = (DAT_0003c564 + DAT_0003c565) - (char)_DAT_0003c562;
        DAT_0003c581 = DAT_0003c581 | 0x10;
      }
      break;
    default:
      cVar2 = '\0';
    }
    if ((DAT_0003c581 & 0x10) != 0) {
      DAT_0003c566 = DAT_0003c566 + cVar2;
      if (DAT_0003c3ae < DAT_0003c566) {
        DAT_0003c566 = DAT_0003c3ae;
      }
      if (DAT_0003c566 < DAT_0003c3ad) {
        DAT_0003c566 = DAT_0003c3ad;
      }
      if ((DAT_0003c4de & 0x20) == 0) {
        DAT_0003c568 = DAT_0003c566 + DAT_0003c48a;
        DAT_0003c56a = (DAT_0003c566 + DAT_0003c48a) - DAT_0003c48d;
        DAT_0003c56b = (DAT_0003c566 + DAT_0003c48a) - DAT_0003c48d;
        if ((DAT_0003c589 & 1) != 0) {
          DAT_0003c56a = DAT_0003c56a + DAT_0003c567;
        }
      }
      else {
        DAT_0003c568 = DAT_0003c566 + 0x40;
        DAT_0003c56a = DAT_0003c566 + 0x40;
        DAT_0003c56b = DAT_0003c566 + 0x40;
      }
      DAT_0003c580 = DAT_0003c580 & 0xf3;
      clear_flag_and_conditional_call();
      FUN_000c145c();
      dispatch_state_handler_000c599c();
    }
  }
  return;
}
