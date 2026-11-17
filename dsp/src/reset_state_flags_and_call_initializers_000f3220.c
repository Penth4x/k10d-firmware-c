/* @k10d reset_state_flags_and_call_initializers_000f3220 @ 0x000f3220
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Calls three helper functions and clears or masks several global state variables.
 * summary:
 *   The function invokes clear_status_flag_bytes_000f329e, clear_flag_if_value_4_or_5, and
 *   clear_byte_range_at_0x3c390 in sequence. It sets DAT_0003c041 and DAT_0003c49a to 0,
 *   masks DAT_0003c4d7 with 0x3f, sets bits in DAT_0003c410 (clearing all but bit 0, then
 *   setting 0x2c), and clears DAT_0003c411. The specific roles of the DAT globals and
 *   callees are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_state_flags_and_call_initializers_000f3220(void)

{
  clear_status_flag_bytes_000f329e();
  clear_flag_if_value_4_or_5();
  DAT_0003c041 = 0;
  DAT_0003c49a = 0;
  DAT_0003c4d7 = DAT_0003c4d7 & 0x3f;
  clear_byte_range_at_0x3c390();
  DAT_0003c410 = DAT_0003c410 & 1 | 0x2c;
  DAT_0003c411 = 0;
  return;
}
