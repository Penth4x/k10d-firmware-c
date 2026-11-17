/* @k10d branch_on_state_byte @ 0x000e367e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Selects between two callees based on the value of DAT_0003c390 and bits of
 *   DAT_0003c394.
 * summary:
 *   Reads the byte at DAT_0003c390 and, if it is 0x03, 0x05, or 0x04 with bits 3:2 not
 *   equal to 2, calls set_bits_4_and_5_of_global_000e36dc; otherwise calls
 *   update_nibble_via_callback. No other side effects are visible in the pseudocode. The
 *   meaning of the state byte and the two branches is not determinable from the given code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void branch_on_state_byte(void)

{
  if ((DAT_0003c390 == '\x03') ||
     (((DAT_0003c390 == '\x04' && ((DAT_0003c394 & 0xf) >> 2 != 2)) || (DAT_0003c390 == '\x05')))) {
    set_bits_4_and_5_of_global_000e36dc();
  }
  else {
    update_nibble_via_callback();
  }
  return;
}
