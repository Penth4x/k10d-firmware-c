/* @k10d toggle_bit_in_global_flags @ 0x000df72e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Temporarily sets and clears specific bits in global flag registers while calling helper
 *   functions.
 * summary:
 *   The function saves the state of several global variables (DAT_0003f3xx, DAT_00000401,
 *   _DAT_00000001), modifies bits in DAT_00000400, DAT_0000040a, DAT_00000401, and
 *   _DAT_00000001, and sets values in DAT_0003f3xx. It calls
 *   call_three_times_with_constants, FUN_000ddc7e, clear_bit7_and_notify, and loops calling
 *   accumulate_and_flag_five_values while waiting on bits in DAT_00000005. Finally, it
 *   restores the saved state of the modified globals.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_bit_in_global_flags(void)

{
  byte bVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  uint16_t uVar5;
  uint16_t uVar6;
  uint8_t uVar7;
  uint8_t uVar8;
  uint8_t uVar9;
  uint8_t uVar10;
  uint8_t uVar11;
  uint8_t uVar12;
  uint8_t uVar13;
  byte bVar14;
  
  uVar12 = DAT_0003f38d;
  uVar11 = DAT_0003f38c;
  uVar10 = DAT_0003f38b;
  uVar9 = DAT_0003f38a;
  uVar8 = DAT_0003f389;
  uVar7 = DAT_0003f388;
  uVar6 = _DAT_0003f37c;
  uVar5 = _DAT_0003f37a;
  uVar4 = _DAT_0003f378;
  uVar3 = _DAT_0003f372;
  uVar2 = _DAT_0003f370;
  bVar1 = DAT_00000401;
  uVar13 = (uint8_t)_DAT_00000001;
  DAT_0003f362 = 4;
  DAT_0003f363 = 0xe0;
  DAT_00000400 = DAT_00000400 & 0xfe;
  DAT_0000040a = DAT_0000040a | 1;
  DAT_00000401 = DAT_00000401 | 0xdf;
  _DAT_0003f378 = 0x200;
  _DAT_0003f37a = 0x200;
  _DAT_0003f37c = 0x200;
  _DAT_0003f370 = 0x200;
  _DAT_0003f372 = 0x200;
  DAT_0003f389 = 0x80;
  DAT_0003f38b = 0x80;
  DAT_0003f38d = 0x80;
  DAT_0003f388 = 0x15;
  DAT_0003f38a = 0x15;
  DAT_0003f38c = 0x15;
  call_three_times_with_constants();
  FUN_000ddc7e();
  clear_bit7_and_notify();
  _DAT_00000001 = _DAT_00000001 & 0xe7ffffff;
  bVar14 = 0;
  do {
    accumulate_and_flag_five_values();
    bVar14 = bVar14 + 1;
  } while (bVar14 < 5);
  DAT_0000000a = DAT_0000000a | 0x80;
  while ((DAT_00000005 & 4) == 0) {
    accumulate_and_flag_five_values();
  }
  while ((DAT_00000005 & 4) != 0) {
    accumulate_and_flag_five_values();
  }
  _DAT_0003f370 = uVar2;
  _DAT_0003f372 = uVar3;
  _DAT_0003f378 = uVar4;
  _DAT_0003f37a = uVar5;
  _DAT_0003f37c = uVar6;
  DAT_0003f388 = uVar7;
  DAT_0003f389 = uVar8;
  DAT_0003f38a = uVar9;
  DAT_0003f38b = uVar10;
  DAT_0003f38c = uVar11;
  DAT_0003f38d = uVar12;
  call_three_times_with_constants();
  FUN_000ddc7e();
  DAT_00000401 = bVar1;
  _DAT_00000001 = CONCAT13(uVar13,_DAT_00000002);
  DAT_0000000a = DAT_0000000a & 0x7f;
  return;
}
