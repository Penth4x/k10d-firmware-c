/* @k10d clear_three_status_bits @ 0x000e3650
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears specific bits in three global state variables and conditionally calls a helper.
 * summary:
 *   The function calls set_bits_4_and_5_of_global_000e36dc, then clears bit 2 of
 *   DAT_0003c038, bit 0 of DAT_0003c086, and bit 1 of DAT_0003c41d. It then calls
 *   clear_state_flags_and_notify and, if bit 5 of DAT_0003c1eb is clear, calls
 *   update_flag_and_notify. The specific roles of the DAT globals and callees are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_three_status_bits(void)

{
  set_bits_4_and_5_of_global_000e36dc();
  DAT_0003c038 = DAT_0003c038 & 0xe7;
  DAT_0003c086 = DAT_0003c086 & 0xfe;
  DAT_0003c41d = DAT_0003c41d & 0xde;
  clear_state_flags_and_notify();
  if ((DAT_0003c1eb & 0x20) == 0) {
    update_flag_and_notify();
  }
  return;
}
