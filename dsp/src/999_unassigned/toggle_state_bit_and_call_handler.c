/* @k10d toggle_state_bit_and_call_handler @ 0x000e3ae0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Manages a state flag in DAT_0003c021 and calls write_two_bit_field_to_dat_0003c008 with
 *   a parameter derived from DAT_0003c008.
 * summary:
 *   The function checks bit 3 of DAT_0003c021 and compares DAT_0003c029 with DAT_0003c028.
 *   If bit 3 is clear, it updates DAT_0003c029 based on bit 2 of DAT_0003c021, then calls
 *   write_two_bit_field_to_dat_0003c008 with 1 or 0 depending on bit 0 of DAT_0003c008. It
 *   clears bit 2 of DAT_0003c021 if the first branch is taken and sets bit 3 at the end.
 *   The specific roles of the DAT globals and the callee are not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_state_bit_and_call_handler(void)

{
  if (((DAT_0003c021 & 8) != 0) && (DAT_0003c029 != DAT_0003c028)) {
    DAT_0003c021 = DAT_0003c021 & 0xf7;
  }
  if ((DAT_0003c021 & 8) == 0) {
    DAT_0003c029 = DAT_0003c028;
    if ((DAT_0003c021 & 4) == 0) {
      DAT_0003c029 = DAT_0003c028 + '\x01';
    }
    if ((DAT_0003c008 & 1) == 0) {
      write_two_bit_field_to_dat_0003c008(1);
      DAT_0003c021 = DAT_0003c021 & 0xfb;
    }
    else {
      write_two_bit_field_to_dat_0003c008(0);
    }
    DAT_0003c021 = DAT_0003c021 | 8;
  }
  return;
}
