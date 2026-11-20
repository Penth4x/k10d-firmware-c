/* @k10d caseD_d_1000ff36 @ 0x1000ff36
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed compute_task_control_block_offset)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Computes a byte offset into a task-control-block array from a 16-bit index.
 * summary:
 *   Returns the address of an element in an array of 0x18-byte structures based on param_1.
 *   The base address is DAT_10011cfc and the offset is param_1 * 0x18 - 0x18. Given the
 *   module context (RTOS kernel, scheduler/ready-list), this likely calculates the location
 *   of a specific task control block within a kernel-managed array. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int switchD_1000fe8c__caseD_d(short param_1)

{
  return DAT_10011cfc/*ROM*/ + param_1 * 0x18 + -0x18;
}
