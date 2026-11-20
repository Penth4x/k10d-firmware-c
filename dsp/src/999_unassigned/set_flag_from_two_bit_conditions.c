/* @k10d set_flag_from_two_bit_conditions @ 0x000c37b8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets DAT_0003c564 to 0x80, 0x74, or calls select_and_store_value_000c3b8e based on bits
 *   of DAT_0003c4de and DAT_0003c4df.
 * summary:
 *   Checks bit 0 of DAT_0003c4de and bit 3 of DAT_0003c4df. If bit 0 of DAT_0003c4de is
 *   set, writes 0x74 to DAT_0003c564. If bit 0 is clear and bit 3 of DAT_0003c4df is clear,
 *   calls select_and_store_value_000c3b8e. If bit 0 is clear and bit 3 of DAT_0003c4df is
 *   set, writes 0x80 to DAT_0003c564. The role of the DAT globals and the callee is not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_from_two_bit_conditions(void)

{
  if ((DAT_0003c4de & 1) == 0) {
    if ((DAT_0003c4df & 8) == 0) {
      select_and_store_value_000c3b8e();
    }
    else {
      DAT_0003c564 = 0x80;
    }
  }
  else {
    DAT_0003c564 = 0x74;
  }
  return;
}
