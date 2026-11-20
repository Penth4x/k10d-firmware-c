/* @k10d clear_and_mask_state_flags @ 0x000f3260
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Resets several DAT globals to zero and applies specific bit masks to others.
 * summary:
 *   Calls clear_status_flag_bytes_000f329e, then sets DAT_0003c041 and DAT_0003c49a to 0.
 *   Masks DAT_0003c4d7 with 0x3f and DAT_0003c410 with 1 before ORing with 0x2c. Calls
 *   clear_byte_range_at_0x3c390 and sets DAT_0003c411 to 0. The specific roles of these DAT
 *   globals are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_and_mask_state_flags(void)

{
  clear_status_flag_bytes_000f329e();
  DAT_0003c041 = 0;
  DAT_0003c49a = 0;
  DAT_0003c4d7 = DAT_0003c4d7 & 0x3f;
  clear_byte_range_at_0x3c390();
  DAT_0003c410 = DAT_0003c410 & 1 | 0x2c;
  DAT_0003c411 = 0;
  return;
}
