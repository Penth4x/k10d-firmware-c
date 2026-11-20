/* @k10d reset_flag_after_call @ 0x000c2018
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls clear_dat_0003c180_block and then clears the global DAT_0003c181 to zero.
 * summary:
 *   The function performs a single call to clear_dat_0003c180_block and then writes 0 to
 *   the global variable DAT_0003c181. The role of DAT_0003c181 is not determinable from the
 *   provided pseudocode, as it is not a known status or control register. The function has
 *   no other side effects or arguments.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_flag_after_call(void)

{
  clear_dat_0003c180_block();
  DAT_0003c181 = 0;
  return;
}
