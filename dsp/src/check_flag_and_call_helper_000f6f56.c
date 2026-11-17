/* @k10d check_flag_and_call_helper_000f6f56 @ 0x000f6f56
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Tests bit 6 of DAT_0003c128 and calls poll_input_and_fill_buffer with fixed arguments
 *   if set.
 * summary:
 *   The function checks if bit 6 (0x40) of the global DAT_0003c128 is set. If the condition
 *   is true, it invokes poll_input_and_fill_buffer with arguments 0x82, 1, a pointer to
 *   DAT_0003c12d, and 1. No other side effects or state changes are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_flag_and_call_helper_000f6f56(void)

{
  if ((DAT_0003c128 & 0x40) != 0) {
    poll_input_and_fill_buffer(0x82,1,(void *)&DAT_0003c12d,1);
  }
  return;
}
