/* @k10d check_flag_and_call_helper_000db7e6 @ 0x000db7e6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns 0 if bit 7 of DAT_0003c193 is clear, otherwise sets bit 5 of DAT_0003c198 and
 *   returns the result of clear_flag_and_reset_state.
 * summary:
 *   The function tests bit 7 of the global byte at DAT_0003c193. If the bit is not set, it
 *   returns 0. If the bit is set, it modifies DAT_0003c198 by clearing bit 3 and setting
 *   bit 5 (mask 0xf7, OR 0x20), then calls clear_flag_and_reset_state and returns its
 *   result. The roles of the two global variables and the callee are not determinable from
 *   the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_flag_and_call_helper_000db7e6(void)

{
  uint32_t uVar1;
  
  if ((DAT_0003c193 & 0x80) == 0) {
    uVar1 = 0;
  }
  else {
    DAT_0003c198 = DAT_0003c198 & 0xf7 | 0x20;
    uVar1 = clear_flag_and_reset_state();
  }
  return uVar1;
}
