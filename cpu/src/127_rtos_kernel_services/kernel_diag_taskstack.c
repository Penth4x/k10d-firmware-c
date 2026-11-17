/* @k10d kernel_diag_taskstack @ 0x1045a0b2
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_task_stack_overflow)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Checks whether the task identified by the object's stored task ID has a valid stack,
 *   returning true if the kernel reports no overflow.
 * summary:
 *   Reads a 16-bit task ID from the object pointed to by param_1. If the ID is positive, it
 *   calls check_task_state_transition (a kernel wrapper in the rtos_wrappers_and_heap
 *   module) with that ID. Returns true if the callee returns 0, indicating the stack check
 *   passed. The prior note about 'kernel_diag_taskstack' and stack-overflow strings is
 *   consistent with this being a µITRON-style task stack validity check.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Kernel diagnostics: task-stack-overflow checks (strings 0x105a2c34/64/94), 0x5aa55aa5 magic. 48
   callers. Called by service-path ctors */

bool kernel_diag_taskstack(int *param_1)

{
  int iVar1;
  
  iVar1 = -3;
  if (0 < *param_1) {
    iVar1 = check_task_state_transition((int)(short)*param_1);
  }
  return iVar1 == 0;
}
