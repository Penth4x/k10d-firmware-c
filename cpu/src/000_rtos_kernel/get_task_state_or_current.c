/* @k10d get_task_state_or_current @ 0x1000e710
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Returns the state of a task given by param_1, or the current task state if param_1
 *   matches a special sentinel.
 * summary:
 *   The function checks if param_1 equals the global _DAT_6a003758. If it does, it calls
 *   the function at 0x1000d3ca (likely a kernel service to get the current task's state)
 *   and stores the result in *param_2. Otherwise, it treats param_1 as an index into the
 *   array at DAT_6a0018c0 and stores the value at that index in *param_2. This pattern is
 *   typical for a kernel API that can query the state of a specific task or the current
 *   task.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_task_state_or_current(int param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  
  if (param_1 == _DAT_6a003758) {
    uVar1 = (*(code *)0x1000d3ca/*ROM*/)();
    *param_2 = uVar1;
  }
  else {
    *param_2 = *(uint32_t *)(&DAT_6a0018c0 + param_1 * 4);
  }
  return;
}
