/* @k10d act_tsk @ 0x1000e6ac
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed activate_task_entry)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Activates a task by writing a status value into two task-control-block fields.
 * summary:
 *   Takes a task index (param_1) and a status value (param_2). It writes param_2 into the
 *   task's status field at DAT_6a0018c0 + index*4 via act_tsk_framewrite, and into a second
 *   field at 0x6a003778 + index*4 via store_word_to_pointer_1000d41a. This matches the
 *   µITRON act_tsk primitive which updates the task state to ready/active.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void act_tsk(int param_1,uint32_t param_2)

{
  act_tsk_framewrite(*(int *)(&DAT_6a0018c0 + param_1 * 4),param_2);
  store_word_to_pointer_1000d41a((uint32_t *)(param_1 * 4 + 0x6a003778),param_2);
  return;
}
