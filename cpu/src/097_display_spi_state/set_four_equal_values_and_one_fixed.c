/* @k10d set_four_equal_values_and_one_fixed @ 0x1041260e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Clamps a 16-bit value and writes it to four consecutive IDs plus one fixed value via a
 *   helper.
 * summary:
 *   If a flag byte at offset 0xbd in the object is zero, param_2 is clamped to 0xfff and
 *   masked to 16 bits. It then calls set_two_config_values with 0, writes the (possibly
 *   clamped) value to IDs 0x845-0x848 and 0x84b (with 0x200) via
 *   send_two_byte_pairs_over_ch2, and finally calls set_two_config_values with 1. The
 *   specific subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_four_equal_values_and_one_fixed(int param_1,uint param_2)

{
  if (*(char *)(param_1 + 0xbd) == '\0') {
    if (0xfff < param_2) {
      param_2 = 0xfff;
    }
    param_2 = param_2 & 0xffff;
  }
  set_two_config_values(param_1,0);
  send_two_byte_pairs_over_ch2(param_1,0x845,param_2,param_2);
  send_two_byte_pairs_over_ch2(param_1,0x846,param_2,param_2);
  send_two_byte_pairs_over_ch2(param_1,0x847,param_2,param_2);
  send_two_byte_pairs_over_ch2(param_1,0x848,param_2,param_2);
  send_two_byte_pairs_over_ch2(param_1,0x84b,0x200,0x200);
  set_two_config_values(param_1,1);
  return;
}
