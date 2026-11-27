/* @k10d dispatch_rtos_operation_by_id_104585bc @ 0x104585bc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Dispatches to one of four RTOS wrapper functions based on the value of param_2 when
 *   param_3 is non-zero.
 * summary:
 *   The function acts as a simple switch dispatcher. It checks if param_3 is non-zero, then
 *   branches on param_2 to call one of four adjacent functions
 *   (copy_sixteen_bytes_from_mmio_10458764, copy_sixteen_bytes_from_mmio_104587aa,
 *   copy_sixteen_bytes_from_mmio_104587f0, copy_mmio_block_to_buffer_1045883e)
 *   corresponding to values 0, 0x1000, 0x2000, and 0x3000 respectively. Given the module
 *   context (rtos_wrappers_and_heap), these callees likely represent specific kernel
 *   operations or heap management routines, but their exact roles are not defined in the
 *   provided callee list.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_rtos_operation_by_id_104585bc(uint32_t param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    if (param_2 == 0) {
      copy_sixteen_bytes_from_mmio_10458764((uint32_t)param_1, (uint32_t)param_2);
    }
    else if (param_2 == 0x1000) {
      copy_sixteen_bytes_from_mmio_104587aa((uint32_t)param_1, (uint32_t)param_2);
    }
    else if (param_2 == 0x2000) {
      copy_sixteen_bytes_from_mmio_104587f0((uint32_t)param_1, (uint32_t)param_2);
    }
    else if (param_2 == 0x3000) {
      copy_mmio_block_to_buffer_1045883e((uint32_t)param_1, (uint32_t)param_2);
    }
  }
  return;
}
