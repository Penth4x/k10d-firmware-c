/* @k10d dispatch_kernel_service_1000e6e0 @ 0x1000e6e0
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Indexes a kernel-service table by param_1 and calls the resulting routine.
 * summary:
 *   Computes an address at 0x6a001bf4 + param_1*0x44, loads the 32-bit value there, and
 *   invokes it via enqueue_timeout_event_1000d42e. The source module is the rtos_kernel int
 *   0x40 kernel-service routines, so this appears to be a dispatcher over a table of kernel
 *   service handlers. The callee enqueue_timeout_event_1000d42e is unnamed, so the exact
 *   service semantics are not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_kernel_service_1000e6e0(short param_1)

{
  enqueue_timeout_event_1000d42e(*(uint32_t *)(param_1 * 0x44 + 0x6a001bf4));
  return;
}
