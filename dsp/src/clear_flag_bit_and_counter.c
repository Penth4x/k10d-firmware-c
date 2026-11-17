/* @k10d clear_flag_bit_and_counter @ 0x000d1a4c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clears bit 7 of DAT_0003ce02 and zeroes DAT_0003ce2f.
 * summary:
 *   The function performs two simple memory writes: it masks DAT_0003ce02 with 0x7f to
 *   clear its most significant bit, and sets DAT_0003ce2f to 0. No other operations or
 *   callees are present. The specific roles of these two globals are not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_bit_and_counter(void)

{
  DAT_0003ce02 = DAT_0003ce02 & 0x7f;
  DAT_0003ce2f = 0;
  return;
}
