/* @k10d check_bit15_of_dat_400d0006 @ 0x10452882
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 15 of the global variable at 0x400d0006 is set.
 * summary:
 *   The function performs a single bitwise AND operation between the 32-bit value at
 *   0x400d0006 and the mask 0x8000. It returns a boolean result indicating whether bit 15
 *   is set. No other side effects or kernel calls are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_bit15_of_dat_400d0006(uint32_t param_x0)

{
  return (_DAT_400d0006 & 0x8000) != 0;
}
