/* @k10d dispatch_on_state_value_000e8d7c @ 0x000e8d7c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls a common routine then branches to one of three handlers based on the value of
 *   _DAT_0003c21e.
 * summary:
 *   The function first calls poll_status_bit_sequence unconditionally. It then checks the
 *   global _DAT_0003c21e: if it is less than 4, it calls dispatch_on_state_index_000e8db2;
 *   if it is between 4 and 7, it calls dispatch_state_machine_000e8df4; and if it equals
 *   0xc (12), it calls FUN_000ed71e. The specific roles of the callees and the global
 *   variable are unknown, so the function acts as a simple state-based dispatcher.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_on_state_value_000e8d7c(void)

{
  poll_status_bit_sequence();
  if (_DAT_0003c21e < 4) {
    dispatch_on_state_index_000e8db2();
  }
  if ((3 < _DAT_0003c21e) && (_DAT_0003c21e < 8)) {
    dispatch_state_machine_000e8df4();
  }
  if (_DAT_0003c21e == 0xc) {
    FUN_000ed71e();
  }
  return;
}
