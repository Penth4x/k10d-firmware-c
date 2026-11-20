/* @k10d cre_tsk_insert_setup @ 0x1000fa00
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed create_and_activate_task)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Creates a new RTOS task and immediately activates it for execution.
 * summary:
 *   This function serves as a high-level wrapper for task creation in the REALOS kernel. It
 *   calls cre_tsk to allocate the task control block, ready_list_insert to initialize the
 *   task stack, and setup_task_stack to activate the task (equivalent to act_tsk). The
 *   return value is passed through from the final callee, likely indicating the status or
 *   task ID.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t cre_tsk_insert_setup(int r4_in, uint32_t r5_in)

{
  cre_tsk((short)r4_in);
  ready_list_insert((short)r4_in);
  setup_task_stack(r4_in,r5_in);
  return r4_in;
}
