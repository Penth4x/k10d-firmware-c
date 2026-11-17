/* @k10d clear_flag_bits_and_call_two_routines @ 0x000f607c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Conditionally clears specific bits in three global byte variables, then calls two other
 *   functions.
 * summary:
 *   The function checks bit 0 of DAT_0003c022 and, if clear, masks off bit 0 of
 *   DAT_0003c58c, bit 2 of DAT_0003c58b, and bit 0 of DAT_0003c18e. It then checks bit 0 of
 *   DAT_0003c036 and, if clear, masks off bit 0 of DAT_0003c58c again. Finally, it calls
 *   set_bit1_of_dat_0003c4b3 and set_bit2_of_dat_0003c4bf. The roles of the DAT globals and
 *   the two callees are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_bits_and_call_two_routines(void)

{
  if ((DAT_0003c022 & 1) == 0) {
    DAT_0003c58c = DAT_0003c58c & 0xfe;
    DAT_0003c58b = DAT_0003c58b & 0xe9;
    DAT_0003c18e = DAT_0003c18e & 0xfe;
  }
  if ((DAT_0003c036 & 1) == 0) {
    DAT_0003c58c = DAT_0003c58c & 0xfe;
  }
  set_bit1_of_dat_0003c4b3();
  set_bit2_of_dat_0003c4bf();
  return;
}
