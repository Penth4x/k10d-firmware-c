/* @k10d dispatch_on_flag_bits_000f00ec @ 0x000f00ec
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Normalizes a flag word and branches to one of two handlers based on its low two bits.
 * summary:
 *   Reads global DAT_0003c447 and the input flag; if the global is not 2 or the input is
 *   below 0x10, it ORs bit 1 into the flag. It then calls clear_bit7_of_dat_00000006 when
 *   the low two bits equal 3, otherwise calls update_bit7_from_dat_0003c00f. No other side
 *   effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_flag_bits_000f00ec(uint param_1)

{
  if ((DAT_0003c447 != '\x02') || (param_1 < 0x10)) {
    param_1 = param_1 | 2;
  }
  if ((param_1 & 3) == 3) {
    clear_bit7_of_dat_00000006();
  }
  else {
    update_bit7_from_dat_0003c00f();
  }
  return;
}
