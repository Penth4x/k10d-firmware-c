/* @k10d execute_sequential_delay_loops @ 0x000f1ba4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Runs five sequential loops, each calling a distinct delay routine and a status update
 *   function a configurable number of times.
 * summary:
 *   The function reads five 16-bit counters from DAT_0003c8a0 through DAT_0003c8a8. For
 *   each non-zero counter, it executes a loop that calls a specific delay function
 *   (FUN_000ddf3a, update_state_flags_and_status_byte, initialize_state_block,
 *   update_status_flags_and_counters_000de274, or update_global_state_flags) with a fixed
 *   timeout argument, followed by FUN_000d5642 with a corresponding small integer. The
 *   loops execute in a fixed order, and the function returns after all configured loops
 *   have completed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void execute_sequential_delay_loops(void)

{
  uint uVar1;
  
  DAT_0003c108 = DAT_0003c8aa;
  uVar1 = 0;
  if (0 < _DAT_0003c8a0) {
    do {
      FUN_000ddf3a(30000);
      FUN_000d5642(0x1e);
      uVar1 = uVar1 + 1 & 0xffff;
    } while ((int)uVar1 < (int)_DAT_0003c8a0);
  }
  uVar1 = 0;
  if (0 < _DAT_0003c8a2) {
    do {
      update_state_flags_and_status_byte(30000);
      FUN_000d5642(0x1e);
      uVar1 = uVar1 + 1 & 0xffff;
    } while ((int)uVar1 < (int)_DAT_0003c8a2);
  }
  uVar1 = 0;
  if (0 < _DAT_0003c8a4) {
    do {
      initialize_state_block(10000);
      FUN_000d5642(10);
      uVar1 = uVar1 + 1 & 0xffff;
    } while ((int)uVar1 < (int)_DAT_0003c8a4);
  }
  uVar1 = 0;
  if (0 < _DAT_0003c8a6) {
    do {
      update_status_flags_and_counters_000de274(1000);
      FUN_000d5642(1);
      uVar1 = uVar1 + 1 & 0xffff;
    } while ((int)uVar1 < (int)_DAT_0003c8a6);
  }
  uVar1 = 0;
  if (0 < _DAT_0003c8a8) {
    do {
      update_global_state_flags(1000);
      FUN_000d5642(1);
      uVar1 = uVar1 + 1 & 0xffff;
    } while ((int)uVar1 < (int)_DAT_0003c8a8);
  }
  return;
}
