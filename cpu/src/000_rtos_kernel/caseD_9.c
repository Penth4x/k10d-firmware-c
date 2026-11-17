/* @k10d caseD_9 @ 0x1000feec
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed compute_tcb_offset)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Computes a byte offset into a task-control-block array from an index and a base
 *   pointer.
 * summary:
 *   The function takes a base pointer (in_r0) and an index (param_1), multiplies the index
 *   by 0x24 (36 bytes), and adds the result to the base pointer minus 0x20. This is a
 *   standard array-indexing calculation to locate a specific element within a fixed-size
 *   structure array, likely a task control block given the 0x24 stride and the rtos_kernel
 *   module context. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int switchD_1000fe8c__caseD_9(short param_1)

{
  int *r0_in;
  
  return *r0_in + param_1 * 0x24 + -0x20;
}
