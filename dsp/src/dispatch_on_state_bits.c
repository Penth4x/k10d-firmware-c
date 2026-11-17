/* @k10d dispatch_on_state_bits @ 0x000e1320
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Checks a state word and calls one of two handlers based on bits 3-5 of DAT_0003c100.
 * summary:
 *   The function first tests whether the lower 13 bits of DAT_0003c124 equal 8; if not, it
 *   examines bits 3-5 of DAT_0003c100. If those bits are 0x18, it calls
 *   adjust_char_based_on_state; if they are 0x28, it calls remap_key_state_byte. No other
 *   actions are taken.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_on_state_bits(void)

{
  if ((_DAT_0003c124 & 0x11ff) != 8) {
    if ((DAT_0003c100 & 0xf8) == 0x18) {
      adjust_char_based_on_state();
    }
    else if ((DAT_0003c100 & 0xf8) == 0x28) {
      remap_key_state_byte();
    }
  }
  return;
}
