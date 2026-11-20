/* @k10d set_flag_and_call_helper_000db7ba @ 0x000db7ba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Conditionally sets bit 7 of DAT_0003c198, forces bit 5, clears bit 2, and calls
 *   clear_flag_and_reset_state.
 * summary:
 *   The function checks if bit 7 of DAT_0003c193 and bit 5 of DAT_0003c198 are clear. If
 *   so, it sets bit 7 of DAT_0003c198. It then unconditionally sets bit 5 and clears bit 2
 *   of DAT_0003c198. Finally, it calls clear_flag_and_reset_state. The specific roles of
 *   the data globals and the callee are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_and_call_helper_000db7ba(void)

{
  uint32_t uVar1;
  
  if (((DAT_0003c193 & 0x80) == 0) && ((DAT_0003c198 & 0x20) == 0)) {
    DAT_0003c198 = DAT_0003c198 | 0x80;
  }
  DAT_0003c198 = DAT_0003c198 & 0xf7 | 0x20;
  uVar1 = clear_flag_and_reset_state();
  return uVar1;
}
