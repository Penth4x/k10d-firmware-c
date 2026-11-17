/* @k10d toggle_bit7_and_check_state @ 0x000db764
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Toggles bit 7 of DAT_0003c193, sets bit 1 of DAT_0000000b, and returns whether bit 7
 *   was previously clear.
 * summary:
 *   The function reads bit 7 of DAT_0003c193, calls call_e7714_with_arg_e, then sets bit 7
 *   in DAT_0003c193. It also sets bit 1 of DAT_0000000b and clears DAT_000013e. If the sign
 *   bit of DAT_0003c193 is set (negative), it calls check_two_bit_condition. Returns true
 *   if bit 7 was originally 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool toggle_bit7_and_check_state(void)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  
  bVar2 = DAT_0003c193 & 0x80;
  call_e7714_with_arg_e();
  bVar1 = DAT_0003c193 | 0x80;
  DAT_0000000b = DAT_0000000b & 0xfe | 2;
  DAT_0000013e = 0;
  bVar3 = -1 < (char)DAT_0003c193;
  DAT_0003c193 = bVar1;
  if (bVar3) {
    check_two_bit_condition();
  }
  return bVar2 == 0;
}
