/* @k10d enter_infinite_loop_000e2622 @ 0x000e2622
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls two setup functions then spins in an infinite loop.
 * summary:
 *   Invokes write_masked_field_and_call_two_routines with arguments 0xf and 3, then
 *   busy_wait_on_mode_flag with argument 0x50, and finally enters a do-while(true) loop
 *   that never exits. The function never returns, suggesting it is a terminal state or
 *   watchdog handler. No further context is available from the unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x000e2656) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void enter_infinite_loop_000e2622(void)

{
  write_masked_field_and_call_two_routines(0xf,3);
  busy_wait_on_mode_flag(0x50);
  __halt();
}
