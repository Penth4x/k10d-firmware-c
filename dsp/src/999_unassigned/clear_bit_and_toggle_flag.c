/* @k10d clear_bit_and_toggle_flag @ 0x000cc7de
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears bit 3 of a global flag and conditionally calls a helper or sets bit 6 of another
 *   global.
 * summary:
 *   The function clears bit 3 (0x08) of DAT_000000d0. It then checks bits 5 and 6 of
 *   DAT_0003ce04; if bit 5 is clear or bit 6 is already set, it calls
 *   clear_bits_and_shift_global. Otherwise, it sets bit 6 of DAT_0003ce04. The roles of the
 *   global variables and the callee are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_and_toggle_flag(void)

{
  DAT_000000d0 = DAT_000000d0 & 0xdf;
  if (((DAT_0003ce04 & 0x20) == 0) || ((DAT_0003ce04 & 0x40) != 0)) {
    clear_bits_and_shift_global();
  }
  else {
    DAT_0003ce04 = DAT_0003ce04 | 0x40;
  }
  return;
}
