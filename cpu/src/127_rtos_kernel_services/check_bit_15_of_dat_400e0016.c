/* @k10d check_bit_15_of_dat_400e0016 @ 0x1045297a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 15 of the global variable at 0x400e0016 is set.
 * summary:
 *   The function performs a single bitwise AND operation between the 32-bit value at
 *   0x400e0016 and the mask 0x8000. It returns a boolean result indicating whether bit 15
 *   is set. The role of the global variable 0x400e0016 is not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_bit_15_of_dat_400e0016(uint32_t param_x0)

{
  return (_DAT_400e0016 & 0x8000) != 0;
}
