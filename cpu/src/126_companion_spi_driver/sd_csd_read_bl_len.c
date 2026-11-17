/* @k10d sd_csd_read_bl_len @ 0x1044710e
 * name: verified (structural evidence: decomp: b[5] & 0xf)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Extracts the 4-bit READ_BL_LEN field from a CSD register image (byte 5 low nibble).
 * summary:
 *   VERIFIED: decomp: b[5] & 0xf
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte sd_csd_read_bl_len(int param_1)

{
  return *(byte *)(param_1 + 5) & 0xf;
}
