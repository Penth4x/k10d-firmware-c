/* @k10d sd_csd_c_size_mult @ 0x10447196
 * name: verified (structural evidence: decomp: (b[9]&3)<<1 | b[10]>>7)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Extracts the 3-bit C_SIZE_MULT field (CSD v1 bits 49:47) from a CSD register image.
 * summary:
 *   VERIFIED: decomp: (b[9]&3)<<1 | b[10]>>7
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint sd_csd_c_size_mult(int param_1)

{
  return (*(byte *)(param_1 + 9) & 3) << 1 | (int)(uint)*(byte *)(param_1 + 10) >> 7;
}
