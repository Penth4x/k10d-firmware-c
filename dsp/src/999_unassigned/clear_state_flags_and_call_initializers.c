/* @k10d clear_state_flags_and_call_initializers @ 0x000d19b4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears specific bits in two global byte variables and zeroes four global words, then
 *   calls three unknown functions.
 * summary:
 *   The function masks DAT_0003ce04 with 0x7f (clearing bit 7) and DAT_0003ce01 with 0xef
 *   (clearing bit 3). It then calls FUN_000cd58c, FUN_000d19f0, and
 *   clear_flag_bit_and_counter. Finally, it sets four global variables (_DAT_0003ce38,
 *   _DAT_0003ce30, _DAT_0003ce36, _DAT_0003ce3a) to zero. The specific roles of the globals
 *   and callees are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_state_flags_and_call_initializers(void)

{
  DAT_0003ce04 = DAT_0003ce04 & 0x7f;
  DAT_0003ce01 = DAT_0003ce01 & 0xef;
  FUN_000cd58c();
  FUN_000d19f0();
  clear_flag_bit_and_counter();
  _DAT_0003ce38 = 0;
  _DAT_0003ce30 = 0;
  _DAT_0003ce36 = 0;
  _DAT_0003ce3a = 0;
  return;
}
