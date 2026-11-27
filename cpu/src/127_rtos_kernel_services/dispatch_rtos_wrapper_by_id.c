/* @k10d dispatch_rtos_wrapper_by_id @ 0x10458c82
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Dispatches to one of four RTOS wrapper functions based on param_2 when param_3 is non-
 *   zero.
 * summary:
 *   The function checks if param_3 is non-zero, then branches on param_2 (0, 0x1000,
 *   0x2000, 0x3000) to call one of four adjacent wrapper functions. It is located in the
 *   rtos_wrappers_and_heap module, which contains one-call wrappers that enter the kernel
 *   via TBR+0x2fc. The specific RTOS operation performed depends on which callee is
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_rtos_wrapper_by_id(uint32_t param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    if (param_2 == 0) {
      copy_sixteen_bytes_from_mmio_10458e34((uint32_t)param_1, (uint32_t)param_2);
    }
    else if (param_2 == 0x1000) {
      copy_sixteen_bytes_from_mmio_10458e82((uint32_t)param_1, (uint32_t)param_2);
    }
    else if (param_2 == 0x2000) {
      copy_sixteen_bytes_from_mmio_10458ed0((uint32_t)param_1, (uint32_t)param_2);
    }
    else if (param_2 == 0x3000) {
      copy_mmio_block_to_buffer_10458f1e((uint32_t)param_1, (uint32_t)param_2);
    }
  }
  return;
}
