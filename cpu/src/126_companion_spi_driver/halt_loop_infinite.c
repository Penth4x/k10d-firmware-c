/* @k10d halt_loop_infinite @ 0x10439594
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed infinite_halt_loop)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Spins forever in a tight do-while loop, halting execution.
 * summary:
 *   The function contains only an unconditional infinite loop with no instructions, memory
 *   accesses, or calls. It is reached from 0x10008000, likely as a terminal state or
 *   watchdog halt path. No side effects are observable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x10439610) */

void halt_loop_infinite(void)

{
                    /* Purpose: Infinite halt loop. Blocks execution indefinitely (used for fatal
                       error or debug breakpoint).
                       Returns: never returns. */
                    /* WARNING: Do nothing block with infinite loop */
  __halt();
}
