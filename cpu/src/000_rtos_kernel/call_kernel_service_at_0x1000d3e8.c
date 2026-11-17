/* @k10d call_kernel_service_at_0x1000d3e8 @ 0x100114b0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Invokes a single kernel service routine at 0x1000d3e8 and returns zero.
 * summary:
 *   This function is a thin wrapper that calls the code pointer at 0x1000d3e8. It resides
 *   in the rtos_kernel module alongside other kernel-service routines. It returns 0 after
 *   the call completes. The specific role of the callee at 0x1000d3e8 is not identified in
 *   the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_kernel_service_at_0x1000d3e8(void)

{
  (*(code *)0x1000d3e8/*ROM*/)();
  return 0;
}
