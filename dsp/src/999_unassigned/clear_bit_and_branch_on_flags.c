/* @k10d clear_bit_and_branch_on_flags @ 0x000f63e2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears bit 3 of DAT_0003c4bf and branches to one of two callees based on bit 0 of
 *   DAT_0003c491.
 * summary:
 *   The function first calls clear_state_flags_and_set_bit, then clears bit 3 of the global
 *   DAT_0003c4bf. It checks bit 0 of DAT_0003c491; if clear, it conditionally sets bit 1 of
 *   DAT_0003c028 or DAT_0003c4d0 based on other flag bits and calls FUN_000f641a. If bit 0
 *   is set, it calls dispatch_nibble_table_entries instead. The specific roles of these
 *   globals and callees are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_and_branch_on_flags(void)

{
  clear_state_flags_and_set_bit();
  DAT_0003c4bf = DAT_0003c4bf & 0xf7;
  if ((DAT_0003c491 & 1) == 0) {
    if ((DAT_0003c030 & 4) != 0) {
      DAT_0003c028 = DAT_0003c028 | 2;
    }
    if ((DAT_0003c393 & 8) != 0) {
      DAT_0003c4d0 = DAT_0003c4d0 | 2;
    }
    FUN_000f641a();
  }
  else {
    dispatch_nibble_table_entries();
  }
  return;
}
