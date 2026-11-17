/* @k10d enter_infinite_loop_000e25ca @ 0x000e25ca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls two setup functions then spins in an infinite loop.
 * summary:
 *   Invokes write_masked_field_and_call_two_routines with arguments 0xf and 6, then
 *   busy_wait_on_mode_flag with argument 0x50, and finally executes a do-while(true) loop
 *   that never exits. The function never returns, effectively halting or parking the
 *   calling task. No other side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x000e25fe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void enter_infinite_loop_000e25ca(void)

{
  write_masked_field_and_call_two_routines(0xf,6);
  busy_wait_on_mode_flag(0x50);
  __halt();
}
