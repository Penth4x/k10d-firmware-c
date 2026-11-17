/* @k10d dispatch_on_state_index_000e8db2 @ 0x000e8db2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Selects and calls one of four handler functions based on the value of a 4-state index
 *   variable.
 * summary:
 *   Reads the global _DAT_0003c21e and branches to FUN_000ed66c,
 *   clear_bit2_of_dat_00000005, clear_bit1_of_dat_00000005, or clear_bit_23_after_call for
 *   values 0 through 3 respectively. No other side effects or data modifications are
 *   visible in this function. The specific meaning of the state index and the handlers'
 *   roles are not determinable from the provided pseudocode and unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_on_state_index_000e8db2(void)

{
  if (_DAT_0003c21e == 0) {
    FUN_000ed66c();
  }
  else if (_DAT_0003c21e == 1) {
    clear_bit2_of_dat_00000005();
  }
  else if (_DAT_0003c21e == 2) {
    clear_bit1_of_dat_00000005();
  }
  else if (_DAT_0003c21e == 3) {
    clear_bit_23_after_call();
  }
  return;
}
