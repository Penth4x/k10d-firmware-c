/* @k10d classify_heap_alloc_result @ 0x1045a28c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Maps the return value of compute_exposure_compensation_value_1045a2a6 into a 3-state
 *   code (1, 2, or 3) based on its sign and magnitude.
 * summary:
 *   Calls compute_exposure_compensation_value_1045a2a6 and inspects the integer result. If
 *   the result is negative, it returns 1. If the result is between 0 and 0x1f inclusive, it
 *   returns 2. If the result is 0x20 or greater, it returns 3. The function acts as a
 *   simple state classifier for the value returned by its sole callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t classify_heap_alloc_result(uint32_t param_x0, uint32_t param_x1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = compute_exposure_compensation_value_1045a2a6(__frv_reg_unset(4), __frv_reg_unset(5));
  if (iVar1 < 0x20) {
    uVar2 = 1;
    if (-1 < iVar1) {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}
