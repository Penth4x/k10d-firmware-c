/* @k10d call_kernel_service_with_param @ 0x1000e9d8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Invokes a kernel service routine at 0x1000d486 with the provided parameter and a fixed
 *   constant.
 * summary:
 *   The function takes a single pointer argument and passes it along with the constant
 *   0x6a0036c8 to a routine at 0x1000d486. It is located in the rtos_kernel module,
 *   suggesting it wraps a specific kernel operation. The return value is always 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_kernel_service_with_param(void *param_1)

{
  (*(code *)0x1000d486/*ROM*/)(param_1,0x6a0036c8);
  return 0;
}
