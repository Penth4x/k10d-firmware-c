/* @k10d compute_scaled_offset @ 0x1045a2f8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns a 16-bit value computed as param_2 * 5 - 50.
 * summary:
 *   The function performs a simple arithmetic operation on param_2, multiplying by 5 and
 *   subtracting 0x32 (50), then truncating to a 16-bit signed integer. It has no callees
 *   and no side effects. The specific purpose of this scaling factor is not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_scaled_offset(uint32_t param_1,short param_2)

{
  return (int)(short)(param_2 * 5 + -0x32);
}
