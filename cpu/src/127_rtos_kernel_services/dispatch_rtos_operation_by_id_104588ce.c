/* @k10d dispatch_rtos_operation_by_id_104588ce @ 0x104588ce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Dispatches to one of four RTOS wrapper functions based on the value of param_2 when
 *   param_3 is non-zero.
 * summary:
 *   The function acts as a switch dispatcher for RTOS kernel operations. It checks if
 *   param_3 is non-zero, then selects a specific wrapper function
 *   (copy_sixteen_bytes_from_mmio_10458ac8, copy_sixteen_bytes_from_mmio_10458b1a,
 *   copy_mmio_block_to_buffer_10458b7c, or copy_mmio_block_to_buffer_10458bde) based on
 *   whether param_2 equals 0, 0x1000, 0x2000, or 0x3000 respectively. This pattern is
 *   consistent with the module's role of providing one-call wrappers for kernel primitives.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_rtos_operation_by_id_104588ce(uint32_t param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    if (param_2 == 0) {
      copy_sixteen_bytes_from_mmio_10458ac8(__frv_reg_unset(4), __frv_reg_unset(5));
    }
    else if (param_2 == 0x1000) {
      copy_sixteen_bytes_from_mmio_10458b1a(__frv_reg_unset(4), __frv_reg_unset(5));
    }
    else if (param_2 == 0x2000) {
      copy_mmio_block_to_buffer_10458b7c(__frv_reg_unset(4), __frv_reg_unset(5));
    }
    else if (param_2 == 0x3000) {
      copy_mmio_block_to_buffer_10458bde(__frv_reg_unset(4), __frv_reg_unset(5));
    }
  }
  return;
}
