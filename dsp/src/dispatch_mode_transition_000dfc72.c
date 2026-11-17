/* @k10d dispatch_mode_transition_000dfc72 @ 0x000dfc72
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets state flags and dispatches to one of three handlers based on param_1.
 * summary:
 *   The function saves and restores state in DAT_00000400 and DAT_00000420. It sets several
 *   control bytes (DAT_00000060-67) and then branches on param_1: 0 calls FUN_000dfd2c, 1
 *   calls sync_16_byte_table, and 2 calls set_bit3_of_dat_0003c4bf. It also updates bit 6
 *   of DAT_00000009 based on DAT_0003c4da for modes 1 and 2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_mode_transition_000dfc72(int param_1,uint32_t param_2)

{
  byte bVar1;
  uint8_t uVar2;
  
  uVar2 = DAT_00000420;
  bVar1 = DAT_00000400;
  if (param_1 == 0) {
    DAT_00000409 = DAT_00000409 | 0x60;
    DAT_00000009 = DAT_00000009 & 0xbf | 0x20;
  }
  DAT_00000063 = 0xb2;
  DAT_00000062 = 0x11;
  DAT_00000060 = 4;
  DAT_00000400 = DAT_00000400 | 7;
  if ((DAT_00000484 & 3) == 2) {
    _DAT_00000064 = 0x1f;
  }
  else {
    _DAT_00000064 = 1;
  }
  DAT_00000420 = 6;
  DAT_00000067 = 2;
  if (param_1 == 0) {
    FUN_000dfd2c();
  }
  else if (param_1 == 1) {
    sync_16_byte_table(param_2);
    if ((DAT_0003c4da & 0x80) == 0) {
      DAT_00000009 = DAT_00000009 & 0xbf;
    }
    else {
      DAT_00000009 = DAT_00000009 | 0x40;
    }
  }
  else if (param_1 == 2) {
    set_bit3_of_dat_0003c4bf(param_2);
    if ((DAT_0003c4da & 0x80) == 0) {
      DAT_00000009 = DAT_00000009 & 0xbf;
    }
    else {
      DAT_00000009 = DAT_00000009 | 0x40;
    }
  }
  DAT_00000067 = 0;
  DAT_00000400 = bVar1;
  DAT_00000420 = uVar2;
  return;
}
