/* @k10d dispatch_kernel_service_100119d8 @ 0x100119d8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Indirectly calls a kernel service routine selected by an index in param_1.
 * summary:
 *   The function uses param_1 as an index into the function pointer table PTR_FUN_10011db8
 *   and executes the pointed-to routine. It resides in the rtos_kernel module alongside
 *   other int 0x40 kernel-service routines. No other side effects or arguments are passed
 *   to the target function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_kernel_service_100119d8(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x100119e2. Too many branches */
  (*(code *)(&PTR_FUN_10011db8)[param_1])();
  return;
}
