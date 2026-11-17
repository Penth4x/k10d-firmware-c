/* @k10d task_frame_init @ 0x1000d3fe
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed init_task_context_frame)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Populates a task context frame with entry point, exit stub, argument, and initial
 *   processor status.
 * summary:
 *   Writes four fields into the memory block pointed to by param_2: the entry PC (param_1)
 *   at offset 0, a constant 0x1f0030 at offset 1, the address of task_exit_stub at offset
 *   2, and param_3 at offset 9. The constant 0x1f0030 matches the FR60Lite PS register
 *   format for user mode with interrupts enabled. This function is part of the RTOS kernel
 *   module and prepares the initial stack frame for a new task.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void task_frame_init(uint32_t param_1,uint32_t *param_2,uint32_t param_3)

{
  param_2[9] = param_3;
  *param_2 = param_1;
  param_2[2] = (uint32_t)task_exit_stub;
  param_2[1] = 0x1f0030;
  return;
}
