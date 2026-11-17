/* @k10d init_kernel_timer_struct @ 0x1000f3c0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Initializes a kernel timer or timeout structure by setting up its fields and
 *   registering it.
 * summary:
 *   The function calls initialize_task_control_block to initialize a structure at
 *   DAT_10011c28 with parameters 0 and DAT_10011c3c, then calls task_create_and_readylist
 *   to register or activate it with a pointer to DAT_6a001c28. Given the module context
 *   (RTOS kernel, timeout-queue code), this likely sets up a timer object for the
 *   scheduler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_kernel_timer_struct(void)

{
  initialize_task_control_block(0,(uint16_t *)&DAT_10011c28/*ROM*/,DAT_10011c3c/*ROM*/);
  task_create_and_readylist(0,_DAT_6a001c28);
  return;
}
