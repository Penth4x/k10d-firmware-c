/* @k10d switchD @ 0x1000ff64
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_unrecovered_jumptable)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Indirectly calls a function pointer from an unrecovered jump table.
 * summary:
 *   The function loads an address from an unrecovered jump table and performs an indirect
 *   call. It is located in the rtos_kernel module alongside other kernel service routines.
 *   No specific camera subsystem behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void switchD_1000ff64__switchD(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x1000ff64. Too many branches */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
