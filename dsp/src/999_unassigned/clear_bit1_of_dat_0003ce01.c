/* @k10d clear_bit1_of_dat_0003ce01 @ 0x000cc67c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls three helper functions and clears bit 1 of the global DAT_0003ce01.
 * summary:
 *   Invokes clear_status_flag_bits_000cca22, clear_flag_if_check_zero, and
 *   adjust_clamped_value (with argument _DAT_0000005a). Then performs a bitwise AND with
 *   0xfe on DAT_0003ce01, which clears bit 1 (value 0x02) while preserving all other bits.
 *   The roles of the callees and the specific meaning of DAT_0003ce01 are not determinable
 *   from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_bit1_of_dat_0003ce01(void)

{
  clear_status_flag_bits_000cca22();
  clear_flag_if_check_zero();
  adjust_clamped_value(_DAT_0000005a);
  DAT_0003ce01 = DAT_0003ce01 & 0xfe;
  return;
}
