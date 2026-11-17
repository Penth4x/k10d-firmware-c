/* @k10d check_counter_delta_and_set_flags @ 0x000c68ca
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Compares a counter delta against a +/-2 threshold and sets status bits in DAT_0003c580
 *   and DAT_0003c58a based on param_1.
 * summary:
 *   Calculates iVar1 as the difference between DAT_0003c58e and DAT_0003c564 minus
 *   DAT_0003c565. If the magnitude exceeds 2, it sets bits 2-3 in DAT_0003c580 depending on
 *   param_1 (1, 2, or other). It then checks specific bits in DAT_0003c58a (0x8, 0x4 for
 *   param_1==1; 0x80, 0x40 for param_1==2), sets corresponding higher bits, updates
 *   DAT_0003c564 or DAT_0003c565 with the calculated difference, and calls
 *   update_state_pointer or update_byte_from_two_callees respectively.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void check_counter_delta_and_set_flags(int param_1)

{
  int iVar1;
  
  iVar1 = ((uint)_DAT_0003c58e - (uint)DAT_0003c564) - (uint)DAT_0003c565;
  if ((2 < iVar1) || (iVar1 < -2)) {
    if (param_1 == 1) {
      DAT_0003c580 = DAT_0003c580 | 4;
    }
    else if (param_1 == 2) {
      DAT_0003c580 = DAT_0003c580 | 8;
    }
    else {
      DAT_0003c580 = DAT_0003c580 | 0xc;
    }
  }
  if (param_1 == 1) {
    if ((DAT_0003c58a & 8) != 0) {
      DAT_0003c58a = DAT_0003c58a | 0x10;
      DAT_0003c564 = (char)_DAT_0003c58e - DAT_0003c565;
      update_state_pointer();
    }
    if ((DAT_0003c58a & 4) != 0) {
      DAT_0003c58a = DAT_0003c58a | 0x20;
      DAT_0003c564 = (char)_DAT_0003c58e - DAT_0003c565;
      update_state_pointer();
    }
  }
  else if (param_1 == 2) {
    if ((DAT_0003c58a & 0x80) != 0) {
      DAT_0003c58a = DAT_0003c58a | 1;
      DAT_0003c565 = (byte)((uint)_DAT_0003c58e - (uint)DAT_0003c564);
      update_byte_from_two_callees();
    }
    if ((DAT_0003c58a & 0x40) != 0) {
      DAT_0003c58a = DAT_0003c58a | 2;
      DAT_0003c565 = (char)_DAT_0003c58e - DAT_0003c564;
      update_byte_from_two_callees();
    }
  }
  return;
}
