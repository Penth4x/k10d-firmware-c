/* @k10d descriptor8_zero @ 0x1044be7e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed zero_eight_byte_struct)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears the first 8 bytes of a memory region pointed to by param_1.
 * summary:
 *   The function writes zero to the first 8 bytes of the memory location provided in
 *   param_1. It performs no other operations and has no callees. The specific role of the
 *   8-byte structure is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void descriptor8_zero(uint8_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}
