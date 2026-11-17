/* @k10d wait_for_flag_bits @ 0x000e1c70
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Polls DAT_00000003 until bits 4 and 7 are set, returning early if DAT_00000057 bit 2 is
 *   set.
 * summary:
 *   Calls store_scaled_value_and_flag once, then loops checking DAT_00000003 for bits 0x10
 *   and 0x80. If DAT_00000057 has bit 2 set during the wait, it sets DAT_0003c122 to 1 and
 *   returns 1. Otherwise returns the current value of DAT_0003c122 after the flags are set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t wait_for_flag_bits(uint32_t param_x0)

{
  store_scaled_value_and_flag(__frv_reg_unset(4));
  while (((DAT_00000003 & 0x10) == 0 || ((DAT_00000003 & 0x80) == 0))) {
    if ((DAT_00000057 & 4) != 0) {
      DAT_0003c122 = 1;
      return 1;
    }
  }
  return DAT_0003c122;
}
