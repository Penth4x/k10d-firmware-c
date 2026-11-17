/* @k10d sd_csd_c_size @ 0x10447148
 * name: verified (structural evidence: decomp: (b[6]&3)<<10 | b[7]<<2 | b[8]>>6)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Extracts the 12-bit C_SIZE field (CSD v1 bits 73:62) from a CSD register image.
 * summary:
 *   VERIFIED: decomp: (b[6]&3)<<10 | b[7]<<2 | b[8]>>6
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint sd_csd_c_size(int param_1)

{
  return (*(byte *)(param_1 + 6) & 3) << 10 | (uint)*(byte *)(param_1 + 7) << 2 |
         (int)(uint)*(byte *)(param_1 + 8) >> 6;
}
