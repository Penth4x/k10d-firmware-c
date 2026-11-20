/* @k10d update_ce06_status_flags @ 0x000ce08e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates the byte at DAT_0003ce06 and related flag bytes based on the return value of
 *   read_bits_4_to_6_of_dat_0003c037 and param_1.
 * summary:
 *   The function branches on the result of read_bits_4_to_6_of_dat_0003c037. If zero, it
 *   sets bit 6 of DAT_0003ce05 and potentially clears bits in DAT_0003ce08 and DAT_0003ce06
 *   before calling extract_nibble_from_byte. If non-zero, it clears bits in DAT_0003c180
 *   and DAT_0003ce01, and may set bit 3 of DAT_0003ce08 and call extract_nibble_from_byte.
 *   It also conditionally sets bit 7 of DAT_0003ce06 based on param_1 or the result of
 *   check_two_flag_bits_000ce7a6. The final value is written to DAT_0003ce06.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_ce06_status_flags(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = read_bits_4_to_6_of_dat_0003c037();
  if (iVar2 == 0) {
    DAT_0003ce05 = DAT_0003ce05 | 0x40;
    bVar1 = DAT_0003ce06;
    if ((DAT_0003ce08 & 8) != 0) {
      DAT_0003ce08 = DAT_0003ce08 & 0xf7;
      DAT_0003ce06 = DAT_0003ce06 & 0x7f;
      extract_nibble_from_byte();
      bVar1 = DAT_0003ce06;
    }
  }
  else {
    DAT_0003c180 = DAT_0003c180 & 0xf7;
    DAT_0003ce01 = DAT_0003ce01 & 0x7f;
    if (((DAT_0003ce00 & 0x40) != 0) && ((DAT_0003ce08 & 8) == 0)) {
      DAT_0003ce08 = DAT_0003ce08 | 8;
      extract_nibble_from_byte();
    }
    bVar1 = DAT_0003ce06;
    if ((((DAT_0003f282 & 8) == 0) && ((DAT_00000005 & 4) == 0)) &&
       ((param_1 != 0 || (iVar2 = check_two_flag_bits_000ce7a6(), bVar1 = DAT_0003ce06, iVar2 == 1)))) {
      DAT_0003ce08 = DAT_0003ce08 & 0xef;
      bVar1 = DAT_0003ce06 | 0x80;
      if ((DAT_0003ce00 & 8) == 0) {
        bVar1 = DAT_0003ce06 & 0xbf | 0x80;
      }
    }
  }
  DAT_0003ce06 = bVar1;
  return;
}
