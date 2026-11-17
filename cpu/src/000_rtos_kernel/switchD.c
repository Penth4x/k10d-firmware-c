/* @k10d switchD @ 0x1000fe8c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_via_unrecovered_jumptable)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Indirectly calls a target function through an unrecovered jump table pointer.
 * summary:
 *   The function loads an unrecovered jump table pointer and performs an indirect call
 *   through it. It resides in the rtos_kernel module alongside other kernel-service
 *   routines. No specific camera subsystem behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void switchD_1000fe8c__switchD(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x1000fe8c. Too many branches */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
