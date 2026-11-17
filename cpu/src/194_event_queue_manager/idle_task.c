/* @k10d idle_task @ 0x10491512
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed idle_task_infinite_loop)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Spins in an infinite loop with no operations, serving as a parked or idle task.
 * summary:
 *   The function consists solely of a do-while loop that repeats indefinitely without
 *   executing any instructions. It has no callees and performs no memory or register
 *   operations. This pattern is typical for an idle task or a halt state in an RTOS where
 *   the CPU waits for interrupts.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void idle_task(void)

{
  __halt();
}
