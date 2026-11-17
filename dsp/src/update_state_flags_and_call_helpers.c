/* @k10d update_state_flags_and_call_helpers @ 0x000d5052
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Sets bits in DAT_0003cd2c and DAT_0003cbb7 based on flags in DAT_0003f258/f25a, and
 *   conditionally calls helper functions with _DAT_0003cc88/cc8c.
 * summary:
 *   The function reads low bits of DAT_0003f258 and checks various bit flags in
 *   DAT_0003f25a, DAT_0003cbd3, and DAT_0003ce06. It conditionally calls
 *   reverse_ushort_array_in_place, shift_and_accumulate_short_array, and
 *   shift_and_average_ushort_array with parameters derived from _DAT_0003cc88 and
 *   _DAT_0003cc8c, setting specific bits in DAT_0003cd2c and DAT_0003cbb7. Finally, it
 *   calls copy_two_byte_words_from_offset if bit 0 of DAT_0003cd2c is clear.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_state_flags_and_call_helpers(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = DAT_0003f258 & 3;
  bVar2 = DAT_0003f258 & 3;
  DAT_0003cb9b = DAT_0003cb9b & 0x7f;
  DAT_0003cd2c = DAT_0003cd2c & 0xf8;
  if (((((DAT_0003f25a & 8) != 0) && ((DAT_0003cbd3 & 0xf) != 0)) &&
      (((DAT_0003ce06 & 8) == 0 || ((DAT_0003ce06 & 4) == 0)))) || ((DAT_0003f25a & 0x10) != 0)) {
    reverse_ushort_array_in_place(1,_DAT_0003cc88,0x6f8);
    reverse_ushort_array_in_place(1,_DAT_0003cc8c,0x6f8);
    DAT_0003cd2c = DAT_0003cd2c | 3;
  }
  if (bVar1 != 0) {
    DAT_0003cbb7 = DAT_0003cbb7 | 1;
    if ((((2 < (DAT_0003cbd3 & 0xf)) && ((DAT_0003ce01 & 0x20) == 0)) &&
        ((DAT_0003f25a & 0x40) != 0)) || ((DAT_0003f25a & 0x80) != 0)) {
      shift_and_accumulate_short_array(1,(void *)_DAT_0003cc88);
      shift_and_accumulate_short_array(1,(void *)_DAT_0003cc8c);
      DAT_0003cd2c = DAT_0003cd2c | 5;
    }
    shift_and_average_ushort_array(1,(void *)_DAT_0003cc88);
    shift_and_average_ushort_array(1,(void *)_DAT_0003cc8c);
    DAT_0003cd2c = DAT_0003cd2c | 5;
  }
  if (((DAT_0003ce01 & 0x20) == 0) && (1 < (DAT_0003cbd3 & 0xf))) {
    if (1 < bVar2) {
      DAT_0003cbb7 = DAT_0003cbb7 | 2;
      shift_and_average_ushort_array(2,(void *)_DAT_0003cc88);
      shift_and_average_ushort_array(2,(void *)_DAT_0003cc8c);
    }
    if ((((DAT_0003ce06 & 8) == 0) && (2 < (DAT_0003cbd3 & 0xf))) && (2 < bVar2)) {
      DAT_0003cbb7 = DAT_0003cbb7 | 4;
      shift_and_average_ushort_array(4,(void *)_DAT_0003cc88);
      shift_and_average_ushort_array(4,(void *)_DAT_0003cc8c);
    }
  }
  if ((DAT_0003cd2c & 1) == 0) {
    copy_two_byte_words_from_offset(_DAT_0003cc88,_DAT_0003cc8c);
  }
  return;
}
