/* @k10d task_create_and_readylist @ 0x1000f3ec
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed create_and_ready_task)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Initializes a task control block and inserts it into the ready list if capacity allows.
 * summary:
 *   Calls cre_tsk to initialize the task structure pointed to by param_1. Checks a global
 *   counter (DAT_10011d4c) against a limit of 0x400; if below the limit, calls
 *   ready_list_insert to insert the task into the ready list. Finally calls
 *   setup_task_stack with the task pointer and a second parameter, likely for final setup
 *   or logging. The source module is identified as rtos_kernel, supporting the
 *   interpretation of standard task creation primitives.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void task_create_and_readylist(int param_1,uint32_t param_2)

{
  cre_tsk((short)param_1);
  if (DAT_10011d4c/*ROM*/ < 0x400) {
    ready_list_insert((short)param_1);
  }
  setup_task_stack(param_1,param_2);
  return;
}
