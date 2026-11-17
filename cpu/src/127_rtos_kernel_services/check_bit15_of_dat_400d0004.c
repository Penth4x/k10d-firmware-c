/* @k10d check_bit15_of_dat_400d0004 @ 0x1045286c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 15 of the global variable at 0x400d0004 is set.
 * summary:
 *   The function performs a single bitwise AND operation on the global variable
 *   _DAT_400d0004 with the mask 0x8000. It returns a boolean result indicating whether bit
 *   15 is set. The role of the global variable is not determinable from the provided
 *   pseudocode or context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_bit15_of_dat_400d0004(uint32_t param_x0)

{
  return (_DAT_400d0004 & 0x8000) != 0;
}
